#include <iostream>
#include <iomanip>
using namespace std;

float media(float *lista, int tamanho);

int main(){
	int tamanho;
	
	cout << "Qual eh o numero de notas? ";
	cin >> tamanho;
	
	float *notas = new float[tamanho];
	
	int i;
	
	cout << setprecision(2); //Number of digits to been printed
	
	for(i = 0; i < tamanho; i++){
		cout << "Digite a nota do aluno " << (i + 1) << " : ";
		cin >> *(notas + i);
	}
	float m = media(notas, tamanho);
	cout << "Media das notas: " << m << endl;
	delete[] notas;
	
	system("PAUSE");
	return 0;
}

float media(float *lista, int tamanho){
	float m = 0.0;
	for(int i = 0; i < tamanho; i++)
		m += *(lista++);
	return m/tamanho;
}
