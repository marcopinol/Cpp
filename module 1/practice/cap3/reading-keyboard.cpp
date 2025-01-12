#include <iostream>
#include <conio.h>
#include <cctype>
using namespace std;

int main() {
	char c;
	
	while((c = getch()) != 27){
		islower(c) ? cout << static_cast<char>(toupper(c)) : cout << c;
	}
	
	return 0;
}
