#ifndef PRODUCTO_C
#define PRODUCTO_C


#include <iostream>
#include "cliente.h"
#include <string>
#include <vector>
using namespace std;

class Producto{
    Cliente cliente1;
    float precio, promocion, promocion_cliente_frecuente;
    int id_producto;
    string genero_prenda;
    public:
    Producto(){
        id_producto = 0;
        promocion_cliente_frecuente = .85;
    }
        
    Producto(float precio, float promocion, float promocion_cliente_frecuente, int id_producto,string genero_prenda){
        this->precio = precio;
        this->promocion = promocion;
        this->promocion_cliente_frecuente = promocion_cliente_frecuente;
        this->id_producto = id_producto;
        this->genero_prenda = genero_prenda;
    }
    float getPrecio(){return precio;}
    float getPromocion(){return promocion;}
    float getPromocion_cliente_frecuente(){return promocion_cliente_frecuente;}
    int getId_producto(){return id_producto;}
    string getGenero_prenda(){return genero_prenda;}

    void setPrecio(float precio){this->precio = precio;}
    void setPromocion(float promocion){this->promocion = promocion;}
    void setPromocion_cliente_frecuente(float promocion_cliente_frecuente){this->promocion_cliente_frecuente = promocion_cliente_frecuente;}
    void setId_producto(int id_producto){this->id_producto = id_producto;}
    void setGenero_prenda(string genero_prenda){this->genero_prenda = genero_prenda;}

    int otorgar_id_producto(){
        ++id_producto;
        return id_producto;
    }//otorgar id producto

    float aplicar_descuento_cliente(){
        if (cliente1.otorgar_tipo() == "Frecuente"){
            precio = precio * promocion_cliente_frecuente;
        }
        return precio;
    }

    void datos_producto(){
        //vector<Producto> datos;
        float costo;
        float promo;
        string genero;
        cout<<"Ingresa el precio del producto: "; cin >> costo;
        cout<<"¿El producto tiene una promoción? (si no tiene pon 0, si sí escribelo como decimal): "; cin >> promo;
        cout<<"¿De que genero es la prenda? (H/M) ";cin >>genero;
        cout<<endl;
        otorgar_id_producto();
        setPrecio(costo);
        setPromocion(promo);
        setGenero_prenda(genero);
        aplicar_promocion();
        //datos.push_back(prod);
        //for (int i=0; i<datos.size(); i++){
            //cout<<"Producto: " + to_string(i+1);
            //cout<<datos[i].print();
            //datos[i].aplicar_promocion();
        //}
            
        
    }//datos producto
    string print(){
        return"\nProducto: \n\tID: " + to_string(id_producto) + "\n\tEl precio del producto es de: $"+ to_string(precio)+"\n\tEse producto tiene promoción del "+ to_string(promocion) +" porciento.\n\t"+"Esa prenda está disponible para " + genero_prenda+ "\n";
    }//print
    void aplicar_promocion(){
        float descuento;
        descuento = precio * promocion;
        precio = precio - descuento;
        cout << "\tCon la promoción el nuevo precio es: $"+to_string(precio)<<endl;
        
    }//aplicar promocion
};//Clase Producto

#endif