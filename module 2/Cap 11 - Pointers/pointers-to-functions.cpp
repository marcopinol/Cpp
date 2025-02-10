#include <iostream>
using namespace std;

void doisbeep(void);

int main(){
	void (*pf)(void); //Pointer for an void function that receives void
	
	pf = doisbeep; //Function name without () //doisbeep() without () gives your address
	
	(*pf)(); //Calls the function via pointer //It's like write doisbeep()
	
	system("PAUSE");
	return 0;
}

void doisbeep(void){
	cout << '\a';
	sleep(1.5);
	cout << '\a';
}
