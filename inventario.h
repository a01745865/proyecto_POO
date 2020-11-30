#ifndef INVENTARIO_C
#define INVENTARIO_C


#include <iostream>
#include <string>
#include <vector>
#include "producto.h"
#include "cliente.h"
using  namespace std;

class Inventario{
    int cantidad_producto;
    string color_producto;
    float promocion_tienda;
    Producto producto;
    vector<Producto>productos;
    vector<Cliente>clientes;
    public:
    Inventario()=default;//Constructor default
    Inventario (int cantidad_producto, string color_producto,float promocion_tienda, Producto producto,vector<Producto> productos,vector<Cliente>clientes){
        this->cantidad_producto = cantidad_producto;
        this->color_producto = color_producto;
        this->promocion_tienda = promocion_tienda;
        this -> producto = producto ;
        this->productos = productos;
        this->clientes = clientes;
    }

    int getCantidad_producto(){return cantidad_producto;}
    string getColor_producto(){return color_producto;}
    float getPromocion_tienda(){return promocion_tienda;}
    Producto getProducto(){return producto;}
    vector<Producto> getProductos(){return productos;}
    vector<Cliente> getClientes(){return clientes;}

    void setCantidad_producto(int cantidad_producto){this->cantidad_producto = cantidad_producto;}
    void setColor_producto(string color_producto){this->color_producto = color_producto;}
    void setPromocion_tienda(float promocion_tienda){this->promocion_tienda = promocion_tienda;}
    void setProducto(Producto producto){this-> producto = producto;}
    void setProductos(vector<Producto>){this->productos = productos;}
    void setClientes(vector<Cliente>){this->clientes=clientes;}


    void mostrar_atributos_producto(){
        for (int i = 0; i < productos.size();i++){
            cout << productos[i].print() << endl;
            //cout<<productos[i]<<endl;
        }//Ciclo para ir mopstrando cada objeto del vector
    }//Mostrar atributos del producto

    string mostrar_disponible(){
         return "Tienes "+ to_string(productos.size())+ " productos disponibles";
    }//mostrar disponible

    void borrar_producto(){
        string tipo;
        int cantidad;
        int contador = 0;
        for (int i = 0; i < clientes.size(); i ++){
            clientes[i].registrar_compra();
            tipo = clientes[i].getTipo_prenda();
            cantidad = clientes[i].getCantidad_compra();
                for (int a = 0; a < cantidad; a ++){
                    if  (productos.size() > 0){
                        for (int b = 0; b < productos.size(); b ++){
                            if (tipo == productos[b].getGenero_prenda()){
                                productos.erase(productos.begin() + i);
                                contador++; 
                                break;
                            }// condicion que evalua si el tipo de prenda que se compro esta en algun objeto del vector productos
                        }// ciclo que itera el vector productos
                    } // Condicion que evalua cuando ya no hay mas productos que borrar
                    else{
                        cout << "\nHace falta comprar "+ to_string(cantidad - contador) + " prendas de tipo: "+ tipo + "\n";
                    }//Le avisa al dueño cuando ya no tiene inventario de un tipo de prenda y le dice cuantas prendas tiene que surtir dependiendo el numero de prendas que faltan para el cliente.
                }// ciclo que se repíte la cantidad de veces que se compro un tipo de prenda
            }// ciclo que itera el vector clientes
    }//borrar producto

    string agregar_producto(){
        int opcion = 1;
        int contador = 0;
        while (opcion == 1){
            producto.datos_producto();
            contador++;
            cout<<"¿Quieres ingresar otro producto? (sí = 1, no = 0): "; cin >>opcion;
            productos.push_back(producto);
        }//while
        return "\nSe agregaron "+to_string(contador)+ " productos. "; 
    }//agregar producto

};//Clase Inventario
#endif