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
	vector <int>* f1 = new vector<int>();		
	vector <int>* f2 = new vector<int>();			
	cout << "Ingrese variable para las funciones: ";
	cin >> variable;

	// Crear Funciones
	cout << "\tPrimera funcion" << endl << endl;
	funciones -> push_back(new Polinomio(grado, variable, f1));
	for (int i = 0; i < grado + 1; i++) {
		cout << "Ingrese coeficiente para " << variable << "^" << i << ": ";
		cin >> coeficiente;
		funciones -> at(0) -> setCoeficiente(coeficiente);
	}
	cout << endl;

	cout << "\tSegunda funcion" << endl << endl;
	funciones -> push_back(new Polinomio(grado, variable, f2));
	for (int i = 0; i < grado + 1; i++) {
		cout << "Ingrese coeficiente para " << variable << "^" << i << ": ";
		cin >> coeficiente;
		funciones -> at(1) -> setCoeficiente(coeficiente);
	}	
	cout << endl;
	do{
		vector <int>* f3 = new vector<int>();
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
				funciones -> push_back(new Polinomio(grado, variable, f3));
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
				funciones -> push_back(new Polinomio(grado, variable, f3));
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
				funciones -> push_back(new Polinomio(grado, variable, f3));
				funciones -> at(funciones -> size() - 1) -> setFuncion(funciones -> at(1) -> getFuncion());
				funciones -> at(funciones -> size() - 1) -> setFuncion( ( *(funciones -> at(funciones -> size()-1))  * funciones -> at(1)) -> getFuncion()) ;
				
				for (int i = 0; i < funciones -> at(funciones -> size() - 1)  -> getFuncion() -> size(); ++i) {				
					cout << funciones -> at(funciones -> size() - 1) -> getFuncion() -> at(i) << " ";
				} 			
				break;	
			}

			// Igual
			case 6: {
				if ((*funciones -> at(0) == funciones -> at(1))) {
					cout << "true k" << endl;
				} else {
					cout << "false" << endl;
				}
				break;				
			}
			// Salir
			case 0: {
				return 0;
			}
		}
		// Limpiar Memoria
		//delete funciones -> at(0) ;
		//delete funciones -> at(1);
	} while (true);
	return 0;
}