#pragma once
#include "Recordatorio.h"
using namespace System;

ref class PilaRecordatorios
{
private:
	Recordatorio^ primera;
public:
	void AgregarDatos(int horaLímite, int identificador, String^ descripcion, String^ prioridad, int clave);
	void VaciarPilaRecordatorios(static array <PilaRecordatorios^>^ recordatorios1, int pos);
	String^ devolverHoraLímite();
	String^ devolverIdentificador();
	String^ devolverDescripcion();
	String^ devolverPrioridad();
	String^ devolverClave();
	bool vacio();
};

