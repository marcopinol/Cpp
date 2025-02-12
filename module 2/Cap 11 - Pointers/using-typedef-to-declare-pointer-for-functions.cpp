#include <iostream>
using namespace std;

void func0(void), func1(void), func2(void);

typedef void (*PFunc)(void); //The PFunc type is a pointer to a void function

int main(){
	bool check = true;
	PFunc ptr[3] = {func0, func1, func2};
	
	do{
		int i;
		cout << "0 - ABRIR" << endl;
		cout << "1 - FECHAR" << endl;
		cout << "2 - SALVAR" << endl;
		cout << "3 - SAIR" << endl;
		cout << "\nEscolha um item: ";
		cin >> i;
		
		if(i < 0 || i > 2){
			check = false;
			continue;
		}
		(ptr[i])(); //Calls the function
	}while(check == true);

	return 0;
}

void func0(void){
	cout << "\n\n*** func0() ***" << endl;
}

void func1(void){
	cout << "\n\n*** func1() ***" << endl;
}

void func2(void){
	cout << "\n\n*** func2() ***" << endl;
}
