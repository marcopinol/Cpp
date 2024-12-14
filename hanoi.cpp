#include <iostream>
using namespace std;

void mover(const int& n, const char& Orig, const char& Temp, const char& Dest);

int main(){
	
	mover(3, 'O', 'T', 'D');
	
	system("PAUSE");
	 
	return 0;
}

void mover(const int& n, const char& Orig, const char& Temp, const char& Dest){
	
	if(n == 1)
		cout << "Mova o disco 1 da haste " << Orig << " para a haste " << Dest << endl;
	else{
		mover(n - 1, Orig, Dest, Temp);
		cout << "Mova o disco " << n << " da haste " << Orig << " para a haste " << Dest << endl;
		mover(n - 1, Temp, Orig, Dest);
	}
}
