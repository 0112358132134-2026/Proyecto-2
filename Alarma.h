#pragma once
using namespace System;
ref class Alarma
{
public:
	int hora;
	int ID;
	int clave;
	//
	String^ descripcion;
	String^ prioridad;
	//
	Alarma^ siguiente;
};

