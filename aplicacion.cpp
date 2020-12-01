#include <iostream>
#include <string>
#include "inventario.h"
using namespace std;

int main( ){
    int res {};
    Inventario inv;
    while(res != 7){
        cout<<"\n~~Ingresa un numero de acuerdo a la opcion que quieras elegir.~~\n"<<endl;
        cout<<"\t1. Agregar productos al inventario. \n";
        cout<<"\t2. Dar de alta a un cliente. \n";
        cout<<"\t3. Registrar las compras de un cliente. \n";
        cout<<"\t4. Ver informacion del cliente. \n";
        cout<<"\t5. Calcular la recompensa que va a adquir el cliente (monedero $). \n";
        cout<<"\t6. Ver inventario. \n";
        cout<<"\t7. Salir. \n";
        cout<<"Opcion: "; cin>>res;

        switch (res)
        {
        case 1:
            cout<<endl;
            cout<<inv.agregar_producto()<<endl;
            break;
        case 2:
            cout<<endl;
            cout<<inv.agregar_Clientes()<<endl;
            break;
        case 3:
            if (inv.getProductos().size()==0 || inv.getClientes().size() == 0){
                cout<<"No hay productos o clientes dados de alta."<<endl;
                break;
            }
            else{
               inv.borrar_producto();
            }
            cout<<endl;
            break;
        case 4: 
            if (inv.getClientes().size()==0){
                cout<<"No hay clientes dados de alta."<<endl;
                break;

            }   
            else{
                inv.mostrar_atributos_cliente();
            }
            break;
        case 5:
            if (inv.getClientes().size()==0 ){  
                cout<<"No se han ingresado clientes."<<endl;
                break;            
            }
            else{
               for (int i = 0; i<inv.getClientes().size(); i++){
                    if (inv.getClientes()[i].getCompras() >= 5){
                        inv.recompensa_tipo_cliente();
                        break;
                    }
                    else{
                        cout<<"No hay suficientes compras para calcular una recompensa."<<endl;
                        break;
                    }
                } 
            }
            break;
        case 6:
            if(inv.getProductos().size()==0){
                cout<<"El inventario está vacío."<<endl;
                break;
            }
            else{
                inv.mostrar_atributos_producto();
                cout<<inv.mostrar_disponible()<<endl;
                break;
            }
        }//switch
    }//while
}//main