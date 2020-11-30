#include "producto.h"
#ifndef INVENTARIO_C
#define INVENTARIO_C

#include <iostream>
#include <string>
#include <vector>
using  namespace std;

class Inventario{
    int cantidad_producto;
    string color_producto;
    float promocion_tienda;
    vector<Producto>productos;
    vector<Cliente>clientes;
    public:
    Inventario()=default;//Constructor default
    Inventario (int cantidad_producto, string color_producto,float promocion_tienda,vector<Producto> productos,vector<Cliente>clientes){
        this->cantidad_producto = cantidad_producto;
        this->color_producto = color_producto;
        this->promocion_tienda = promocion_tienda;
        this->productos = productos;
        this->clientes = clientes;
    }
    int getCantidad_producto(){return cantidad_producto;}
    string getColor_producto(){return color_producto;}
    float getPromocion_tienda(){return promocion_tienda;}
    vector<Producto> getProductos(){return productos;}
    vector<Cliente> getClientes(){return clientes;}

    void setCantidad_producto(int cantidad_producto){this->cantidad_producto = cantidad_producto;}
    void setColor_producto(string color_producto){this->color_producto = color_producto;}
    void setPromocion_tienda(float promocion_tienda){this->promocion_tienda = promocion_tienda;}
    void setProductos(vector<Producto>){this->productos = productos;}
    void setClientes(vector<Cliente>){this->clientes=clientes;}


string mostrar_atributos_producto(){
    for (int i = 0; i < productos.size();i++){
        //cout<<productos[i]<<endl;
    }
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