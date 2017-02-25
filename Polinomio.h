// Polinomo.h
#pragma once
//#ifndef POLINOMIO_H
//#define POLINOMIO_H

#include <iostream>
#include <vector>
#include <sstream>
#include <string>

using namespace std;

class Polinomio {
	private:
		vector <int>* coeficientes;		

	public:
		int grade;
		char variable;		

		// @param int, char
		// Constructor
		Polinomio(int, char, vector <int>*);

		// Destructor
		~Polinomio();

		// @return vector <int>*
		// Devuelve el vector de coeficientes
		vector <int>* getFuncion();

		void setFuncion(vector <int>*);

		// @param int
		// Agregar coeficiente
		void setCoeficiente(int);

		// @param vector <int>*
		// Suma funciones
		Polinomio* operator+(Polinomio*);

		// @param vector <int>*
		// Resta funciones
		Polinomio* operator-(Polinomio*);

		// @param vector <int>*
		// Multiplica funciones
		Polinomio* operator*(Polinomio*);

		// @param vector <int>*
		// Division funciones
		Polinomio* operator/(Polinomio*);

		// @param vector <int>*
		// Saca factor comun funciones
		Polinomio* operator()(Polinomio*);

		// @param vector <int>*
		// Evaluaigualdad funciones
		bool operator==(Polinomio*);

		// @param vector <int>*
		// Evalua desigualdad funciones
		bool operator!=(Polinomio*);

		// @param vector <int>*
		// Flujo funciones
		friend  ostream& operator << (ostream& out, Polinomio* data){			
			stringstream ss;						
			for (int i = 0; i < 6; ++i) {						
				ss << data -> getFuncion() -> at(i) << data -> variable << "^" << i  << " + ";	
			}
			ss << "\n";
			out << ss.str();	
		}

};
