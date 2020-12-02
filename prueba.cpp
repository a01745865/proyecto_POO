
#include "inventario.h"
#include <iostream>
#include <string>

using  namespace std;

int main(){
    Inventario inv1;
    cout<<"Pruebas generales"<<endl;
    cout << inv1.agregar_producto() << endl;
    inv1.mostrar_atributos_producto();
    cout << inv1.mostrar_disponible() << endl; 
    cout << inv1.agregar_Clientes() << endl;
    inv1.mostrar_atributos_cliente();
    inv1.agregar_datos_proveedor();//Esto es parte de la implementacion de la programacion individual de Angel
    inv1.mostrar_atributos_proveedor();//Esto es parte de la implementacion de la programacion individual de Angel
    inv1.borrar_producto();
    inv1.recompensa_tipo_cliente();
    inv1.hacer_pedido();//Esto es parte de la implementacion de la programacion individual de Angel
};
