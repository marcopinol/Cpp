#include <iostream>
#include <conio.h>
using namespace std;

const char ctrlZ = 26;

inline char minusculo(char ch){
	return((ch >= 'A' && ch <= 'Z') ? (ch - 'A' + 'a') : ch);
}

int main(){
	char ch;
	
	while((ch = minusculo(getch())) != ctrlZ){
		cout << ch;
	}
	cout << endl;
	
	system("PAUSE");
	
	return 0;
}
