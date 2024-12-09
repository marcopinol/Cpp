#include <iostream>
using namespace std;

float somasqr(float n, float m);
float sqr(float n);
float soma(float n, float m);

int main(){
	float a, b;
	
	cout << "Digite dois numeros: ";
	cin >> a >> b;
	cout << "A soma dos quadrados eh " << somasqr(a, b) << endl;
	
	system("PAUSE");
	
	return 0;
}

float somasqr(float n, float m){
	
	return soma(sqr(n), sqr(m));
}

float sqr(float n){
	
	return n * n;
}

float soma(float n, float m){
	
	return n + m;
}
