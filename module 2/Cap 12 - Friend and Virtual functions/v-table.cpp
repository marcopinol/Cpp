#include <iostream>
using namespace std;

class BaseVirtual{
	private:
		int x; //this int will size 8 bytes, because of the padding made by compiler due the v-table pointer
	public:
		virtual void Print(){
			cout << "Base Virtual" << endl;
		}
};

class BaseNaoVirtual{
	private:
		int x;
	public:
		void Print(){
			cout << "Base nao virtual" << endl;
		}
};

int main(){
	cout << "Virtual: " << sizeof(BaseVirtual) << endl; //Here is bigger because the compiler create implicitly an pointer to v-table
	cout << "Nao virtual: " << sizeof(BaseNaoVirtual) << endl;
	
	system("PAUSE");
	return 0;
}
