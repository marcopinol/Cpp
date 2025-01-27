#include <iostream>
#define TAM 50
using namespace std;

float media(float *lista, int tam); //using float *lista is more convenient than float lista[], because float lista[] declares a constant pointer

int main(){
	float notas[TAM], m;
	int i = 0;
	
	do{
		cout << "Digite a nota do aluno " << (i + 1) << " : ";
		cin >> *(notas + i);
	}while(*(notas + i++) >= 0.0);
	
	i--;
	
	m = media(notas, i);
	cout << "Media das notas: " << m << endl;
	
	system("PAUSE");
	return 0;
}

float media(float *lista, int tam){
	float m = 0.0;
	
	for(int i = 0; i < tam; i++)
		m += *(lista++);
	
	return m/tam;
}
