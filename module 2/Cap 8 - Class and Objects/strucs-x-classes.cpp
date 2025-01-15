#include <iostream>
using namespace std;

struct easy{ //Structs by default Have your members public, allowing us to make this statement:
		void func();
	private:
		int n;	
};

class Easy{ //Classes by default have your members private, allowing us to make this statement:
		int n;
	public:
		void Func();
};

int main(){
	
	return 0;
}
