#include <iostream>

int celsius(int fahr); //Prototype

using namespace std;

int main(){
	int c, f;
	
	cout << "Digite a temperatura em graus Fahrenheit: ";
	cin >> f;
	
	c = celsius(f); //Call function
	
	cout << "Celsius = " << c << endl;
	
	system("PAUSE");
	
	return 0;
}

int celsius(int fahr){
	int c;
	
	c = (fahr - 32) * 5/9;
	
	return c;
}
