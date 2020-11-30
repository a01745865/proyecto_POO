#ifndef PRODUCTO_C
#define PRODUCTO_C

#include "cliente.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Producto{
    float precio, promocion, promocion_cliente_frecuente, id_producto;
    string genero_prenda;
    public:
    Producto(){
        id_producto = 0.0;
        promocion_cliente_frecuente = .85;
    }
        
    Producto(float precio, float promocion, float promocion_cliente_frecuente, float id_producto,string genero_prenda){
        this->precio = precio;
        this->promocion = promocion;
        this->promocion_cliente_frecuente = promocion_cliente_frecuente;
        this->id_producto = id_producto;
        this->genero_prenda = genero_prenda;
    }
    float getPrecio(){return precio;}
    float getPromocion(){return promocion;}
    float getPromocion_cliente_frecuente(){return promocion_cliente_frecuente;}
    float getId_producto(){return id_producto;}
    string getGenero_prenda(){return genero_prenda;}

    void setPrecio(float precio){this->precio = precio;}
    void setPromocion(float promocion){this->promocion = promocion;}
    void setPromocion_cliente_frecuente(float promocion_cliente_frecuente){this->promocion_cliente_frecuente = promocion_cliente_frecuente;}
    void setId_producto(float id_producto){this->id_producto = id_producto;}
    void setGenero_prenda(string genero_prenda){this->genero_prenda = genero_prenda;}

    int otorgar_id_producto(){
        ++id_producto;
        return id_producto;
    }//otorgar id producto

    float aplicar_descuento_cliente(){
        Cliente cliente1;
        if (cliente1.otorgar_tipo() == "Frecuente"){
            precio = precio * promocion_cliente_frecuente;
        }
        return precio;
    }

    void datos_producto(){
        float opcion;
        opcion = 1;
        vector<Producto> datos;

        while (opcion == 1){
            Producto prod = Producto();
            float costo;
            float promo;
            string genero;
            cout<<"Ingresa el precio del producto: "; cin >> costo;
            cout<<"¿El producto tiene una promoción? (si no tiene pon 0, si sí escribelo como decimal): "; cin >> promo;
            cout<<"¿De que genero es la prenda? (H/M) ";cin >>genero;
            cout<<"¿Quieres ingresar otro producto? (sí = 1, no = 0) "; cin >>opcion;
            prod.otorgar_id_producto();
            prod.setPrecio(costo);
            prod.setPromocion(promo);
            prod.setGenero_prenda(genero);
            cout<<prod.print()<<endl;
            datos.push_back(prod);
            cout<<datos[1];
        }//while
    }//datos producto
    string print(){
        return"El precio del producto es de: $"+ to_string(precio)+"\nEse producto tiene promoción del "+ to_string(promocion) +" porciento.\n"+"Esa prenda está disponible para " + genero_prenda;
    }//print
    void aplicar_promocion(){
        precio = precio * (1-promocion);
        cout << "Con la promoción el nuevo precio es: $"+to_string(precio)<<endl;
    }//aplicar promocion
};//Clase Producto

#endif