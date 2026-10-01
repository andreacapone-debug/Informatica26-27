#include <iostream>

// ES
// 1) Acquisire da tastiera il valore di 5 variabili intere.
// 2) stampare il valore delle variabili.
    //#VAR1: 2
    //#VAR2: 17
    //#VAR3 -29
// 3) stampare la somma di due variabili.

int main()
{

	int v1, v2, v3, v4, v5;
	std::cout << "\ninserisci Valore 1: ";
	std::cin >> v1;
	std::cout << "\ninserisci Valore 2: ";
	std::cin >> v2;
	std::cout << "\ninserisci Valore 3: ";
	std::cin >> v3;
	std::cout << "\ninserisci Valore 4: ";
	std::cin >> v4;
	std::cout << "\ninserisci Valore 5: ";
	std::cin >> v5;

	std::cout << "VAR 1: " << v1 << "\n";
	std::cout << "VAR 2: " << v2 << "\n";
	std::cout << "VAR 3: " << v3 << "\n";
	std::cout << "VAR 4: " << v4 << "\n";
	std::cout << "VAR 5: " << v5 << "\n";
	
	//operazioni delle variabili
	 int somma = v1 + v2 + v3 + v4 + v5;
	 std::cout << "La somma delle variabili è " << somma << "\n";
	 
	 int differenza = v1 - v2 - v3 - v4 - v5;
	 std::cout << "La differenza delle variabili è " << differenza << "\n";
	
	 int prodotto = v1 * v2 * v3 * v4 * v5;
	 std::cout << "Il prodotto delle variabili è " << prodotto << "\n";
	
     int quoziente = v1 / v2 / v3 / v4 / v5;
     std::cout << "Il quoziente delle variabili è " << quoziente << "\n";
	return 0;
}