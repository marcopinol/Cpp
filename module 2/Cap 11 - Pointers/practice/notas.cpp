#include <iostream>
#include <iomanip>
using namespace std;

float media(float *n);
int qtdNotas;

int main(){
	cout << "Digite o numero de notas a serem inseridas: ";
	cin >> qtdNotas;
	
	float *notas = new float[qtdNotas];
	
	for(int i = 0; i < qtdNotas; i++){
		cout << "Insira a nota do aluno " << i + 1 << ": ";
		cin >> *(notas + i);
	}
	
	cout << setiosflags(ios::fixed) << setiosflags(ios::showpoint) << setprecision(1)
		 << "A media dos " << qtdNotas << " alunos foi: " << media(notas) << endl;
	
	delete[] notas;
	
	system("PAUSE");
	return 0;
}

float media(float *n){
	float temp = 0.0;
	for(int i = 0; i < qtdNotas; i++){
		temp += *(n + i);
	}
	return (temp/qtdNotas);
}
