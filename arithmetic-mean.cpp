#include <iostream>
using namespace std;

int main(){
	int notas[5], media;
	
	for(int i = 0; i < 5; i++){
		cout << "Insira a nota do aluno " << (i + 1) << " : ";
		cin >> notas[i];
		media += notas[i];
	}
	media /= 5;
	
	cout << "\nMedia geral dos alunos: " << media << endl;
	
	return 0;
}
