#include <iostream>
#include <time.h>
using namespace std;

int main(){
	int i, j;
	register int m, n;
	double t;
	
	t = clock();
	
	for(j = 0; j < 50000; j++)
		for(i = 0; i < 50000; i++){
			;
		}
		
	cout << "Tempo dos lacos nao register: " << (clock() - t) << endl;
	
	t = clock();
	
	for(m = 0; m < 50000; m++)
		for(n = 0; n < 50000; n++){
			;
		}
	
	cout << "Tempo dos lacos register: " << (clock() - t) << endl;
	
	cout << "Execucao total: " << clock() << endl;
		
	return 0;
}
