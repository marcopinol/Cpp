#include <iostream>
#include <iomanip>
using namespace std;

static union {
	char str[30];
	int i;
	float f;
}; //this is a variable

enum DataType {StrType, IntType, FloatType} Tipo;

void variosTipos(const char s[]);
void variosTipos(const float& fn);
void variosTipos(const int& in);
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
	strcpy(str, s);
}

void variosTipos(const float& fn){
	Tipo = FloatType;
	f = fn;
}

void variosTipos(const int& in){
	Tipo = IntType;
	i = in;
}

void Print(void){
	switch(Tipo){
		case StrType:
			cout << "Str = " << str << endl;
			break;
		case IntType:
			cout << "Int = " << i << endl;
			break;
		case FloatType:
			cout << setprecision(2);
			cout << "Float = " << f << endl;
			break;
	}
}
