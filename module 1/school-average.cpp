#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;

int main() {
	float soma = 0.0;
	const int max = 10;
	
	cout << setprecision(2);
	
	for(int i = 0; i < max; i++){
		cout << "Digite a nota " << (i+1) << " : ";
		float nota;
		cin >> nota;
		soma += nota;
	}
	cout << "\nMedia = " << (soma/max) << endl;
	
	system("PAUSE");
		
	return 0;
}
