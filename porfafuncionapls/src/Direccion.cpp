#include "Direccion.h"

//Aqui va todo menos la declaración de la clase
Direccion(string nombre, string calle, int numero, int cp, string ciudad, string estado) {
        Nombre = nombre;
        Calle = calle;
        Numero = numero;
        Cp = cp;
        Ciudad = ciudad;
        Estado = estado;
}

Direccion() { //Vacio para cuando se inicialice en otra clase.

}

//getters
string get_Nombre() {
        return Nombre;
    }


    string get_Calle() {
        return Calle;
    }
    string get_Ciudad() {
        return Ciudad;
    }
    string get_Estado() {
        return Estado;
    }
    int get_Numero() {
        return Numero;
    }
    int get_cp() {
        return Cp;
    }

    //Sets
    void set_Nombre(string nombre) {
        Nombre = nombre;
    }
    void set_Calle(string calle) {
        Calle = calle;
    }
    void set_Ciudad(string ciudad) {
        Ciudad = ciudad;
    }
    void set_Estado(string estado) {
        Estado = estado;
    }
    void set_Numero(int numero) {
        Numero = numero;
    }
    void set_cp(int cp) {
        Cp = cp;
    }

    //Funciones adicionales
