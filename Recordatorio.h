#pragma once
using namespace System;
ref class Recordatorio
{
public:
	int horaL�mite;
	int identificador;
	int clave;
	//
	String^ descripcion;
	String^ prioridad;
	//
	Recordatorio^ siguiente;
};

