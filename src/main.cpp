#include <iostream>
#include "IndicadorDeCanal.h"

#define CANAL_MINIMO 10
#define CANAL_MAXIMO 20

using namespace std;

int main(){

	try{
		unsigned int canal;

		IndicadorDeCanal sintonizador(CANAL_MINIMO, CANAL_MAXIMO);

		cout<<"::Canal actual: "<< sintonizador.obtenerCanalActual() <<endl;
		cout<<"ingrese el canal a sintonizar: ";
		cin>>canal;

		if ( sintonizador.puedoCambiarCanal(canal) ){
			sintonizador.cambiarCanal(canal);
		}
		else{
			cout<<"**Canal elegido no está en el rango! No se cambiará de canal**"<<endl;
		}

		cout<<"::Canal actual: "<< sintonizador.obtenerCanalActual() <<endl;
		cout<<"Cambiando al anterior canal ( <-- )"<<endl;
		sintonizador.cambiarAlAnterior();

		cout<<"::Canal actual: "<< sintonizador.obtenerCanalActual() <<endl;
		cout<<"Cambiando al siguiente canal ( --> )"<<endl;
		sintonizador.cambiarAlSiguiente();

		cout<<"::Canal actual: "<< sintonizador.obtenerCanalActual() <<endl;

	}catch( string& error){
		cout<<error<<endl;
	}

	return 0;
}




