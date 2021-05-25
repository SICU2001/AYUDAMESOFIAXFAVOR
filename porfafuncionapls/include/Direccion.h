#ifndef DIRECCION_H
#define DIRECCION_H
#include <string>
using namespace std;
//Aqui va toda la clase en sí, exceptuando lo que esta dentro de los corchetes


class Direccion {
private:
    string Nombre, Calle, Ciudad, Estado;
    int Numero, Cp;
public:
    //Constructor

    Direccion(string , string , int , int , string, string);

    Direccion(); //Vacio para cuando se inicialice en otra clase.


    //Gets
    string get_Nombre();

    string get_Calle();

    string get_Ciudad();

    string get_Estado();

    int get_Numero();

    int get_cp();

    //Sets
    void set_Nombre(string nombre);

    void set_Calle(string calle);

    void set_Ciudad(string ciudad);

    void set_Estado(string estado);

    void set_Numero(int numero);

    void set_cp(int cp);

};


#endif // DIRECCION_H
