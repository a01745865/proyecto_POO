#include <iostream>
#include <string>
#include "inventario.h"
using namespace std;

int main( ){
    int res {};
    Inventario inv;
    while(res != 10){
        cout<<"\n~~Ingresa un numero de acuerdo a la opcion que quieras elegir.~~\n"<<endl;
        cout<<"\t1. Agregar productos al inventario. \n";
        cout<<"\t2. Dar de alta a un cliente. \n";
        cout<<"\t3. Registrar las compras de un cliente. \n";
        cout<<"\t4. Ver informacion del cliente. \n";
        cout<<"\t5. Calcular la recompensa que va a adquir el cliente (monedero $). \n";
        cout<<"\t6. Ver inventario. \n";
        cout<<"\t7. Ingresar datos del proveedor. \n";// Esto es parte de la implementacion de la programacion individual de Angel
        cout<<"\t8. Ver datos del proveedor. \n";// Esto es parte de la implementacion de la programacion individual de Angel
        cout<<"\t9. Hacer pedido al proveedor. \n";// Esto es parte de la implementacion de la programacion individual de Angel
        cout<<"\t10. Salir. \n";
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
            if (inv.getProductos().size()==0 || inv.getClientes().size() == 0 || /* Esto es parte de la implementacion de la programacion individual de Angel -> */inv.getProveedor().getId_proveedor() == 0){
                cout<<"No hay productos o clientes o proveedor dados de alta."<<endl;
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
                    Cliente cl;
                    cl = inv.getClientes()[i];
                    if (cl.getCompras()>= 5){
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
            break;
        case 7:// Esto es parte de la implementacion de la programacion individual de Angel
            inv.agregar_datos_proveedor();
            break;
        case 8:// Esto es parte de la implementacion de la programacion individual de Angel
            if (inv.getProveedor().getId_proveedor() == 0){
                cout << "\nNo hay proveer que mostrar, favor de ingresar antes un proveedor. \n" << endl;
                break;
            }
            else{
                inv.mostrar_atributos_proveedor();
                break;
            }
            break;
        case 9:// Esto es parte de la implementacion de la programacion individual de Angel
            inv.hacer_pedido();
        }//switch
    }//while
};//main