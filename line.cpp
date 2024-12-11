#include <iostream>
using namespace std;

void linha(int n = 20, char ch = '*');

int main(){
	linha();
	cout << endl;
	
	linha(34);
	cout << endl;
	
	linha(45, '=');
	cout << endl;
	
	system("PAUSE");
	
	return 0;
}

void linha(int n, char ch){
	for(int i = 0; i < n; i++){
		cout << ch;
	}
}
