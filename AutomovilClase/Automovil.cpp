#include "Automovil.h"
#include <iostream>
#include <string.h>

using namespace std;

Automovil::Automovil()
{
	strcpy(marca,"");
	strcpy(color,"");
	anio = 0;
	radio = new Radio();
}

Automovil::Automovil(char* _color,
					 char* _marca,
					 int _anio,
					 Radio *_radio){
	strcpy(marca,_marca);
	strcpy(color,_color);
	anio = _anio;
	radio = _radio;			  
}

Automovil::Automovil(char* _color,
					 char* _marca,
					 int _anio,
					 char* _marcaRadio,
					 bool _tieneUSB){
	strcpy(marca,_marca);
	strcpy(color,_color);
	anio = _anio;
	radio = new Radio(_marcaRadio,_tieneUSB);
}


void Automovil::mostrarDatos(){
	cout << "Automovil:" <<endl;
	cout << "==========:" <<endl;
	cout << "Color:" << color <<endl;
	cout << "Marca: "<< marca <<endl;
	cout << "Año: " << anio <<endl;
	radio->mostrarDatos();
}

Automovil::~Automovil(){
	if(radio!=NULL){
		delete(radio);
	}
	cout << "Se destruyo Automovil"<<endl;
	
}

