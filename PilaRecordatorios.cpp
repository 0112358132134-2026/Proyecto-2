#include "PilaRecordatorios.h"

void PilaRecordatorios::AgregarDatos(int horaLímite, int identificador, String^ descripcion, String^ prioridad, int clave)
{
	Recordatorio^ nuevoRecordatorio = gcnew Recordatorio;
	//
	nuevoRecordatorio->horaLímite = horaLímite;
	nuevoRecordatorio->identificador = identificador;
	nuevoRecordatorio->descripcion = descripcion;
	nuevoRecordatorio->prioridad = prioridad;
	nuevoRecordatorio->clave = clave;
	//
	nuevoRecordatorio->siguiente = primera;
	primera = nuevoRecordatorio;
}
void PilaRecordatorios::VaciarPilaRecordatorios(static array <PilaRecordatorios^>^ recordatorios1, int pos)
{
	recordatorios1[pos]->primera->horaLímite = 0;
	recordatorios1[pos]->primera->prioridad = "";
	recordatorios1[pos]->primera->identificador = 0;
	recordatorios1[pos]->primera->descripcion = "";
	//actividades1[pos]->primera->clave = 0;
}


bool PilaRecordatorios::vacio()
{
	return primera == nullptr;
}

String^ PilaRecordatorios::devolverHoraLímite()
{
	if (!vacio())
	{
		return primera->horaLímite.ToString();
	}
	else
	{
		return "Esta vacio.";
	}
}
String^ PilaRecordatorios::devolverIdentificador()
{
	if (!vacio())
	{
		return primera->identificador.ToString();
	}
	else
	{
		return "Esta vacio.";
	}
}
String^ PilaRecordatorios::devolverDescripcion()
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
String^ PilaRecordatorios::devolverPrioridad()
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
String^ PilaRecordatorios::devolverClave()
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

