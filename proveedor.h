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
    float costo_producto;
    float costo_total;
    float ganancia;
    int cantidad_comprada;

public:
    proveedor(){};
    proveedor(string nombre_empresa, int numero_proveedor, int id_proveedor,float costo_producto, float costo_total,float ganancia, int cantidad_comprada ){
        this -> nombre_empresa = nombre_empresa;
        this -> numero_proveedor = numero_proveedor;
        this -> id_proveedor = id_proveedor;
        this -> costo_producto = costo_producto;
        this -> costo_total = costo_total;
        this -> ganancia = ganancia;
        this -> cantidad_comprada = cantidad_comprada;
    }
    ~proveedor();

    string getNombre_empresa(){return nombre_empresa;}
    int getNumero_proveedor(){return numero_proveedor;}
    int getId_proveedor(){return id_proveedor;}
    float getCosto_producto(){return costo_producto;}
    float getCosto_total(){return costo_total;}
    float getGanancia(){return ganancia;}
    int getCantidad_comprada(){return cantidad_comprada;}

    void setNombre_empresa(string nombre_empresa){this -> nombre_empresa = nombre_empresa;}
    void setNumero_proveedor(int numero_proveedor){this -> numero_proveedor = numero_proveedor;}
    void setId_proveedor(int id_proveedor){this -> id_proveedor = id_proveedor;}
    void setCosto_producto(float costo_producto){this -> costo_producto = costo_producto;}
    void setCosto_total(float costo_total){this -> costo_total = costo_total;}
    void setGanancia(float ganancia){this -> ganancia = ganancia;}
    void setCantidad_comprada(int cantidad_comprada){this -> cantidad_comprada = cantidad_comprada;}

    void otorgar_id_proveedor(){
        id_proveedor++;
    }//Otorgar id a un proveedor

    void registrar_datos_proveedor(){
        string nombre;
        int telefono;
        float costo;
        cin.ignore(32767,'\n');
        cout << "Ingresa el nombre de la empresa proveedora: ", getline(cin, nombre);
        cout << "Ingresa el costo del producto: "; cin >> costo;
        cout << "Ingresa el telefono del proveedor: "; cin>>telefono; 
        cout<<endl;
        otorgar_id_proveedor()
        setNombre_empresa(nombre);
        setCosto_producto(costo);
        setNumero_proveedor(telefono);
    }//Registrar datos del proveedor

    float calcular_ganancia(float costo_publico){   
        ganancia = costo_publico - costo_producto;
        return ganancia;
    }//Calcular ganancia

    void hacer_pedido(int cantidad_faltante){
        if (cantidad_faltante > 0 ){
            costo_total = costo_producto * cantidad_faltante;
            cout << "Se pidieron: " + to_string(cantidad_faltante) + "productos, se debe de pagar al proveedor: "+ nombre_empresa + " la cantidad de: $"+to_string(costo_total) << endl;
        }//If
        else{
            cout << "\nNo se necesita ningun producto por el momento. \n" << endl;
            costo_total = 0;
        }//else
    }//Hacer pedido

    string print(){
        return "\nProveedor: \n" + "\tNombre: " + nombre_empresa + "\n\tCosto al dueño: " + to_string(costo)+ "\n\tNumero de telefono: " + to_string(numero_proveedor) + "\n";   
    }//Print

};


#endif 
