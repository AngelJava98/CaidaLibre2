#ifndef CAIDALIBRE_H
#define CAIDALIBRE_H

class CaidaLibre{

//Métodos
public: 

	//método constructor
	CaidaLibre(float Altura);
	CaidaLibre();

	//Métodos setter
	void setTiempo(float Tiempo);
	void setGravedad(float Gravedad);
	void setAltura(float Altura);

	//Métodos getter
	float getTiempo();
	float getGravedad();
	float getAltura();
		
	void CalcularCaidaLibre();

//Atributos
private:

	float Tiempo;
	float Gravedad;
	float Altura;	
};

#endif