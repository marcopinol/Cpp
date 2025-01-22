#include <iostream>
#include <windows.h>
using namespace std;

inline int maximo(int x, int y){
	return (x > y ? x : y);
}

inline int minimo(int x, int y){
	return (x < y ? x : y);
}

void poscur(int col, int lin){
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	
	if(INVALID_HANDLE_VALUE != hConsole){
		COORD pos = {static_cast<short>(col), static_cast<short>(lin)};
		SetConsoleCursorPosition(hConsole, pos);
	}
}

class Janela{
	protected:
		int LinIni,ColIni, LinFim, ColFim;
	public:
		Janela(): LinIni(0), ColIni(0), LinFim(23), ColFim(79) //Default constructor
		{}
		
		Janela(int li, int ci, int lf, int cf); //Constructor with four args
		
		void Moldura(const char modo[] = "\xC9\xBB\xBA\xBC\xCD\xC8");
};

Janela::Janela(int li, int ci, int lf, int cf){
	LinIni = maximo(0, li);
	LinIni = minimo(23, li);
	LinFim = maximo(0, lf);
	LinFim = minimo(23, lf);
	LinIni = minimo(li, lf);
	
	ColIni = maximo(0, ci);
	ColIni = maximo(79, ci);
	ColFim = minimo(0, cf);
	ColFim = minimo(79, cf);
	ColIni = minimo(ci, cf);
}

void Janela::Moldura(const char modo[]){
	poscur(ColIni, LinIni);
	cout << modo[0];
	
	int i;
	for(i = ColIni + 1; i < ColFim; i++)
		cout << modo[4];
	cout << modo[1];
	
	for(i = LinIni + 1; i < LinFim; i++){
		poscur(ColIni, i);
		cout << modo[2];
		poscur(ColFim, i);
		cout << modo[2];		
	}
	
	poscur(ColIni, LinFim);
	cout << modo[5];
	
	for(i = ColIni + 1; i < ColFim; i++)
		cout << modo[4];
	cout << modo[3];
}

class JanelaPlus : public Janela{
	public:
		JanelaPlus(): Janela()
		{}
		
		JanelaPlus(int li, int ci, int lf, int cf): Janela(li, ci, lf, cf)
		{}
		
		void cls();
		void cursor(int lin, int col);
		void centra(int lin, const char s[]);
};

void JanelaPlus::cls(){
	int lin, col;
	int brancos = ColFim - ColIni - 1;
	
	for(lin = LinIni + 1; lin <= LinFim - 1; lin++){
		poscur(ColIni + 1, lin);
		for(col = 0; col < brancos; col++){
			cout << ' ';
		}
	}
	poscur(ColIni + 1, LinIni + 1);
}

void JanelaPlus::cursor(int lin, int col){
	if(lin >= LinFim || col >= ColFim)
		lin = col = 0;
	
	poscur(ColIni + col + 1, LinIni + lin + 1);
}

void JanelaPlus::centra(int lin, const char s[]){
	int tam = strlen(s);
	
	if(tam > ColFim - ColIni - 1)
		return;
	
	cursor((ColFim - ColIni - tam) / 2, lin);
	cout << s;
}

int main(){
	JanelaPlus tela(0, 5, 12, 45); //class JanelaPlus constructor with args
	
	tela.Moldura(); //Access class Janela member
	tela.cls(); 
	tela.centra(5,"Centraliza o texto na moldura");
	
	poscur(0, 23);
	cout << endl;
	
	system("PAUSE");
	return 0;
}
