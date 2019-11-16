#pragma once
using namespace System;
ref class Recordatorio
{
public:
	int horaLímite;
	int identificador;
	int clave;
	//
	String^ descripcion;
	String^ prioridad;
	//
	Recordatorio^ siguiente;
};

