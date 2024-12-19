#include <iostream>
#include <conio.h>

#define MAIUSC(ch) ((ch) >= 'a' && (ch) <= 'z') ? \
					((ch) - 'a' + 'A') : (ch)
using namespace std;

int main(){
	char cp;
	
	cp = MAIUSC(getch()); //problems
	
	cout << cp << endl;
	
	system("PAUSE");
	
	return 0;
}
