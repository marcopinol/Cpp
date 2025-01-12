#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int x = 20000000000; //bad value for int type;
	int dez = 10;
	
	x = (x * 10) / 10;
	
	cout << "\no valor de x eh : " << x << endl; //wrong result
	
	//to fix this, we gonna use explict conversion
	x = 2100000000; //bad value for int type
	
	x = ((long double)(x) * dez) / dez; //converting x from int to long double
	
	cout << "\nO valor de x agora eh: " << x << endl; //correct result
	
	system("PAUSE");
	
	//showing ASCII char value
	unsigned char ch = 'A';
	cout << "\nValor numerico do caracter eh: " << int(ch) << endl;
	
	system("PAUSE");
	
	//another form to convert similiar to the past methos is static_cast
	
	float z = 345.678;
	
	//both are similar
	cout << '\n' << int(z); //convert z into int and print 345
	cout << '\n' << static_cast<int>(z) << endl; //convert z into int and print 345
	
	system("PAUSE");
	
	return 0;
}