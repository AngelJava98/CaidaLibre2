#include "CaidaLibre.h"

//método constructor
CaidaLibre::CaidaLibre(float tiempo){
	this->tiempo = Tiempo;
}
CaidaLibre::CaidaLibre(){

}

//Métodos setter
void CaidaLibre::setTiempo(float Tiempo){
	this->Tiempo = Tiempo;
}
void CaidaLibre::setGravedad(float Gravedad){
	this->Gravedad = Gravedad;
}
void CaidaLibre::setAltura(float Altura){
	this->Altura = Altura;
}

//Métodos getter
float CaidaLibre::getTiempo(){
	return this->Tiempo;
}
float CaidaLibre::getGravedad(){
	return this->Gravedad;
}
float CaidaLibre::getAltura(){
	return this->Altura;
}
		
void CaidaLibre::CalcularCaidaLibre(){
	this->Altura = 1/2 * this->Gravedad * this->Tiempo * this->Tiempo;
}
 