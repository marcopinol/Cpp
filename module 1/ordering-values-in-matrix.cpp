#include <iostream>
using namespace std;

const int TAMANHO = 50;

void bubble(int lista[], int size);

int main(){
	int tab[TAMANHO], i = 0;
	
	for(i; i < TAMANHO; i++){
		cout << "Digite um numero ou zero para terminar: ";
		cin >> tab[i];
		
		if(!(tab[i]))
			break;
	}
	
	cout << "I = " << i << endl;
	
	bubble(tab, i);
	
	for(int j = 0; j < i; j++)
		cout << tab[j] << endl;
		
	system("PAUSE");
	return 0;
}

void bubble(int lista[], int size){
	for(int i = 0; i < size - 1; i++)
		for(int j = i + 1; j < size; j++){
			if(lista[i] > lista[j]){
				int temp = lista[j];
				lista[j] = lista [i];
				lista[i] = temp;
			}
		}
}
