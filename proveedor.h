#ifndef PROVEEDOR_C
#define PROVEEDOR__C

#include <iostream>
#include "producto.h"
#include "inventario.h"
#include <string>
#include <vector>

using namespace std;

class proveedor
{
private:
    string nombre_empresa;
    int numero_proveedor;
    int id_proveedor;
    int costo_producto;
    int ganancia;
    int cantidad_comprada;

public:
    proveedor(){};
    proveedor(string nombre_empresa, int numero_proveedor, int id_proveedor,int costo_producto, int ganancia, int cantidad_comprada ){
        this -> nombre_empresa = nombre_empresa;
        this -> numero_proveedor = numero_proveedor;
        this -> id_proveedor = id_proveedor;
        this -> costo_producto = costo_producto;
        this -> ganancia = ganancia;
        this -> cantidad_comprada = cantidad_comprada;
    }
    ~proveedor();

    string getNombre_empresa(){return nombre_empresa;}
    int getNumero_proveedor(){return numero_proveedor;}
    int getId_proveedor(){return id_proveedor;}
    int getCosto_producto(){return costo_producto,}
    int getGanancia(){return ganancia;}
    int getCantidad_comprada(){return cantidad_comprada;}

    void setNombre_empresa(string nombre_empresa){this -> nombre_empresa = nombre_empresa;}
    void setNumero_proveedor(int numero_proveedor){this -> numero_proveedor = numero_proveedor;}
    void setId_proveedor(int id_proveedor){this -> id_proveedor = id_proveedor;}
    void setCosto_producto(int costo_producto){this -> costo_producto = costo_producto;}
    void setGanancia(int ganancia){this -> ganancia = ganancia;}
    void setCantidad_comprada(int cantidad_comprada){this -> cantidad_comprada = cantidad_comprada;}

    int otorgar_id_proveedor(){
        
    }//Otorgar id a un proveedor

    void registrar_datos_proveedor(){

    }//Registrar datos del proveedor

    int calcular_ganancia(){


    }//Calcular ganancia

    int hacer_pedido(){

    }//Hacer pedido


};


#endif 
