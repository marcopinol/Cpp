#include <iostream>
#define DEBUG 1
#if DEBUG == 0
	#include <conio.h>
#endif

using namespace std;

int main(){
	#if DEBUG == 0
		cout << "\nModo de depuracao desativado";
	#elif DEBUG == 2
		cout << "\Modo de depuracao ativado";
	#else
		cout << "\nErro nao documentado";
	#endif

	char ch;
	ch = getche();

	return 0;
}
	