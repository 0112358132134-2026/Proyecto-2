#pragma once
ref class MetodosF
{
public:
	//Calcula el d�a en el que el mes empez�.
	int zeller(int a�o, int mes)
	{
		int a = (14 - mes) / 12;
		int y = a�o - a;
		int m = mes + 12 * a - 2;
		int dia = 1, d;
		d = (dia + y + y / 4 - y / 100 + y / 400 + (31 * m) / 12) % 7; 
		return d;
	}
	//Calcula los d�as que tiene cada mes.
	int CalcularDiasDelMes(int a�o, int mes)
	{
		if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) return 31;
		if (mes == 2)
		{
			if (EsBisiesto(a�o)) return 29;
			return 28;
		}
		return 30;
	}
	//Determina si es a�o es bisiesto.
	bool EsBisiesto(int a�o)
	{
		if (a�o % 4 == 0 && (a�o % 100 != 0 || a�o % 400 == 0))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
};

