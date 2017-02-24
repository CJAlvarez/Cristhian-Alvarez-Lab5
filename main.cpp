// main.cpp
#include "Polinomio.h"

#include <iostream>
#include <vector>


using namespace std;

int main() {
	Polinomio* funcion1;
	Polinomio* funcion2;

	char variable;
	int coeficiente = -1;
	int grado_f1 = -1, grado_f2 = -1;

	cout << "Ingrese variable de las funciones: " << endl;
	cin >> variable;

	cout << "\tPrimera funcion" << endl << endl;
	cout << "Ingrese grado: ";
	cin >> grado_f1;
	funcion1 = new Polinomio(grado_f1, variable);
	for (int i = 0; i < grado_f1; i++) {
		cout << "Ingrese coeficiente para " << variable << "^" << i;
		cin >> coeficiente;
		funcion1 -> setCoeficiente(coeficiente);
	}

	return 0;
}