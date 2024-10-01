#ifndef CAJERO_HPP
#define CAJERO_HPP
#include "librerias.hpp"

class Cajero {
public:
	int Id;
	string nombre;
	int numCaja;
	class Cliente* despues;
	class Cliente* atras;

	// class pedido* inicio;para unir los pedidos

public:
	Cajero();
	~Cajero();

	void ingresarCajero();
	void mostrarCajero();
	void modificarCajero();
	void eliminarCajero(string);
};



#endif // CAJERO_HPP
