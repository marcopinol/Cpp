#include <iostream>
#include <cstdlib>
#include <conio.h>
using namespace std;

int main() {
	char ch = 's';
	
	while(ch == 's'){
		char adivinha = rand() % 26 + 'a';
		int tentativas = 1;
		
		cout << "\n\nDigite uma letra entre 'a' e 'z':" << endl;
		
		char resp;
		
		while((resp = getch()) != adivinha){
			cout << resp << " Eh incorreto. Tente novamente" << endl;
			tentativas++;
		}
		
		cout << resp << " EH CORRETO!!!" << "\nVoce acertou em " << tentativas << " tentativas.";
		cout << "Gostaria de jogar novamente? (s/n): ";
		ch = getche();
	}
	cout << "\n\nAte a proxima!!" << endl;;
	
	return 0;
}
