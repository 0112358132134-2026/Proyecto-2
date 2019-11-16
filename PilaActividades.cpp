#include "PilaActividades.h"

void PilaActividades::AgregarDatos(int horaDeInicio, int horaDeFin, int identificador, String^ lugar, String^ descripcion, String^ personasIn, String^ materiales, String^ prioridad, int clave)
{
	Actividad^ nuevaActividad = gcnew Actividad;
	//
	nuevaActividad->horaDeInicio = horaDeInicio;
	nuevaActividad->horaDeFin = horaDeFin;
	nuevaActividad->identificador = identificador;
	nuevaActividad->lugar = lugar;
	nuevaActividad->descripcion = descripcion;
	nuevaActividad->personasIn = personasIn;
	nuevaActividad->materiales = materiales;
	nuevaActividad->prioridad = prioridad;
	nuevaActividad->clave = clave;
	//
	nuevaActividad->siguiente = primera;
	primera = nuevaActividad;
}
void PilaActividades::vaciarPilaActividades(static array <PilaActividades^>^ actividades1, int pos)
{
	actividades1[pos]->primera->horaDeInicio = 0;
	actividades1[pos]->primera->horaDeFin = 0;
	actividades1[pos]->primera->identificador = 0;
	actividades1[pos]->primera->lugar = "";
	actividades1[pos]->primera->descripcion = "";
	actividades1[pos]->primera->personasIn = "";
	actividades1[pos]->primera->materiales = "";
	actividades1[pos]->primera->prioridad = "";
	//actividades1[pos]->primera->clave = 0;
}

bool PilaActividades::vacio()
{
	return primera == nullptr;
}

String^ PilaActividades::devolverHoraInicio()
{
	if (!vacio())
	{
		return primera->horaDeInicio.ToString();
	}
	else
	{
		return "Esta vacio.";
	}
}
String^ PilaActividades::devolverHoraFin()
{
	if (!vacio())
	{
		return primera->horaDeFin.ToString();
	}
	else
	{
		return "Esta vacio.";
	}
}
String^ PilaActividades::devolverIdentificador()
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
String^ PilaActividades::devolverLugar()
{
	if (!vacio())
	{
		return primera->lugar;
	}
	else
	{
		return "Esta vacio.";
	}
}
String^ PilaActividades::devolverDescripcion()
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
String^ PilaActividades::devolverPersonas()
{
	if (!vacio())
	{
		return primera->personasIn;
	}
	else
	{
		return "Esta vacio.";
	}
}
String^ PilaActividades::devolverMateriales()
{
	if (!vacio())
	{
		return primera->materiales;
	}
	else
	{
		return "Esta vacio.";
	}
}
String^ PilaActividades::devolverPrioridad()
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
String^ PilaActividades::devolverClave()
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
