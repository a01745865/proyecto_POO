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
    float promocion_tienda;
    Producto producto;
    Cliente cliente;
    vector<Producto>productos;
    vector<Cliente>clientes;
    public:
    Inventario()=default;//Constructor default
    Inventario (int cantidad_producto,float promocion_tienda, Cliente cliente,Producto producto,vector<Producto> productos,vector<Cliente>clientes){
        this->cantidad_producto = cantidad_producto;
        this->promocion_tienda = promocion_tienda;
        this -> producto = producto ;
        this -> cliente = cliente;
        this->productos = productos;
        this->clientes = clientes;
    }

    int getCantidad_producto(){return cantidad_producto;}
    float getPromocion_tienda(){return promocion_tienda;}
    Producto getProducto(){return producto;}
    Cliente getCliente(){return cliente;}
    vector<Producto> getProductos(){return productos;}
    vector<Cliente> getClientes(){return clientes;}


    void setCantidad_producto(int cantidad_producto){this->cantidad_producto = cantidad_producto;}
    void setPromocion_tienda(float promocion_tienda){this->promocion_tienda = promocion_tienda;}
    void setProducto(Producto producto){this-> producto = producto;}
    void setCliente(Cliente cliente){this -> cliente = cliente;}
    void setProductos(vector<Producto>){this->productos = productos;}
    void setClientes(vector<Cliente>){this->clientes=clientes;}


    void mostrar_atributos_producto(){
        for (int i = 0; i < productos.size();i++){
            cout << productos[i].print() << endl;
        }//Ciclo para ir mopstrando cada objeto del vector
    }//Mostrar atributos del producto

    string mostrar_disponible(){
         return "Tienes "+ to_string(productos.size())+ " productos disponibles";
    }//mostrar disponible

    string agregar_Clientes(){
        int opcion = 1;
        int contador = 0;
        while (opcion == 1){
            cliente.ingresar_datos();
            contador++;
            cout<<"¿Quieres ingresar otro cliente? (si = 1, no = 0): "; cin >>opcion;
            clientes.push_back(cliente);
        }//while
        return "\nSe agregaron "+to_string(contador)+ " clientes. ";         
    }// Agregar cliente

    void mostrar_atributos_cliente(){
        for (int i = 0; i < clientes.size();i++){
            cout << clientes[i].print() << endl;
        }//Ciclo para ir mopstrando cada objeto del vector
    }// Mostrar atributos del cliente

    void borrar_producto(){
        string tipo;
        int contador_m = 0;
        int contador_h = 0;
        int cantidad;
        for (int c = 0; c < productos.size(); c ++){
            if (productos[c].getGenero_prenda() == "H"){
                contador_h++;
            }//if
            else if (productos[c].getGenero_prenda() == "M")
            {
                contador_m++;
            }// elseif  
        }//For
        for (int i = 0; i < clientes.size(); i ++){
            clientes[i].registrar_compra();
            tipo = clientes[i].getTipo_prenda();
            cantidad = clientes[i].getCantidad_compra();
                for (int a = 0; a < cantidad; a ++){
                    for (int b = 0; b < productos.size(); b ++){
                        if (tipo == productos[b].getGenero_prenda()){
                            productos.erase(productos.begin() + b);
                            if (saber_tipo_cliente(clientes[i]) == "Frecuente"){
                                productos[b].aplicar_descuento_cliente();
                            }//If
                            cout << "\nSe aquirio el producto: "+ productos[b].print() + "\n"; 
                             break;
                        }// condicion que evalua si el tipo de prenda que se compro esta en algun objeto del vector productos
                    }// ciclo que itera el vector productos
                }// ciclo que se repíte la cantidad de veces que se compro un tipo de prenda
                if (tipo == "H" && cantidad > contador_h){
                    cout << "\nHace falta comprar "+ to_string(cantidad - contador_h) + " prendas de tipo: "+ tipo + "\n";
                }//If
                else if (tipo == "M" && cantidad > contador_m){
                    cout << "\nHace falta comprar "+ to_string(cantidad - contador_m) + " prendas de tipo: "+ tipo + "\n";
                }//ElseIf
                else{
                    cout << "\nQuedan "+ to_string(productos.size()) + " productos en su inventario.\n" << endl;
                }//Else
        }// ciclo que itera el vector clientes
    }//borrar producto

    string saber_tipo_cliente(Cliente cli){
        cout << "\nEl cliente "+ cli.getNombre_cliente() + " es tipo: "+ cli.otorgar_tipo() +"\n" << endl;
        return cli.otorgar_tipo();
    }

    void recompensa_tipo_cliente(){
        for (int i = 0; i < clientes.size(); i++ ){
            cout << "\nEl cliente: "+ clientes[i].getNombre_cliente() + " tiene una recompensa de: $"+ to_string(clientes[i].calcular_recompensa_cliente()) +" en su tienda.\n" << endl;
        }        
    }


    string agregar_producto(){
        int opcion = 1;
        int contador = 0;
        int cantidad;
        while (opcion == 1){
            producto.datos_producto();
            cout << "\n¿Cuantos productos iguales adquiriste? "; cin >> cantidad;
            contador++;
            cout<<"¿Quieres ingresar otro producto? (si = 1, no = 0): "; cin >>opcion;
            for (int i = 0; i < cantidad; i++){
                producto.otorgar_id_producto();
                productos.push_back(producto);
            }//Ciclo que va a agregar el producto la cantidad de veces que se adquirieron
        }//while
        return "\nSe agregaron "+to_string(contador)+ " productos. "; 
    }//agregar producto

};//Clase Inventario
#endif