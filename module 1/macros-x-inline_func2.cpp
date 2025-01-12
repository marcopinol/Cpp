#include <iostream>
#include <conio.h>
using namespace std;

inline char maiusc(char ch){
	return (ch >= 'a' && ch <= 'z') ? (ch - 'a' + 'A') : ch;
}

int main(){
	char cp;
	
	cp = maiusc(getch()); //problems
	
	cout << cp << endl;
	
	system("PAUSE");
	
	return 0;
}
