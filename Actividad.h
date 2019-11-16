#pragma once
using namespace System;
ref class Actividad
{
public:
	int horaDeInicio;
	int horaDeFin;
	int identificador;
	int clave;
	//
	String^ lugar;
	String^ descripcion;
	String^ personasIn;
	String^ materiales;
	String^ prioridad;
	//
	Actividad^ siguiente;
};

