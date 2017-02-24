// Polinomo.h
#pragma once
#ifndef POLINOMIO_H
#define POLINOMIO_H

#include <iostream>
#include <vector>
#include <sstream>

using std :: vector;

class Polinomio {
	private:
		int grade;
		vector <int>* coeficientes;
		char variable;		

	public:
		// @param int, char
		// Constructor
		Polinomio(int, char);

		// Destructor
		~Polinomio();

		// @return vector <int>*
		// Devuelve el vector de coeficientes
		vector <int>* getFuncion();

		// @param int
		// Agregar coeficiente
		void setCoeficiente(int);

		// @param vector <int>*
		// Suma funciones
		vector <int>* operator+(Polinomio*);

		// @param vector <int>*
		// Resta funciones
		vector <int>* operator-(Polinomio*);

		// @param vector <int>*
		// Multiplica funciones
		vector <int>* operator*(Polinomio*);

		// @param vector <int>*
		// Division funciones
		vector <int>* operator/(Polinomio*);

		// @param vector <int>*
		// Saca factor comun funciones
		vector <int>* operator()(Polinomio*);

		// @param vector <int>*
		// Evaluaigualdad funciones
		vector <int>* operator==(Polinomio*);

		// @param vector <int>*
		// Evalua desigualdad funciones
		vector <int>* operator!=(Polinomio*);

		// @param vector <int>*
		// Flujo funciones
		vector <int>* operator<<(Polinomio*);

};

#endif