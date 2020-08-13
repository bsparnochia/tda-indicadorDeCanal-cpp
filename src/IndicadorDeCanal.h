#ifndef INDICADORDECANAL_H_
#define INDICADORDECANAL_H_

class IndicadorDeCanal{

	/*
	 * El Indicador de canales se encarga de sintonizar diversos canales
	 * permitiendo además la navegación entre estos dentro de
	 * un rango establecido:
	 *  [ 'canalMinimo', 'canalMaximo' ]
	 */

private:

	unsigned int canalMinimo;
	unsigned int canalMaximo;
	unsigned int canalActual;

public:

	/*
	 * pre : El rango de canales establecido, entre 'canalMinimo' y 'canalMaximo'
	 * 		deben ser:
	 * 		- 'canalMinimo' != 'canalMaximo'
	 * 		- 'canalMinimo' < 'canalMaximo'
	 * post: Genera el indicador de canales con un rango establecido que va
	 * 		 desde 'canalMinimo' hasta 'canalMaximo' permitiendo la navegación
	 * 		 entre estos. El 'canalActual' será el 'canalMinimo' por defecto
	 * 		 la primera vez hasta realizar el cambio de canal.
	 */
	IndicadorDeCanal(unsigned int nuevoCanalMinimo, unsigned int nuevoCanalMaximo);

	/*
	 * post: devuelve el número del canal sintonizado actualmente
	 */
	unsigned int obtenerCanalActual();


	/*
	 * pre : el 'canalElegido' se encuentra dentro del rango de
	 * 		 [ 'canalMinimo', 'canalMaximo' ]
	 * post: cambia el 'canalActual' señalando ahora al 'canalElegido'
	 */
	void cambiarCanal(unsigned int canalElegido);

	/*
	 * post: cambia el 'canalActual' al canal siguiente
	 *	    Si el 'canalActual' es el 'canalMaximo' no se cambiará de canal
	 */
	void cambiarAlSiguiente();

	/*
	 * pre: el 'canalActual' es distinto del 'canalMinimo'
	 * post: cambia el 'canalActual' al canal anterior.
	 * 		Si el 'canalActual' es el 'canalMinimo' no se cambiará de canal
	 */
	void cambiarAlAnterior();

	/*
	 * post: verifica que el canal se encuentre dentro del rango
	 * [ 'canalMinimo', 'canalMaximo' ]
	 */
	bool puedoCambiarCanal(unsigned int canalElegido);

};

#endif /* INDICADORDECANAL_H_ */
