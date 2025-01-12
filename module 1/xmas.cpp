#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	system("cls");
	
	cout << "Sinal interno direito: ";
	char sd = getche();
	
	cout << "\nSinal interno esquerdo: ";
	char se = getche();
	cout << "\n\n";
	
	for(int i = 0; i < 4; i++){
		for(int k = 1; k < 5; k++){
			for(int j = 1; j <= 40 - (2 * i + k); j++) cout << ' ';
				cout << '/';
			for(int j = 1; j < (2 * i + k); j++) cout << se;
				for(int j = 1; j < (2 * i + k); j++) cout << sd;
					cout << '\\' << endl;
		}	
	}
	
	for( int i = 0; i < 2; i++){
		for(int j = 0; j < 38; j++){
			cout << ' ';
		}
		cout << "|  |" << endl;
	}
	cout << endl;
	
	for(int i = 0; i < 34; i++){
		cout << ' ';
	}
	cout << "FELIZ NATAL!" << endl;
	for(int i = 0; i < 30; i++){
		cout << ' ';
	}
	cout << "E UM PROSPERO 2025!" << endl;
	
	system("PAUSE");
	
	return 0;
}
