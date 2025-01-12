#include <iostream>
using namespace std;

int main() {
	
	//ASCII has 128 chars normaly from 0 to 127, including numbers from 0 to 9, chars, accentuations and control chars.
	//But if we want to print symbols from other idiomes for example, computers have 128 chars more in ASCII that consist 
	//in other idiomes symbols and graphic symbols, and to use them, we have to use '\xDD', being 'DD' a special char code.
	system("cls"); //clear screen
	
	//printing a car
	cout << '\n';
	cout << "\n\t\xDC\xDC\xDB\xDB\xDB\xDB\xDC\xDC";
	cout << "\n\t\xDFO\xDF\xDF\xDF\xDFO\xDF";
	cout << '\n' << endl;
	
	//printing a truck
	cout << '\n';
	cout << "\n\t\xDC\xDC\xDB \xDB\xDB\xDB\xDB\xDB\xDB";
	cout << "\n\t\xDFO\xDF\xDF\xDF\xDF\xDFOO\xDF";
	cout << '\n' << endl;
	
	system("PAUSE");
	system("cls");
	
	//printing a frame in screen
	cout << "\n\n";
	cout << "\n\t\xC9\xCD\xBB";
	cout << "\n\t\xBA \xBA";
	cout << "\n\t\xC8\xCD\xBC";
	cout << "\n";
	cout << endl;
		
	return 0;
}
