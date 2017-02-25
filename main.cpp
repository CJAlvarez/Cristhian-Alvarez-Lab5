// main.cpp
#include "Polinomio.h"

#include <iostream>
#include <vector>


using namespace std;

int main() {
	char variable;
	int coeficiente = -1;
	int grado = 5;
	int operacion = -1;

	vector <Polinomio*>* funciones = new vector <Polinomio*>();	
	//vector <int>* f1 = new vector<int>();		
	//vector <int>* f2 = new vector<int>();			
	cout << "Ingrese variable para las funciones: ";
	cin >> variable;

	// Crear Funciones
	cout << "\tPrimera funcion" << endl << endl;
	funciones -> push_back(new Polinomio(grado, variable, new vector<int>()));
	for (int i = 0; i < grado + 1; i++) {
		cout << "Ingrese coeficiente para " << variable << "^" << i << ": ";
		cin >> coeficiente;
		funciones -> at(0) -> setCoeficiente(coeficiente);
	}
	cout << endl;

	cout << "\tSegunda funcion" << endl << endl;
	funciones -> push_back(new Polinomio(grado, variable, new vector<int>()));
	for (int i = 0; i < grado + 1; i++) {
		cout << "Ingrese coeficiente para " << variable << "^" << i << ": ";
		cin >> coeficiente;
		funciones -> at(1) -> setCoeficiente(coeficiente);
	}	
	cout << endl;
	do{
	
		cout << endl;


		// menu
		cout << "Operaciones" << endl;
		cout << "1.- Sumar funciones" << endl;
		cout << "2.- Restar funciones" << endl;
		cout << "3.- Multiplicar funciones" << endl;
		cout << "4.- Dividir funciones" << endl;
		cout << "5.- Sacar factor común de una función" << endl;
		cout << "6.- Evaluar si dos funciones son iguales" << endl;
		cout << "7.- Evaluar si dos funciones son diferentes" << endl;
		cout << "8.- Imprimir resultados" << endl;
		cout << "0.- Salir" << endl;
		cout << "_ ";
		cin >> operacion;
		switch(operacion) {
			// Suma
			case 1: {
				funciones -> push_back(new Polinomio(grado, variable, new vector<int>()));
				funciones -> at(funciones -> size() - 1) -> setFuncion((*funciones -> at(0)  + funciones -> at(1)) -> getFuncion() );
				funciones -> at(funciones -> size() - 1) -> grade = funciones -> at(funciones -> size() - 1) -> getFuncion() -> size();			
				*funciones -> at(0)  - funciones -> at(1);
				
				for (int i = 0; i < funciones -> at(funciones -> size() - 1)  -> getFuncion() -> size(); ++i) {				
					cout << funciones -> at(funciones -> size() - 1) -> getFuncion() -> at(i) << " ";
				}
					break;
			}

			// Resta 
			case 2: {		
				funciones -> push_back(new Polinomio(grado, variable, new vector<int>()));
				funciones -> at(funciones -> size() - 1) -> setFuncion((*funciones -> at(0)  - funciones -> at(1)) -> getFuncion() );
				funciones -> at(funciones -> size() - 1) -> grade = funciones -> at(funciones -> size() - 1) -> getFuncion() -> size();			
				*funciones -> at(0)  + funciones -> at(1);
				
				for (int i = 0; i < funciones -> at(funciones -> size() - 1)  -> getFuncion() -> size(); ++i) {				
					cout << funciones -> at(funciones -> size() - 1) -> getFuncion() -> at(i) << " ";
				} 			
				break;
			}

			// Multiplicar
			case 3: {
				funciones -> push_back(new Polinomio(grado, variable, new vector<int>()));
				funciones -> at(funciones -> size() - 1) -> setFuncion(funciones -> at(1) -> getFuncion());
				funciones -> at(funciones -> size() - 1) -> setFuncion( ( *(funciones -> at(funciones -> size()-1))  * funciones -> at(1)) -> getFuncion()) ;
				
				for (int i = 0; i < funciones -> at(funciones -> size() - 1)  -> getFuncion() -> size(); ++i) {				
					cout << funciones -> at(funciones -> size() - 1) -> getFuncion() -> at(i) << " ";
				} 			
				break;	
			}

			// factor comun
			case 5: {
				cout << (*funciones -> at(0))() << endl;;
				break;
			}

			// Igual
			case 6: {
				if ((*funciones -> at(0) == funciones -> at(1))) {
					cout << "true" << endl;
				} else {
					cout << "false" << endl;
				}
				break;				
			}

			// Desigual
			case 7: {
				if ((*funciones -> at(0) != funciones -> at(1))) {
					cout << "true" << endl;
				} else {
					cout << "false" << endl;
				}
				break;				
			}

			// out 
			case 8: {
				for (int i = 0; i < funciones -> size(); ++i) {
					cout << funciones -> at(i);
				}
				break;
			}
			// Salir
			case 0: {
				return 0;
			}
		}
	} while (true);
	// Limpiar Memoria
	for (int i = 0; i < funciones -> size(); ++i)
	{
		delete funciones -> at(i);
	}
	return 0;
}