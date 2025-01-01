#include <iostream>
using namespace std;

int bissexto(int ano);

int main(){
	
	cout << bissexto(2000) << endl;
	
	system("PAUSE");
	
	return 0;
}

int bissexto(int ano){
	return ((ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0)) ? 1 : 0);
}
