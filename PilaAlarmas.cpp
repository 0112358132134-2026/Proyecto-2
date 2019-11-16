#include "PilaAlarmas.h"

void PilaAlarmas:: AgregarDatos(int hora, int ID, String^ descripcion, String^ prioridad, int clave)
{
	Alarma^ nuevaAlarma = gcnew Alarma;
	//
	nuevaAlarma->hora = hora;
	nuevaAlarma->ID = ID;
	nuevaAlarma->descripcion = descripcion;
	nuevaAlarma->prioridad = prioridad;
	nuevaAlarma->clave = clave;
	//
	nuevaAlarma->siguiente = primera;
	primera = nuevaAlarma;
}
void PilaAlarmas::VaciarPilaAlarmas(static array <PilaAlarmas^>^ alarmas1, int pos)
{
	alarmas1[pos]->primera->hora = 0;
	alarmas1[pos]->primera->prioridad = "";
	alarmas1[pos]->primera->ID = 0;
	alarmas1[pos]->primera->descripcion = "";
	//actividades1[pos]->primera->clave = 0;
}
bool PilaAlarmas::vacio()
{
	return primera == nullptr;
}

String^ PilaAlarmas::devolverHora()
{
	if (!vacio())
	{
		return primera->hora.ToString();
	}
	else
	{
		return "Esta vacio.";
	}
}
String^ PilaAlarmas::devolverID()
{
	if (!vacio())
	{
		return primera->ID.ToString();
	}
	else
	{
		return "Esta vacio.";
	}
}
String^ PilaAlarmas::devolverDescripcion()
{
	if (!vacio())
	{
		return primera->descripcion;
	}
	else
	{
		return "Esta vacio.";
	}
}
String^ PilaAlarmas::devolverPrioridad()
{
	if (!vacio())
	{
		return primera->prioridad;
	}
	else
	{
		return "Esta vacio.";
	}
}
String^ PilaAlarmas::devolverClave()
{
	if (!vacio())
	{
		return primera->clave.ToString();
	}
	else
	{
		return "Esta vacio.";
	}
}