#ifndef CLIENTE_C
#define CLIENTE_C

#include <iostream>
#include <string>

using  namespace std;

class Cliente{
    int telefono_cliente, num, c, compras;
    string nombre_cliente, correo_cliente, direccion_cliente;
    string tipo_cliente; 
    long id_cliente;
    public:
    Cliente(){
        tipo_cliente = "Standard";
        compras = 0;
        id_cliente = 0;
    }

    int getTelefono_cliente(){return telefono_cliente;}
    string getNombre_cliente(){return nombre_cliente;}
    string getCorreo_cliente(){return correo_cliente;}
    string getDireccion_cliente(){return direccion_cliente;}
    long getId_cliente(){return id_cliente;}
    string getTipo_cliente(){return tipo_cliente;}
    void setTelefono_cliente(int telefono_cliente){ this -> telefono_cliente = telefono_cliente;}
    void setNombre_cliente(string nombre_cliente){ this -> nombre_cliente = nombre_cliente;}
    void setCorreo_cliente(string correo_cliente){ this -> correo_cliente = correo_cliente;}
    void setDireccion_cliente(string direccion_cliente){ this -> direccion_cliente = direccion_cliente;}
    void setId_cliente(long setId_cliente){ this -> id_cliente = id_cliente;}
    void setTipo_cliente(string tipo_cliente){ this -> tipo_cliente = tipo_cliente;}


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
        int opcion;
        opcion = 1;
        while (opcion == 1){
            ++id_cliente;
            Cliente client = Cliente();
            string nombre;
            int telefono;
            string correo;
            string direccion;
            cin.ignore(32767,'\n');
            cout << "Ingresa el nombre del cliente: ", getline(cin, nombre);
            cout << "Ingresa el correo del cliente: ",  getline(cin, correo);
            cout << "Ingresa la direccion del cliente: ", getline(cin, direccion);
            cout << "Ingresa el telefono del cliente: "; cin>>telefono; 
            cout << "¿Quieres ingresar otro cliente? (Si = 1 / No = 2) "; cin >> opcion;
            cout<<endl;
            client.setId_cliente(id_cliente);
            client.setCorreo_cliente(correo);
            client.setTelefono_cliente(telefono);
            client.setNombre_cliente(nombre);
            client.setDireccion_cliente(direccion);
            cout << client.print() << endl;
        }
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
        return "Cliente: \n\tID: "+to_string(id_cliente)+"\n\tNombre: "+nombre_cliente+"\n\tCorreo: "+correo_cliente+"\n\tDireccion: "+direccion_cliente+"\n\tTelefono: "+to_string(telefono_cliente)+"\n";

    }

};


#endif