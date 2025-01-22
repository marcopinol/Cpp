//Example of public, protected and private heritage
//**This code doesn't compile**

class Base{
	private: //private doesn't allow the derived classes access their variables
		int privado;
	protected: //protected allows derived classes to access their variables, but objects can't still access it
		int protegido;
	public: //public allows derived classes to access their variables, objects can do it too
		int publico;
};

class Derivada1 : public Base{ //public heritage: Base public members will be public in Derivada1
	private:					//and Base protected members will be protected in Derivada1
		int a, b, c;
	public:
		Derivada1():{
			a = protegido; //OK
			b = privado; //ERROR: not accessible
			c = publico; //OK
		}
};

class Derivada2 : private Base{ //private heritage: Base public and protected members will be private in Derivada2
	private:
		int a, b, c;
	public:
		Derivada2(){
			a = protegido; //OK
			b = privado //ERROR: not accessible
			c = publico //OK
		}
};

class Derivada3 : protected Base{ //protected heritage: Base public and protected members will be protected in Derivada3
	private:
		int a, b, c;
	public:
		Derivada3(){
			a = protegido; //OK
			b = privado; //ERROR: not accessible
			c = publico; //OK
		}
};

int main(){
	int x;
	
	Derivada1 obj1; //Derivada1 is public
	x = obj1.protegido; //ERROR: not accessible; It's protected
	x = obj1.privado; //ERROR: not accessible; It's private in Base class
	x = obj1.publico; //OK; It's public, so is ok to obj1 access it
	
	Derivada2 obj2; //Derivada1 is private
	x = obj2.protegido; //ERROR: not accessible; It's private
	x = obj2.privado; //ERROR: not accessible; It's private in Base class
	x = obj2.publico; //ERROR: not accessible; It's private
	
	Derivada3 obj3; //Derivada3 is protected
	x = obj2.protegido; //ERROR: not accessible; It's protected
	x = obj2.privado; //ERROR: not accessible; It's private in Base class
	x = obj2.publico; //ERROR: not accessible; It's protected
	
	return 0;
}
