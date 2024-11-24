#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;

int main() {
	int i;
	
	for(i = 0; i < 20; i++)
		cout << '*';
	cout << endl;
	
	system("PAUSE");
	
	for(i = 9; i > 0; i--)
		cout << '\n' << setw(4) << i << " x 6 = " << setw(4) << (i*6);
	cout << endl;
	
	system("PAUSE");
	
	for(i = 3; i < 100; i+= 3)
		cout << setw(6) << i;
	cout << endl;
	
	system("PAUSE");
	
	for(int i = 0, j = 0; (i+j) < 100; i++, j++)
		cout << (i+j) << ' ';
	cout << endl;
	
	system("PAUSE");
	
	for(char ch = 'a'; ch <= 'z'; ch++)
		cout << "\nO valor ASCII de " << ch << " eh " << static_cast<int>(ch);
	cout << endl;
	
	system("PAUSE");
	
	for(char ch = getch(); ch != 'X'; ch = getch())
		cout << char(ch + 1);
	cout << endl;
	
	system("PAUSE");
	
	char ch;
	for ( ; (ch = getch()) != 'X' ; )
		cout << char(ch + 1);
	cout << endl;
	
	system("PAUSE");
	
	//Infinite for
	//for( ; ; )
		//cout << "For infinito";
	
	return 0;
}
