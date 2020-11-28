#ifndef CLIENTE_C
#define CLIENTE_C

#include <iostream>
#include <string>
using  namespace std;

class Cliente{
    int telefono_cliente;
    string nombre_cliente, correo_cliente, id_cliente, direccion_cliente;
    string tipo_cliente = "Standard"; 
    public:
    Cliente(){
    }

    string Registrar_nombre_cliente(){
        cout << "Ingresa el nombre del cliente: "; 
        getline(cin, nombre_cliente);
        return nombre_cliente;
    }

    string Registrar_correo_cliente(){
        cout<< "Ingresa el correo del cliente: ";
        getline(cin, correo_cliente);
        return correo_cliente;
    }

    string Registrar_direccion_cliente(){
        cout<< "Ingresa la direccion del cliente: ";
        getline(cin, direccion_cliente);
        return direccion_cliente;
    }

    int Registrar_telefono_cliente(){
        cout<< "Ingresa el telefono del cliente: "; cin >> telefono_cliente;
        return telefono_cliente;
    }

    string Otorgar_id_cliente(string nombre_c, string tipo_cliente){
        id_cliente = nombre_c + " " +tipo_cliente;
        return id_cliente;
    }


    int getTelefono_cliente(){return telefono_cliente;}
    string getNombre_cliente(){return nombre_cliente;}
    string getCorreo_cliente(){return correo_cliente;}
    string getTipo_cliente(){return tipo_cliente;}
    string getDireccion_cliente(){return direccion_cliente;}

    void setTelefono_cliente(int tel_c){
        telefono_cliente = tel_c;
    }
    void setNombre_cliente(string nombre_c){
        nombre_cliente = nombre_c;
    }
    void setCorreo_cliente(string correo_c){
        correo_cliente = correo_c;
    }
    void setTipo_cliente(string tipo_c){
        tipo_cliente = tipo_c;
    }
    void setDireccion_cliente(string dir_c){
        direccion_cliente = dir_c;
    }



};


#endif