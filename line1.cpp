#include <iostream>
using namespace std;

void linha();
void linha(const char& ch, const int& n);
void linha(const int& n, const char& ch);
void linha(const char& ch);
void linha(const int& n);

int main(){
	
	linha();
	cout<<endl;
	
	linha(34);
	cout << endl;
	
	linha(45, '=');
	cout << endl;
	
	linha('+', 44);
	cout << endl;
	
	linha('+');
	cout << endl;
	
	system("PAUSE");
	
	return 0;
}

void linha(){
	for(int i = 0; i < 20; i++){
		cout << '*';
	}
}

void linha(const char& ch, const int& n){
	for(int i = 0; i < n; i++){
		cout << ch;
	}
}

void linha(const int& n, const char& ch){
	for(int i = 0; i < n; i++){
		cout << ch;
	}
}

void linha(const char& ch){
	for(int i = 0; i < 20; i++){
		cout << ch;
	}
}

void linha(const int& n){
	for(int i = 0; i< n; i++){
		cout << '*';
	}
}
