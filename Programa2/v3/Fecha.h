#ifndef FECHA_H_
#define FECHA_H_

class Fecha
{
	private:
		int dia;
		int mes;
		int anio;
		long long arreglo[100000];
		int getCurrentYear();
	
	public:
		Fecha(int = 3, int = 4, int = 2014);

		void inicializaFecha(int, int, int);
		void muestraFecha();
		int convierte();
		bool leapyr();
};

#endif
