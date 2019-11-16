#pragma once
ref class MetodosF
{
public:
	//Calcula el día en el que el mes empezó.
	int zeller(int año, int mes)
	{
		int a = (14 - mes) / 12;
		int y = año - a;
		int m = mes + 12 * a - 2;
		int dia = 1, d;
		d = (dia + y + y / 4 - y / 100 + y / 400 + (31 * m) / 12) % 7; 
		return d;
	}
	//Calcula los días que tiene cada mes.
	int CalcularDiasDelMes(int año, int mes)
	{
		if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) return 31;
		if (mes == 2)
		{
			if (EsBisiesto(año)) return 29;
			return 28;
		}
		return 30;
	}
	//Determina si es año es bisiesto.
	bool EsBisiesto(int año)
	{
		if (año % 4 == 0 && (año % 100 != 0 || año % 400 == 0))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
};

