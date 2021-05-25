#ifndef SOBRE_H
#define SOBRE_H
#include "Envio.h"
#include <string>
using namespace std;



class Sobre :Envio {
private:
    Direccion Remitente, Destinatario;
    float Largo, Ancho;
    double Cargoadicional;
public:

    //Constructor
    Sobre(Direccion , Direccion , float , float ) :Envio(Direccion, Direccion);

    //Sets
    void set_Largo(float largo);
    void set_Ancho(float ancho);
    void set_Cargo(float cargo);

    //Gets
    float get_Largo();
    float get_Ancho();
    float get_Cargo();

    // Funciones
    double calcularcosto();
};

#endif // SOBRE_H
