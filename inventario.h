#include "producto.h"
#ifndef INVENTARIO_C
#define INVENTARIO_C

#include <iostream>
#include <string>
using  namespace std;

class Inventario{
    int cantidad_producto;
    string color_producto;
    float promocion_tienda;
    Producto producto;
    Cliente cliente;
    public:
    Inventario()=default;//Constructor default

string mostrar_atributos_producto(){
}//Mostrar atributos del producto

string mostrar_disponible(){
}//mostrar disponible

string borrar_producto(){   
}//borrar producto

string agregar_producto(){
}//agregar producto

string estimar_entrega(){   
}//estimar entrega

string generar_alerta_nueva_mercancia(){
}//Alerta nueva mercancia (generar)

};//Clase Inventario
#endif