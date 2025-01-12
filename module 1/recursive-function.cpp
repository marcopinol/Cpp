#include <iostream>
#include <conio.h>
using namespace std;

void inverte(void);

int main(){
	
	inverte();
	
	cout << endl;
	
	system("PAUSE");
	
	return 0;
}

void inverte(){
	char ch;
	
	if((ch = getche()) != '\r') inverte();
	cout << ch;
}
