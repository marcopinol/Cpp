#include <iostream>
#include <conio.h> //for getche()
using namespace std;

int main() {
	char ch;
	
	//getche() print the key after press, getch() doesn't print pressed key
	cout << "\nPressione uma tecla ";
	ch = getche(); //requests a key on keyboard
	
	cout << "\nA tecla sucessora ASCII eh: " << char(ch + 1) << endl;
		
	return 0;
}