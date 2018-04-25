#include "Radio.h"
#include <string.h>
#include <iostream>

using namespace std;

Radio::Radio()
{
	strcpy(marca,"");
	tieneUSB = false;
}

Radio::Radio(char *_marca, bool _tieneUSB)
{
	strcpy(marca,_marca);
	tieneUSB = _tieneUSB;
}

void Radio::mostrarDatos(){
	cout << "Radio:" <<endl;
	cout << "======" <<endl;
	cout << "Marca: "<<marca<<endl;
	cout << "Tiene USB: " << ((tieneUSB)?SI:NO)<<endl;
}

Radio::~Radio(){
	cout << "Se destruyo Radio" <<endl;
}


