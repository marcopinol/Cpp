#include <iostream>
#include <iomanip>
using namespace std;

float media(float (*lista)[3], int tamanho); //Each student has 3 grades each

int main(){
	int alunos;
	float (*notas)[3];
	
	cout << "Qual eh o numero de alunos? ";
	cin >> alunos;
	
	notas = new float[alunos][3];
	
	int i;
	
	for(int i = 0; i < alunos; i++)
		for(int j = 0; j < 3; j++){
			cout << "Digite a nota " << (j + 1) << " do Aluno " << (i + 1) << " : ";
			cin >> notas[i][j];
		}
	
	float m = media(notas, alunos);
	cout << setprecision(2); //Number of digits to been printed
	cout << "Media de todos os alunos: " << m << endl;
	
	delete[] notas;
	
	system("PAUSE");
	return 0;
}

float media(float (*lista)[3], int alunos){
	float m = 0.0;
	int totalElementos = alunos * 3;
	
	for(int i = 0; i < alunos; i++)
		for(int j = 0; j < 3; j++)
			m += lista[i][j];
	
	return m/totalElementos;
}
