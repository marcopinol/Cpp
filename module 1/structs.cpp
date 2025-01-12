#include <iostream>
#include <iomanip>
using namespace std;

struct Aluno {
	int nmat; //registration number
	float nota[3]; //school grades
	float media; //school average
};

int main(){
	Aluno Jose;
	
	Jose.nmat = 456;
	Jose.nota[0] = 10;
	Jose.nota[1] = 9.5;
	Jose.nota[2] = 7;
	Jose.media = (Jose.nota[0] + Jose.nota[1] + Jose.nota[2]) / 3.0;
	
	cout << setprecision(3);
	cout << "Matricula: " << Jose.nmat << endl;
	cout << "Media: " << Jose.media << endl;
	
	system("PAUSE");
	return 0;
}
