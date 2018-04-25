#include <iostream>
#include "Radio.h"
#include "Automovil.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	//Radio *radio = new Radio("Pioneer",true);
	
	Automovil *carro = new Automovil("Rojo","Ford",2001,new Radio("YogoYogo",true));
	carro->mostrarDatos();
	
	delete (carro);
	return 0;
}
