#include <iostream>
using namespace std;

void gregoriana(int juliana);

int main(){
	gregoriana(2460678);
	
	return 0;
}

void gregoriana(int juliana){
	int b = juliana + 68569, n = (4 * b) / 146097;
	
	b = b - ((146097 * n + 3) / 4);
	
	int k = (4000 * (b + 1)) /1461001, j = (80 * b) / 2447;
	
	int dia = b - (2447 * j) / 80;
	
	b = (j / 11);
	
	int mes = j + 2 - (12 * b);
	int ano = 100 * (n - 49) + k + b;
	
	cout << dia << mes << ano;
}
