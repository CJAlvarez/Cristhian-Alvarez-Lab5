main.exe: main.o Polinomio.o
	g++ main.o Polinomio.o -o Run

main.o: main.cpp Polinomio.h
	g++ -c main.cpp Polinomio.cpp

Polinomio.o: Polinomio.h
	g++ -c Polinomio.cpp