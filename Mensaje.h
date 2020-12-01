//Clase Mensaje del proyecto integrador: Sistema de logística y organización en el proceso de entrega \
Autor: Naomi Padilla Mora A01745914 \
Fecha de creación: 23 de noviembre, 2020
#ifndef MENSAJE_C
#define MENSAJE_C

#include <iostream>
#include <string>
using namespace std;

class Mensaje{

private:

    string nomUsuario;
    string saludo;
    string informacionTurno;
    string horaAproximada;

public:
    Mensaje(){
        nomUsuario = "\nSophia Valencia";
        saludo = "\nBuenas tardes, el motivo de este mensaje es informarle sobre su compra. Gracias por confiar en nosotros :)";
        informacionTurno = "\nTu paquete es el siguiente en entregarse";
        horaAproximada = "\nTu paquete llegará entre las 16 y 16:30 horas";
    }

    Mensaje(string nomUsuario, string saludo, string informacionTurno, string horaAproximada){
        this-> nomUsuario = nomUsuario;
        this-> saludo = saludo;
        this-> informacionTurno = informacionTurno ;
        this-> horaAproximada = horaAproximada;
    }

    void confirmar(){
        string respuesta{};
        cout << "\n¿Estas disponible para tu entrega?(Si, No)" << endl;
        cin >> respuesta;
        if (respuesta == "Si"){
            enviar();
        }
        else{
            aplazar();
        }
    }
    void enviar(){
        cout << "\nConfirmada tu disponibilidad, continuará el proceso de entrega :)" << endl;
    }  
    
    void aplazar(){
        cout << "\nDebido a su ausencia, su entrega se reintentara a la brevedad, espera nuestro mensaje :)" << endl;
    }

    string imprimirMensaje(){
        return "\nPara: " + nomUsuario + ", " + saludo + informacionTurno + horaAproximada;
    }
};


#endif