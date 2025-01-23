#include <iostream>
#include <iomanip>
using namespace std;

class Array{
	private:
		static const int MAX = 50;
		float n[MAX];
	public:
		Array() //Default constructor
		{}
		
		float& operator [](int indice); //[] overload
		float media(int i);
};

int main(){
	Array notas;
	int i = 0;
	
	cout << setprecision(2);
	
	do{
		cout << "Digite a nota do aluno " << (i + 1) << ": ";
		cin >> notas[i]; //It's like notas.n[i], but this is illegal so we use [] overload method
	}while(notas[i++] >= 0);
	
	cout << "Media das notas: " << notas.media(i-1) << endl;
	
	notas[60]; //Here we're modifying 'lixo' variable, the sintax can mislead us, but because of size (60) 
				//the [] operator overload method returns to us a reference to 'lixo' variable, not private float n[];
	
	cout << "notas[60] = "; 
	cout << notas[60] << endl;
	
	notas[60] = 5.5; //lixo = 5.5;
	
	cout << "notas[60] = ";
	cout << notas[60] << endl;
	
	system("PAUSE");
	return 0;
}

float& Array::operator [](int indice){
	static float lixo = -1; //Must be static because the method returns a reference
	if(indice >= 0 && indice < MAX) //Checks if the indice size is ok (< MAX and >= 0)
		return n[indice]; //Reference to private float n[indice]
	else
		return lixo;
}

float Array::media(int i){
	float m = 0.0;
	for(int j = 0; j < i; j++)
		m += n[j];
	return (m/static_cast<float>(i));
}
