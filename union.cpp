#include <iostream>
#include <iomanip>
using namespace std;

union Numero {
	char str[30];
	int i;
	float f;
} x;

enum DataType {StrType, IntType, FloatType} Tipo;

void variosTipos(const char s[]);
void variosTipos(const float& f);
void variosTipos(const int& i);
void Print(void); 

int main(){
	float y = 34.56;
	int z = 10;
	
	variosTipos("VVB-Treinamento Pessoal");
	Print();

	variosTipos(z);
	Print();
	
	variosTipos(y);
	Print();
	
	system("PAUSE");
	return 0;
}

void variosTipos(const char s[]){
	Tipo = StrType;
	strcpy(x.str, s);
}

void variosTipos(const float& f){
	Tipo = FloatType;
	x.f = f;
}

void variosTipos(const int& i){
	Tipo = IntType;
	x.i = i;
}

void Print(void){
	switch(Tipo){
		case StrType:
			cout << "Str = " << x.str << endl;
			break;
		case IntType:
			cout << "Int = " << x.i << endl;
			break;
		case FloatType:
			cout << setprecision(2);
			cout << "Float = " << x.f << endl;
			break;
	}
}
