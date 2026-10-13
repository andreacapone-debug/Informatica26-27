#include <iostream>
using namespace std;

int main() {
	int n;
	int n1;
	cout << "Inserisci un numero intero: ";
	cin >> n;
	cout << "Inserisci un numero intero: ";
	cin >> n1;
	if(n > n1) {
		cout << ">>>>";
	}
	if(n < n1) {
		cout << "<<<<";
	}
	if(n == n1) {
		cout << "====";

	}
	return 0;
}