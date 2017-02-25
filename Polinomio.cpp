// Polinomio.cpp
#include "Polinomio.h"

#include <iostream>

using std::cout;
using std::endl;

// @param int, char
// Constructor
Polinomio :: Polinomio(int grade, char variable, vector <int>* f) {
	this -> grade = grade;
	this -> variable = variable;
	this -> coeficientes = f;
}

// Destructor
Polinomio :: ~Polinomio() {
	delete coeficientes;
	coeficientes -> clear();
	 //cout << "cleaning.." <<  endl;
}

// @return vector <int>*
// Devuelve el vector de coeficientes
vector <int>* Polinomio :: getFuncion() {
	// cout << coeficientes -> size() <<  endl;
	return coeficientes;
}


void Polinomio :: setFuncion(vector <int>* f) {
	coeficientes -> clear();
	for (int i = 0; i < f -> size(); ++i) {
		coeficientes -> push_back(f -> at(i));
	}
}

// @param int
// Agregar coeficiente
void Polinomio :: setCoeficiente(int coeficiente) {
	this -> coeficientes -> push_back(coeficiente);
}

// @param vector <int>*
// Suma funciones
Polinomio* Polinomio :: operator+(Polinomio* p) {			
	for (int i = 0; i < coeficientes -> size(); i++) {
		this -> coeficientes -> at(i) += p -> getFuncion() -> at(i);
	}
	return this;
}

// @param vector <int>*
// Resta funciones
Polinomio* Polinomio :: operator-(Polinomio* p) {
	for (int i = 0; i < coeficientes -> size(); i++) {
		this -> coeficientes -> at(i) -= p -> getFuncion() -> at(i);
	}
	return this;
}

// @param vector <int>*
// Multiplica funciones
Polinomio* Polinomio :: operator*(Polinomio* p) {
	
	return this;
}

// @param vector <int>*
// Division funciones
Polinomio* Polinomio :: operator/(Polinomio* p) {
	// Pendiente
	return this;
}

// @param vector <int>*
// Saca factor comun funciones
int Polinomio :: operator()() {	
	int final = 0;
	final = this -> getFuncion() -> at(0);
	for (int i = 0; i < this -> getFuncion() -> size(); ++i){
		if(this -> getFuncion() -> at(i) <= final) {
			final = this -> getFuncion() -> at(i);
		}
	}
	for (int i = 0; i < this -> getFuncion() -> size(); ++i){
		if(this -> getFuncion() -> at(i)%final != 0) {
			return 1;
		}
	}	
	return final;
}

// @param vector <int>*
// Evaluaigualdad funciones
bool Polinomio :: operator==(Polinomio* p) {	
	int i = 0;

	for (int i = 0; i < p -> getFuncion() -> size(); ++i) {
		if (this -> coeficientes -> at(i) ==  p -> getFuncion() -> at(i)) {
			i++;
		}	
	}
	if(i != 6)
	return	true;
	else
	return false;

}

// @param vector <int>*
// Evalua desigualdad funciones
bool Polinomio :: operator!=(Polinomio* p) {
	int i = 0;

	for (int i = 0; i < p -> getFuncion() -> size(); ++i) {
		if (this -> coeficientes -> at(i) ==  p -> getFuncion() -> at(i)) {
			i++;
		}	
	}
	if(i == 6)
	return	true;
	else
	return false;
}

 
// @param vector <int>*
// Flujo funciones
//Polinomio* operator<<(Polinomio* p) {
//	return coeficientes;
//}
