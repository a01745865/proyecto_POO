#ifndef DUENO_C
#define DUENO_C

#include "inventario.h"
#include "cliente.h"
#include "producto.h"
#include <iostream>
#include <string>
using namespace std;

class Dueno{
    string nombre_dueno, correo_dueno;
    int telefono_dueno, id_dueno, prestamo;
    public:
    Dueno()=default;
    Dueno(string nombre_dueno,string correo_dueno,int telefono_dueno,int id_dueno, int prestamo){
        this-> nombre_dueno = nombre_dueno;
        this-> correo_dueno = correo_dueno;
        this-> telefono_dueno = telefono_dueno;
        this->id_dueno = id_dueno;
        this->prestamo = prestamo;
    }
    string getNombre_dueno(){return nombre_dueno;}
    string getCorreo_dueno(){return correo_dueno;}
    int getTelefono_dueno(){return telefono_dueno;}
    int getId_dueno(){return id_dueno;}
    int getPrestamo(){return prestamo;}

    void setNombre_dueno(string nombre_dueno){this->nombre_dueno = nombre_dueno;}
    void setCorreo_dueno(string correo_dueno){this-> correo_dueno = correo_dueno;}
    void setTelefono_dueno(int telefono_dueno){this->telefono_dueno = telefono_dueno;}
    void setId_dueno(int id_dueno){this->id_dueno = id_dueno;}
    void setPrestamo(int prestamo){this->prestamo = prestamo;}

void registrar_datos_dueno(){
            id_dueno++;
            string nombre;
            int telefono;
            string correo;
            cin.ignore(32767,'\n');
            cout << "Ingrese su nombre: ", getline(cin, nombre);
            cout << "Ingresa su correo: ",  getline(cin, correo);
            cout << "Ingresa su telefono: "; cin>>telefono; 
            cout<<endl;
            setId_dueno(id_dueno);
            setCorreo_dueno(correo);
            setTelefono_dueno(telefono);
            setNombre_dueno(nombre);
}
void registrar_prestamo(){
    cout<<"¿Ha usted pedido un prestamo?"<<endl;
}

};//Clase dueño
#endif