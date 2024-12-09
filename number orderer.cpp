#include <iostream>
using namespace std;

void troca(float& n, float& m);

int main(){
	float n1, n2, n3;
	
	cout << "Digite tres numeros: ";
	cin >> n1 >> n2 >> n3;
	
	if(n1 > n2)
		troca(n1, n2);
	if(n1 > n3)
		troca(n1, n3);
	if(n2 > n3)
		troca(n2, n3);
		
	cout << "\tn1 = " << n1 << "\tn2 = " << n2 << "\tn3 = " << n3 << endl;
	
	system("PAUSE");	
	
	return 0;
}

void troca(float& n, float& m){
	float temp = n;
	n = m;
	m = temp;
}
