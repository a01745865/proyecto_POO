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
    float prestamo_cantidad, pagar_cantidad, deuda;
    public:
    Dueno(){
        prestamo_cantidad = 0;
        pagar_cantidad = 0;
        deuda = 0;
    }
    Dueno(string nombre_dueno,string correo_dueno,int telefono_dueno,int id_dueno, int prestamo, float prestamo_cantidad, float pagar_cantidad, float deuda){
        this-> nombre_dueno = nombre_dueno;
        this-> correo_dueno = correo_dueno;
        this-> telefono_dueno = telefono_dueno;
        this->id_dueno = id_dueno;
        this->prestamo = prestamo;
        this->prestamo_cantidad = prestamo_cantidad;
        this->pagar_cantidad = pagar_cantidad;
        this->deuda = deuda;
    }
    string getNombre_dueno(){return nombre_dueno;}
    string getCorreo_dueno(){return correo_dueno;}
    int getTelefono_dueno(){return telefono_dueno;}
    int getId_dueno(){return id_dueno;}
    int getPrestamo(){return prestamo;}
    float getPrestamo_cantidad(){return prestamo_cantidad;}
    float getPagar_cantidad(){return pagar_cantidad;}
    float getDeuda(){return deuda;}

    void setNombre_dueno(string nombre_dueno){this->nombre_dueno = nombre_dueno;}
    void setCorreo_dueno(string correo_dueno){this-> correo_dueno = correo_dueno;}
    void setTelefono_dueno(int telefono_dueno){this->telefono_dueno = telefono_dueno;}
    void setId_dueno(int id_dueno){this->id_dueno = id_dueno;}
    void setPrestamo(int prestamo){this->prestamo = prestamo;}
    void setPrestamo_cantidad(float prestamo_cantidad){this-> prestamo_cantidad = prestamo_cantidad;}
    void setPagara_cantidad(float pagar_cantidad){this->pagar_cantidad;}
    void setDeuda(float deuda){this->deuda;}

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
int registrar_prestamo(){
    cout<<"¿Ha usted pedido un prestamo? (si = 1, no = 0) "; cin>>prestamo;
    switch(prestamo){
    case 1:
        cout<<"¿Cuánto dinero pidió prestado? "; cin>>prestamo_cantidad;
        return prestamo_cantidad;
        break;
    case 0:
        return prestamo_cantidad;
        break;
    default:
        cout<<"La opcion ingresada no es valida."<<endl;
        return prestamo_cantidad;
        break;
    }
  }
float registrar_pago_prestamo(){
    int pagar;
    cout<<"¿Ha pagado alguna de sus deudas? (si=1, no=0) ";cin>>pagar;
    switch(pagar){
        case  1:
            cout<<"¿Cuánto dinero ha pagado de sus deudas? ";cin>>pagar_cantidad;
            return pagar_cantidad;
            break;
        case 0:
            return pagar_cantidad;
            break;
        default:
            cout<<"La opcion ingresada no es valida."<<endl;
            return pagar_cantidad;
        break;
    }
}
int mostrar_deuda(float pagar_cantidad, float prestamo_cantidad){
    deuda = prestamo_cantidad - pagar_cantidad;
    cout<<"La deuda es de: $" + to_string(deuda)<<endl;
}
};//Clase dueño
#endif