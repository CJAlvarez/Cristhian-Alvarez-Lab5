// Polinomio.cpp
#include "Polinomio.h"

// @param int, char
// Constructor
Polinomio :: Polinomio(int grade, char variable) {
	this -> grade = grade;
	this -> variable = variable;
	this -> coeficientes = new vector <int>();
}

// Destructor
Polinomio :: ~Polinomio() {
	delete [] coeficientes;
	coeficientes -> clear();
}

// @return vector <int>*
// Devuelve el vector de coeficientes
vector <int>* Polinomio :: getFuncion() {
	return coeficientes;
}

// @param int
// Agregar coeficiente
void Polinomio :: setCoeficiente(int coeficiente) {
	this -> coeficientes -> push_back(coeficiente);
}

// @param vector <int>*
// Suma funciones
vector <int>* Polinomio :: operator+(Polinomio* p) {			
	for (int i = 0; i < coeficientes -> size(); i++) {
		this -> coeficientes -> at(i) += p -> getFuncion() -> at(i);
	}
	return coeficientes;
}

// @param vector <int>*
// Resta funciones
vector <int>* Polinomio :: operator-(Polinomio* p) {
	for (int i = 0; i < coeficientes -> size(); i++) {
		this -> coeficientes -> at(i) -= p -> getFuncion() -> at(i);
	}
	return coeficientes;
}

// @param vector <int>*
// Multiplica funciones
vector <int>* Polinomio :: operator*(Polinomio* p) {
	// Pediente
	return coeficientes;
}

// @param vector <int>*
// Division funciones
vector <int>* Polinomio :: operator/(Polinomio* p) {
	// Pendiente
	return coeficientes;
}

// @param vector <int>*
// Saca factor comun funciones
vector <int>* Polinomio :: operator()(Polinomio* p) {	
	return coeficientes;
}

// @param vector <int>*
// Evaluaigualdad funciones
vector <int>* Polinomio :: operator==(Polinomio* p) {
	return coeficientes;
}

// @param vector <int>*
// Evalua desigualdad funciones
vector <int>* Polinomio :: operator!=(Polinomio* p) {
	return coeficientes;
}

// @param vector <int>*
// Flujo funciones
//vector <int>* operator<<(Polinomio* p) {
//	return coeficientes;
//}
