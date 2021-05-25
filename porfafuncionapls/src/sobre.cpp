#include "sobre.h"




    //Constructor
    Sobre(Direccion remitente, Direccion destinatario, float largo, float ancho) :Envio(remitente, destinatario) {
        Largo = largo;
        Ancho = ancho;
        Cargoadicional = 30;
        Remitente = remitente;
        Destinatario = destinatario;

    }
    //Sets
    void set_Largo(float largo) {
        Largo = largo;
    }
    void set_Ancho(float ancho) {
        Ancho = ancho;
    }
    void set_Cargo(float cargo) {
        Cargoadicional = cargo;
    }
    //Gets
    float get_Largo() {
        return Largo;
    }
    float get_Ancho() {
        return Ancho;
    }
    float get_Cargo() {
        return Cargoadicional;
    }
    // Funciones
    double calcularcosto() { //Transformación: L
        if ((Largo * Ancho) > 750) {
            cout << "Se aplicara un cargo adicional de " << Cargoadicional << endl;
            return 70 + Cargoadicional;
        }
        else {
            return 70;
        }

    }

