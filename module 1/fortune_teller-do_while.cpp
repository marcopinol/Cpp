#include <iostream>
#include <cstdlib>
#include <conio.h>
using namespace std;

int main() {
	
	do{
		char adivinha = rand() % 26 + 'a';
		int tentativas = 1;
		
		cout << "\n\nDigite uma letra entre 'a' e 'z':" << endl;
		
		char resp;
		
		while((resp =getch()) != adivinha){
			cout << resp << " eh incorreto. Tente novamente." << endl;
			tentativas++;
		}
		
		cout << resp << " EH CORRETO!!!" << "\nVoce acertou em " << tentativas << " tentativas";
		cout << "\nQuer jogar novamente? (s/n): ";
	}while(getche() == 's');
	
	cout << "Ate a proxima!" << endl;
	
	return 0;
}
