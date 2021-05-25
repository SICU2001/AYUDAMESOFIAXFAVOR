// Prueba.h.cpp : Este archivo contiene la funci�n "main". La ejecuci�n del programa comienza y termina ah�.
//


// POOHerencia.cpp : Este archivo contiene la funci�n "main". La ejecuci�n del programa comienza y termina ah�.
// Hecho por: Jos� Miguel Beltr�n Cinco A00227714
//
#include "Direccion.h"
#include "Envio.h"
#include "paquete.h"
#include "sobre.h"


#include <iostream>

using namespace std;


int main()
{
    Direccion Direccion1 = Direccion("Jose", "California", 1138, 85210, "Obregon", "Sonora");
    Direccion Direccion2 = Direccion("Sofia", "Cananea", 1234, 85555, "San luis", "Chiapas");

    Envio Env1 = Envio(Direccion1, Direccion2);
    cout << Env1.calcularcosto() << endl; //Deberia print 70 (El precio base)

    paquete Pak1 = paquete(Direccion1, Direccion2, 10, 5, 4, 20, 5);
    cout << Pak1.calcularcosto() << endl; //Deberia print 170 (El precio base mas el peso por el costo por kg, es decir, 20*5=100)

    Sobre sob1 = Sobre(Direccion1, Direccion2, 50, 20);
    cout << sob1.calcularcosto() << endl; //Deberia print 100 (El precio base mas el cargo adicional de 30)

    Sobre sob2 = Sobre(Direccion1, Direccion2, 5, 20);
    cout << sob2.calcularcosto() << endl; //Deberia print 70 (El precio base)

    return 0;





}

// Ejecutar programa: Ctrl + F5 o men� Depurar > Iniciar sin depurar
// Depurar programa: F5 o men� Depurar > Iniciar depuraci�n

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de c�digo fuente
//   3. Use la ventana de salida para ver la salida de compilaci�n y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de c�digo, o a Proyecto > Agregar elemento existente para agregar archivos de c�digo existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir >


// Ejecutar programa: Ctrl + F5 o men� Depurar > Iniciar sin depurar
// Depurar programa: F5 o men� Depurar > Iniciar depuraci�n

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de c�digo fuente
//   3. Use la ventana de salida para ver la salida de compilaci�n y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de c�digo, o a Proyecto > Agregar elemento existente para agregar archivos de c�digo existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccio
