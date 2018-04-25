#ifndef AUTOMOVIL_H
#define AUTOMOVIL_H
#include <iostream>
#include "Radio.h"

class Automovil
{
	char color[50];
	char marca[50];
	int anio;
	Radio *radio = NULL;
	public:
		Automovil();
		Automovil(char*,
				  char*,
				  int,
				  Radio*);
		Automovil(char*,
				  char*,
				  int,
				  char*,
				  bool);
	    ~Automovil();
		void mostrarDatos();
	protected:
};

#endif
