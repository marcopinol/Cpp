#include <iostream>

#define PI 3.14
#define SQR(x) ((x) * (x))
#define AREA(x) ((4) * (PI) * SQR(x))
using namespace std;

int main(){
	float r;
	
	cout << "Digite o raio de uma esfera: ";
	cin >> r;
	
	cout << "A area da esfera eh: " << AREA(r) << endl;
	
	system("PAUSE");
	
	return 0;
}
