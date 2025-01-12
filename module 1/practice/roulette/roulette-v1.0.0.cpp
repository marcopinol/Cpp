#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

void percentages(const float& f, const float& t);
void showInfo(const int& t, const int& f);

int main(){
	char ch;
	do{
		system("cls");
		int t, f;
		
		cout << "\n\t+-+-+-+-+ WELCOME TO ROULETTE BULLET COUNTER V1.0.0 +-+-+-+-+\n";
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
					
		showInfo(t, f);
		percentages(f, t);
		
		while((t + f) != 0){
			char c;
			
			cout << "\n\n\n\tPress \"T\" to eject a true bullet or \"F\" to eject a false bullet";
			
			c = getch(); 
			
			if(c == 84 || c == 116){
				if(t <= 0){
					system("cls");
					
					if(t == 0 && f == 0){
						showInfo(t, f);
						break;
					}	
					
					cout << "\n\n\t\tTrue bullets gone";
					showInfo(t, f);
					percentages(f, t);
				}else{
					system("cls");
					t -= 1;
					
					if(t == 0 && f == 0){
						showInfo(t, f);
						break;
					}					
					
					showInfo(t, f);
					percentages(f, t);
				}
			}else if(c == 70 || c == 102){
				if(f <= 0){
					system("cls");
					
					if(t == 0 && f == 0){
						showInfo(t, f);
						break;
					}	
					
					cout << "\n\n\t\tFalse bullets gone";
					showInfo(t, f);
					percentages(f, t);
				}else{
					system("cls");
					f -= 1;
					
					if(t == 0 && f == 0){
						showInfo(t, f);
						break;
					}	
					
					showInfo(t, f);
					percentages(f, t);
				}
			}else{
				system("cls");
				showInfo(t, f);
				percentages(f, t);
				cout << "\n\n\tPress \"T\" or \"F\" only.";
			}
		}
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

void showInfo(const int& t, const int& f){
	cout << "\n\n\t\tTotal of bullets: " << (t + f);
	cout << "\n\n\tTrue bullets: " << t;
	cout << "\n\tFalse bullets: " << f;
}
