#include <iostream>
#include <iomanip>
using namespace std;

const int TAMANHO = 50;

float media(float lista[], int tamanho);

int main(){
	float notas[TAMANHO];
	int i = 0;
	
	cout << setprecision(4);
	
	do{
		cout << "Digite a nota do aluno " << (i + 1) << " : ";
		cin >> notas[i];
	}while(notas[i++] >= 0.0);
	
	i--;
	
	float m = media(notas, i);
	cout << "Media das notas: " << m << endl;
	
	system("PAUSE");
	return 0;
}

float media(float lista[], int tamanho){
	float m = 0.0;
	
	for(int x = 0; x < tamanho; x++){
		m += lista[x];
	}
	
	return (m/tamanho);
}
