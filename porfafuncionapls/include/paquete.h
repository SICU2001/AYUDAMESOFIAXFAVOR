#ifndef PAQUETE_H
#define PAQUETE_H
#include "Envio.h"
#include <string>
using namespace std;


class paquete :Envio {
private:
    Direccion Remitente, Destinatario;
    float Largo, Ancho, Profundidad, Peso, Costo_por_kg;
public:
    //Constructor
    paquete(Direccion , Direccion , float , float , float , float , float ) : Envio(Direccion, Direccion);
    //Sets
    void set_Largo(float largo);
    void set_Ancho(float ancho);
    void set_Profundidad(float profundidad);
    void set_Peso(float peso);
    void set_Costo(float costo);

    //Gets
    float get_Largo();
    float get_Ancho();
    float get_Profundidad();
    float get_Peso();
    float get_Costo();



    //Funciones
    double calcularcosto();

};
#endif // PAQUETE_H
