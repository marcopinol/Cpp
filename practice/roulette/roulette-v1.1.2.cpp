#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

void percentages(const float& f, const float& t);
void showInfo(const int& t, const int& f, const bool& b);
int invertert(int& f, int& t, bool& b);
int inverterf(int& t, int& f, bool& b);

int main(){
	char ch;
	bool b = false;
	do{
		system("cls");
		int t, f;
		
		cout << "\n\t+-+-+-+-+ WELCOME TO ROULETTE BULLET COUNTER v1.1.2 +-+-+-+-+\n";
		cout << "\t ,________________________________       \n";
		cout << "\t|__________,----------._ [____]  \"\"-,__  __...-----===\n";
		cout << "\t        (_(||||||||||||)___________/   ""               |\n";
		cout << "\t           `----------'        [ ))\"-,                |\n";
		cout << "\t                                \"\"    `,  _,--...___  |\n";
		cout << "\t                                        `/          \"\"\"\n";
		cout<< "\t\t\t\t\tprogram by lonipocram\n\n";
		cout << "\n\tInsert the number of true bullets: ";
		cin >> t;
		cout << "\n\n\tInsert the number of false bullets: ";
		cin >> f;
		
		system("cls");
					
		showInfo(t, f, b);
		percentages(f, t);
		
		while((t + f) != 0){
			char c;
			
			cout << "\n\n\n\tPress \"T\" to eject a true bullet or \"F\" to eject a false bullet.";
			cout << "\n\tPress \"I\" to reverse the polarity of the bullet.";
			
			c = getch(); 
			
			if(c == 73 || c == 105){
				b = !(b);
			}
			
			if(c == 84 || c == 116){
				if(t <= 0){
					system("cls");

					if(b == true){
						invertert(f, t, b);
						showInfo(t, f, b);
						percentages(f, t);
						continue;
					}
					
					cout << "\n\n\t\tTrue bullets gone";
				}else{
					system("cls");

					if(b == true){
						invertert(f, t, b);			
					}else{
						t -= 1;
					}
				}
			}else if(c == 70 || c == 102){
				if(f <= 0){
					system("cls");

					if(b == true){
						inverterf(t, f, b);
						showInfo(t, f, b);
						percentages(f, t);
						continue;
					}
					
					cout << "\n\n\t\tFalse bullets gone";
				}else{
					system("cls");
					
					if(b == true){						
						inverterf(t, f, b);
					}else{					
						f -= 1;
					}					
				}
			}else{
				system("cls");
			}
			showInfo(t, f, b);
			percentages(f, t);
		}
	system("cls");
	
	showInfo(t, f, b);
	cout << "\n\n\tDo you want to replay? (y/n)";
	
	ch = getch();
	}while(ch == 89 || ch == 121);
	
	cout << endl;
	
	return 0;
}

void percentages(const float& f, const float& t){
	float pf, pt;
	
	pf = ((float)(f) / (float)(t + f)) * 100;
	pt = ((float)(t) / (float)(t + f)) * 100;
	
	cout << setiosflags(ios::showpoint) << setiosflags(ios::fixed) << setprecision(2);
	cout << "\n\n\tChance to being true: " << pt << '%';
	cout << "\n\tChance to being false: " << pf << '%';
}

void showInfo(const int& t, const int& f, const bool& b){
	cout << "\n\n\t\tTotal of bullets: " << (t + f);
	cout << "\n\n\tTrue bullets: " << t;
	cout << "\n\tFalse bullets: " << f;
	b == true ? cout << "\n\tINVERTER: ON" : cout << "\n\tINVERTER: OFF";
}

int invertert(int& f, int& t, bool& b){
	if(b == true && f == 0){
		cout << "\n\n\t\tNot possible";
		b = false;
		return f;
	}else if(b == true){
		b = false;
		return f--;
	}else
		return t--;
}

int inverterf(int& t, int& f, bool& b){
	if(b == true && t == 0){
		cout << "\n\n\t\tNot possible";
		b = false;
		return t;
	}else if(b == true){
		b = false;
		return t--;
	}else
		return f--;
}
