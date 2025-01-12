#include <iostream>
using namespace std;

int soma(void);

int main(){
	cout << soma() << endl;
	cout << soma() << endl;
	cout << soma() << endl;
	
	system("PAUSE");
	
	return 0;
}

int soma(){
	static int k; //this variable class allow the variable to persists his value after the execution of the function that's inside itself
	k++;		  //static variables are created in compile time and if they not initialized, they start with value 0, same as extern
	
	return k;
}
