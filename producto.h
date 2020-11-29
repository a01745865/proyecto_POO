#ifndef PRODUCTO_C
#define PRODUCTO_C

#include <iostream>
#include <string>
using namespace std;

class Producto{
    int precio, promocion, promocion_cliente_frecuente;
    string id_producto;
    public:
    Producto(){
    }
    Producto(int precio, int promocion, int promocion_cliente_frecuente, string id_producto){
        this->precio = precio;
        this->promocion = promocion;
        this->promocion_cliente_frecuente = promocion_cliente_frecuente;
        this->id_producto = id_producto;
    }
    int getPrecio(){return precio;}
    int getPromocion(){return promocion;}
    int getPromocion_cliente_frecuente(){return promocion_cliente_frecuente;}
    string getId_producto(){return id_producto;}

    void setPrecio(int precio){this->precio = precio;}
    void setPromocion(int promocion){this->promocion = promocion;}
    void setPromocion_cliente_frecuente(int promocion_cliente_frecuente){this->promocion_cliente_frecuente = promocion_cliente_frecuente;}
    void setId_producto(string id_producto){this->id_producto = id_producto;}

    string Otorgar_id_producto(){
        
    }
};//Clase Producto

#endif