#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main(){
	char resposta[] = "BRANCO";
	char resp[40];
	
	cout << "Qual eh a cor do cavalo branco de Napoleao?\n";
	gets(resp);
	
	while(strcmp(resp, resposta) != 0){
		cout << "Resposta errada, tente novamente. " << endl;
		gets(resp);
	}
	cout << "Correto!" << endl;
	
	system("PAUSE");
	return 0;
}
