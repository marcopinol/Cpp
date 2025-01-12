#include <iostream>
using namespace std;

void floatPart(double f, int& i, float& fd);

int main(){
	int inteiro;
	float decimal, num = 3.451250;
	
	floatPart(num, inteiro, decimal);
	cout << endl;
	
	system("PAUSE");
	return 0;
}

void floatPart(double f, int& i, float& fd){
	fd = f - (int)(f);
	i = (int)(f);
	
	cout << "Numero inserido: " << f << "\nParte inteira: " << i << "\nParte decimal: " << fd;
}
