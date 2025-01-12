#include <iostream>
using namespace std;

void rectangle(int alt = 5, int larg = 20);

int main(){	
	rectangle();
	
	cout << endl;
	
	system("PAUSE");	
	return 0;
}

void rectangle(int alt, int larg){	
	cout << '+';
	for(int x = 2; x < larg; x++){
		cout << '-';
	}
	cout << '+';
	
	for(int y = 2; y < alt; y++){
		cout << '\n' << '|';
		for(int i = 2; i < larg; i++){
			cout << ' ';	
		}
		cout << '|';
	}

	cout << '\n' << '+';
	for(int x = 2; x < larg; x++){
		cout << '-';
	}
	cout << '+';
}
