#pragma once
#include "Alarma.h"
ref class PilaAlarmas
{
private:
	Alarma^ primera;
public:
	//String^ peek();
	void AgregarDatos(int hora, int ID, String^ descripcion, String^ prioridad, int clave);
	void VaciarPilaAlarmas(static array <PilaAlarmas^>^ alarmas1, int pos);
	String^ devolverHora();
	String^ devolverID();
	String^ devolverDescripcion();
	String^ devolverPrioridad();
	String^ devolverClave();
	bool vacio();
};

