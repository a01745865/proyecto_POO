#ifndef CLIENTE_C
#define CLIENTE_C

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>
using  namespace std;

class Cliente{
    int telefono_cliente, num, c;
    string nombre_cliente, correo_cliente, id_cliente, direccion_cliente;
    string tipo_cliente = "Standard"; 
    public:
    Cliente(){
    }

    string registrar_nombre_cliente(){
        cout << "Ingresa el nombre del cliente: "; 
        getline(cin, nombre_cliente);
        return nombre_cliente;
    }

    string registrar_correo_cliente(){
        cout<< "Ingresa el correo del cliente: ";
        getline(cin, correo_cliente);
        return correo_cliente;
    }

    string registrar_direccion_cliente(){
        cout<< "Ingresa la direccion del cliente: ";
        getline(cin, direccion_cliente);
        return direccion_cliente;
    }

    int registrar_telefono_cliente(){
        cout<< "Ingresa el telefono del cliente: "; cin >> telefono_cliente;
        return telefono_cliente;
    }



    int getTelefono_cliente(){return telefono_cliente;}
    string getNombre_cliente(){return nombre_cliente;}
    string getCorreo_cliente(){return correo_cliente;}
    string getDireccion_cliente(){return direccion_cliente;}

    void setTelefono_cliente(int telefono_cliente){
        this -> telefono_cliente = telefono_cliente;
    }
    void setNombre_cliente(string nombre_cliente){
        this -> nombre_cliente = nombre_cliente;
    }
    void setCorreo_cliente(string correo_cliente){
        this -> correo_cliente = correo_cliente;
    }
    void setDireccion_cliente(string direccion_cliente){
        this -> direccion_cliente = direccion_cliente;
    }

    string otorgar_id_cliente(string nombre_cliente, string tipo_cliente){
        srand(time(NULL));
        num = 1 + rand() % (101-1);
        id_cliente = to_string(num) + nombre_cliente[0] + " " +tipo_cliente[0];
        return id_cliente;
    }

    string otorgar_tipo(){
        tipo_cliente = "Frecuente";
        return tipo_cliente;
    }

    string getId_cliente(){return id_cliente;}
    
    string getTipo_cliente(){return tipo_cliente;}

    void setId_cliente(string setId_cliente){
        this -> id_cliente = id_cliente;
    }
    void setTipo_cliente(string tipo_cliente){
        this -> tipo_cliente = tipo_cliente;
    }

};


#endif