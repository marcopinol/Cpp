#include <iostream>
using namespace std;

void inits(int n);
unsigned randn(void);

int main(){
	int n;
	
	cout << "Digite um valor para semente: ";
	cin >> n;
	
	inits(n);
	
	for(int z = 0; z < 5; z++){
		cout << randn() << endl;
	}
	
	system("PAUSE");
	
	return 0;
}

static unsigned seed;

void inits(int n){
	seed = n;
}

unsigned randn(){
	seed = (seed * 25173 + 13849) % 65536;
	
	return seed;
}
