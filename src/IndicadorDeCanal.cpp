#include "IndicadorDeCanal.h"
#include <string>

IndicadorDeCanal::IndicadorDeCanal( unsigned int nuevoMinimo, unsigned int nuevoMaximo ){

	if ( (nuevoMinimo == nuevoMaximo) || ( nuevoMinimo > nuevoMaximo) ){
		throw std::string("Formato de canalMinimo y canalMaximo incorrectos!");
	}
	this->canalMinimo = nuevoMinimo;
	this->canalActual = nuevoMinimo;
	this->canalMaximo = nuevoMaximo;
}

void IndicadorDeCanal::cambiarAlAnterior(){
	canalActual--;
	if ( canalActual < canalMinimo ){
		canalActual = canalMaximo;
	}
}

void IndicadorDeCanal::cambiarAlSiguiente(){
	canalActual++;
	if ( canalActual > canalMaximo ){
		canalActual = canalMinimo;
	}
}

void IndicadorDeCanal::cambiarCanal( unsigned int canalElegido ){

	if( (canalElegido > canalMaximo) || (canalElegido < canalMinimo) ){
		throw std::string("el canalElegido no esta en el rango de canales");
	}
	canalActual = canalElegido;
}

unsigned int IndicadorDeCanal::obtenerCanalActual(){
	return this->canalActual;
}

bool IndicadorDeCanal::puedoCambiarCanal( unsigned int canalElegido ){

	return (canalElegido <= canalMaximo) && (canalElegido >= canalMinimo);
}
