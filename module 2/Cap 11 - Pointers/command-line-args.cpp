#include <iostream>
using namespace std;

int main(int argc, char **argv){ //Argument count and Argument values that are inputed in CLI
	cout << "\nNumero de argumentos: " << argc << endl;
	
	for(int i = 0; i < argc; i++){
		cout << "Argumento numero " << i << ": " << *(argv + i) << endl;
	}
	cout << endl;
	
	system("PAUSE");
	return 0;
}
