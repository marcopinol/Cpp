#include <iostream>
using namespace std;

void func0(void), func1(void), func2(void);

int main(){
	bool check = true;
	void (*ptrf[3])(void); //Array of pointers to void type functions that don't receive args (void);
	
	ptrf[0] = func0;
	ptrf[1] = func1;
	ptrf[2] = func2;
	
	do{
		int i;
		cout << "0 - ABRIR" << endl;
		cout << "1 - FECHAR" << endl;
		cout << "2 - SALVAR" << endl;
		cout << "3 - SAIR" << endl;
		cin >> i;
		if(i < 0 || i > 2){
			check = false;
			continue;
		}
		(*ptrf[i])(); //Calls the respective function from the inputed number
	}while(check == true);
	
	system("PAUSE");
	return 0;
}

void func0(){
	cout << "\n*** func0() ***" << endl; 
}

void func1(){
	cout << "\n*** func1() ***" << endl;
}

void func2(){
	cout << "\n*** func2() ***" << endl;
}
