#include <iostream>
#include <iomanip>
using namespace std;

const int MES = 3;
const int FUNC = 5;

void histogram(int pecas[][MES], int nfunc);

int main(){
	int pecas[FUNC][MES];
	
	for(int i = 0; i < FUNC; i++)
		for(int j = 0; j < MES; j++){
			cout << "Funcionario " << (i + 1) << " mes " << (j + 1) << ": ";
			cin >> pecas[i][j];
		}
	
	histogram(pecas, FUNC);
	
	system("PAUSE");
	return 0;
}

void histogram(int pecas[][MES], int nfunc){
	const float MAXBARRA = 50.0;
	int max = 0, temp = 0;
	
	for(int i = 0; i < nfunc; i++){
		temp = 0;
		for(int j = 0; j < MES; j++)
			temp += pecas[i][j];
		if(max < temp)
			max = temp;
	}
	
	for(int i = 0; i < nfunc; i++){
		temp = 0;
		for(int j = 0; j < MES; j++)
			temp += pecas[i][j];
		cout << setw(2) << (i + 1) << " - " << setw(5) << temp << ":";
				
		int tam = (int)((float)(temp) / (float)(max) * MAXBARRA);
		
		for(int j = 0; j < tam; j++)
			cout << '*';
		cout << endl;
	}		
}
