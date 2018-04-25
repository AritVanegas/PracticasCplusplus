#ifndef RADIO_H
#define RADIO_H

class Radio
{
	char marca[50];
	bool tieneUSB;
	
	const char *SI = "Si";
	const char *NO = "No";
	
	public:
		Radio();
		Radio(char*,bool);
		void mostrarDatos();
	protected:
};

#endif
