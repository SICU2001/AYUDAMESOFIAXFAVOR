#ifndef ENVIO_H
#define ENVIO_H
#include "Direccion.h"
#include <string>
using namespace std;


class Envio {
private:
    Direccion Remitente;
    Direccion Destinatario;
public:

    //Constructor
    Envio(Direccion , Direccion );


    //Clases
    double calcularcosto();

};

#endif // ENVIO_H
