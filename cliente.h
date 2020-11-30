#ifndef CLIENTE_C
#define CLIENTE_C

#include <iostream>
#include <string>
using  namespace std;

class Cliente{
    int telefono_cliente, num, c, id_cliente, compras;
    string nombre_cliente, correo_cliente, direccion_cliente;
    string tipo_cliente; 
    public:
    Cliente(){
        tipo_cliente = "Standard";
        compras = 0;
        id_cliente = 1;
    }

    int getTelefono_cliente(){return telefono_cliente;}
    string getNombre_cliente(){return nombre_cliente;}
    string getCorreo_cliente(){return correo_cliente;}
    string getDireccion_cliente(){return direccion_cliente;}
    int getId_cliente(){return id_cliente;}
    string getTipo_cliente(){return tipo_cliente;}
    void setTelefono_cliente(int telefono_cliente){ this -> telefono_cliente = telefono_cliente;}
    void setNombre_cliente(string nombre_cliente){ this -> nombre_cliente = nombre_cliente;}
    void setCorreo_cliente(string correo_cliente){ this -> correo_cliente = correo_cliente;}
    void setDireccion_cliente(string direccion_cliente){ this -> direccion_cliente = direccion_cliente;}
    void setId_cliente(string setId_cliente){ this -> id_cliente = id_cliente;}
    void setTipo_cliente(string tipo_cliente){ this -> tipo_cliente = tipo_cliente;}

    int otorgar_id_cliente(){
        ++id_cliente;
        return id_cliente;
    }

    string otorgar_tipo(){
        if (compras>= 10){
            tipo_cliente = "Frecuente";
        } 
        else{
            tipo_cliente = "Standard";
        }
        return tipo_cliente;
    }

    void ingresar_datos(){
        Cliente client = Cliente();
        string nombre;
        int telefono;
        string correo;
        string direccion;
        cout << "Ingresa el nombre del cliente: ", getline(cin, nombre);
        cout << "Ingresa el correo del cliente: ",  getline(cin, correo);
        cout << "Ingresa la direccion del cliente: ", getline(cin, direccion);
        cout << "Ingresa el telefono del cliente: " ; cin >> telefono; 

        client.setCorreo_cliente(correo);
        client.setTelefono_cliente(telefono);
        client.setNombre_cliente(nombre);
        client.setDireccion_cliente(direccion);
        cout << client.print() << endl;
    }

    string registrar_compra(){
        int cantidad_compra;
        string tipo_prenda;
        cout << "Que tipo de prenda se adquirió (H/M): "; cin >> tipo_prenda;
        cout << "Cuantas prendas se adquirieron: "; cin >> cantidad_compra;
        compras = compras + cantidad_compra; 
    }
    
    int calcular_recompensa_cliente(){
        int recompensa;
        if (compras >= 5 ){
            recompensa = compras / 5 * 100;
        } 
        else{
            recompensa = 0;
        } 
        return recompensa;
    }



    string print(){
        return "Cliente: \nID: "+to_string(id_cliente)+"\nNombre: "+nombre_cliente+"\nCorreo: "+correo_cliente+"\nDireccion: "+direccion_cliente+"\nTelefono: "+to_string(telefono_cliente);
    }

};


#endif