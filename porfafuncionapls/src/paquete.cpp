#include "paquete.h"


    //Constructor
    paquete(Direccion remitente, Direccion destinatario, float largo, float ancho, float profundidad, float peso, float costo_por_kg) : Envio(remitente, destinatario) {
        Largo = largo;
        Ancho = ancho;
        Profundidad = profundidad;
        Peso = peso;
        Costo_por_kg = costo_por_kg;
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
    void set_Profundidad(float profundidad) {
        Profundidad = profundidad;
    }
    void set_Peso(float peso) {
        Peso = peso;
    }
    void set_Costo(float costo) {
        Costo_por_kg = costo;
    }

    //Gets
    float get_Largo() {
        return Largo;
    }
    float get_Ancho() {
        return Ancho;
    }
    float get_Profundidad() {
        return Profundidad;
    }
    float get_Peso() {
        return Peso;
    }
    float get_Costo() {
        return Costo_por_kg;
    }



    //Funciones
    double calcularcosto() {
        if (Peso < 0)
        {
            cout << "Error. El peso tiene valor negativo. Intentar de nuevo." << endl;
            //exit;
        }
        if (Costo_por_kg < 0)
        {
            cout << "Error. El Costo por Kg tiene valor negativo. Intentar de nuevo." << endl;
            //exit;
        }

        double costo = 70 + Peso * Costo_por_kg;
        return costo;

    }


