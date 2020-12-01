//Pruebas proyecto integrador: Sistema de logística y organización en el proceso de entrega \
con las clases Compra, Paquete, Ubicacion y Mensaje \
Autora: Naomi Padilla Mora A01745914\
Fecha de creación: 30 de noviembre, 2020
#include "Compra.h"
#include "Paquete.h"
#include "Ubicacion.h"
#include "Mensaje.h"

#include <iostream>
using namespace std;

int main(){
    
    cout << "\n***** Pruebas clase Mensaje" << endl;
    cout << "\nMensaje 1" << endl;
    Mensaje men1;
    cout << men1.imprimirMensaje();
    men1.confirmar();

    cout << "\nMensaje 2" << endl;
    Mensaje men2{"Jose Alfonso","Buenos dias Jose,", "Tu paquete esta proximo a entregar.", "Tu paquete llegara entre las 9:15 y 9:45 am"};
    cout << men2.imprimirMensaje();
    men2.confirmar();

    cout << "\n\n*********Prueba completa" << endl;
    Compra compradef;
    compradef.solicitar();
    compradef.pagar();
    compradef.continuar(); 

    Ubicacion udef;
    udef.pedirDatos(); 

    Paquete paquetedef {7251,15.00,0.500, udef};
    cout << paquetedef.imprimir(); 
    paquetedef.notificar(); 

    cout << udef.imprimirUbi();
    udef.clasificarPorZona(); 
    udef.darFolio(); 

    cout << "Posterior al tiempo dado de entrega..." << endl;

    Mensaje mendef{"Naomi Padilla","Buenos tardes,", "Tu paquete es el siguiente a entregarse.", "Esperalo en casa entre las 13:10 y 13:50 horas, gracias por tu preferencia :)"};
    cout << mendef.imprimirMensaje();
    mendef.confirmar();
    
    return 0;
}