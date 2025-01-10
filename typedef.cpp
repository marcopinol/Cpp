#include <iostream>
using namespace std;

typedef unsigned char BYTE; //aliasing unsigned char data type
typedef unsigned int uint;  //aliasing unsigned int data type

struct xx {
	char nome[30];
	char endereco[30];
};

typedef xx REGISTRO;

typedef struct {
	char RG[13];
	char CPF[15];
} DOCUMENTOS;

int main(){
	BYTE ch;
	uint n;
	
	REGISTRO joao;
	DOCUMENTOS julia;
	
	return 0;
}
