
#include "inventario.h"
#include "cliente.h"
#include "producto.h"
#include "dueno.h"
#include <iostream>
#include <string>

using  namespace std;

int main(){

    Inventario inv1;
    cout << inv1.agregar_producto() << endl;
    inv1.mostrar_atributos_producto();
    cout << inv1.mostrar_disponible() << endl; 
    cout << inv1.agregar_Clientes() << endl;
    inv1.mostrar_atributos_cliente();
    inv1.borrar_producto();
    inv1.recompensa_tipo_cliente();
    //Parte individual hecha por Erika
    Dueno d1;
    cout<<"Pruebas generales"<<endl;
    d1.registrar_datos_dueno();
    cout<<d1.print_info_dueno()<<endl;
    d1.registrar_prestamo();
    d1.registrar_pago_prestamo();
    d1.mostrar_deuda();
    d1.agregar_producto_inventario();
    d1.calcular_ganancia();
};
