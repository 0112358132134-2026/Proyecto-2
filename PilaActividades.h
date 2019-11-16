#pragma once
#include "Actividad.h"
using namespace System;

ref class PilaActividades
{
private:
	Actividad^ primera;
public:
	//String^ peek();
	void AgregarDatos(int horaDeInicio, int horaDeFin, int identificador, String^ lugar, String^ descripcion, String^ personasIn, String^ materiales, String^ prioridad, int clave);
	String^ devolverHoraInicio();
	String^ devolverHoraFin();
	String^ devolverIdentificador();
	String^ devolverLugar();
	String^ devolverDescripcion();
	String^ devolverPersonas();
	String^ devolverMateriales();
	String^ devolverPrioridad();
	String^ devolverClave();
	void vaciarPilaActividades(static array <PilaActividades^>^ actividades1, int pos);
	bool vacio();
	//String^ SacarCarta();
	//void limpiar();	
};
