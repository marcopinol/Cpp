#include <iostream>
#include <iomanip>
using namespace std;

class Tempo{
	private:
		int hora;
		int mins;
		int segs;
	public:
		Tempo(): hora(0), mins(0), segs(0)
		{}
		
		Tempo(int h, int m, int s): hora(h), mins(m), segs(s){}
		
		void init(int h, int m, int s){
			hora = h;
			mins = m;
			segs = s;		
		}
		
		void mostrarHora();
		
		void soma(Tempo t1, Tempo t2);
		
		void soma(Tempo t);
				
		Tempo sub(Tempo t1, Tempo t2);
};

int main(){
	Tempo t1, t2(22, 46, 2), t3;
	
	t1.init(16, 34, 57);
	t1.mostrarHora();
	
	t1.soma(t2);
	t1.mostrarHora();
	
	system("PAUSE");
	return 0;
}

void Tempo::mostrarHora(){
	cout << setfill('0');
	cout << setw(2) << hora << ':' << setw(2) << mins << ':' << setw(2) << segs << endl;
}

void Tempo::soma(Tempo t1, Tempo t2){
	hora = t1.hora + t2.hora;
	mins = t1.mins + t2.mins;
	segs = t1.segs + t2.segs;
}

void Tempo::soma(Tempo t){
	hora += t.hora;
	mins += t.mins;
	segs += t.segs;
}

Tempo Tempo::sub(Tempo t1, Tempo t2){
	Tempo temp;
	
	temp.hora = t1.hora - t2.hora;
	temp.mins = t1.mins - t2.mins;
	temp.segs = t1.segs - t2.segs;
	
	return temp;
}

