#include <iostream>

#define PI 3.14
using namespace std;

float area(float& r);

int main(){
	float raio;
	
	cout << "Digite o raio de uma esfera: ";
	cin >> raio;
	
	cout << "A area da esfera eh de " << area(raio) << endl;
	
	system("PAUSE");
	
	return 0;
}

float area(float& r){
	return 4.0 * PI * (r * r);
}
