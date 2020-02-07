#include <iostream>
#include <string.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
class logic{
	
	public:
		int option,repeat;
		void input();
		void con();
		void dis();
		void nega ();
		void cond ();
		void bicon ();
		void again();
};

int main(int argc, char** argv) {
	logic a;	
	a.input();
	return 0;
}


void logic::input(){
	cout<<"This program can only display the true or false value of the given argument."<<endl;
	cout<<"Depending on the logic opperator yo whish to select."<<endl;
	cout<<"This program is only limited to only TWO arguments."<<endl<<endl;
	cout<<"So with all that being asaid, please select the logic operator you want to use:"<<endl;
	cout<<"(1) - Conjuction\n(2) - Disjuction\n(3) - Negation\n(4) - Conditional\n(5) - Biconditional"<<endl;
	cout<<"Choice: ";
	cin>>option;
	switch(option){
		
		case 1:
			con();
			again();
			break;
		case 2:
			dis();
			again();
			break;
		case 3:
			nega();
			again();
			break;
		case 4:
			cond();
			again();
			break;
		case 5:
			bicon();
			again();
			break;
		default:
			again();
			break;			
	}
}

void logic::con(){
	cout<<"_______________________________________"<<endl;
	cout<<"| P value | Q value | Conjuction (P^Q) |"<<endl;
	cout<<"======================================="<<endl;
	cout<<"|TRUE     |TRUE     |       TRUE       |"<<endl;
	cout<<"|TRUE     |FALSE    |       FALSE      |"<<endl;
	cout<<"|FALSE    |TRUE     |       FALSE      |"<<endl;
	cout<<"|FALSE    |FALSE    |       FALSE      |"<<endl;
	cout<<"----------------------------------------"<<endl;
}

void logic::dis(){
	cout<<"_______________________________________"<<endl;
	cout<<"| P value | Q value | Disjuction (PvQ) |"<<endl;
	cout<<"======================================="<<endl;
	cout<<"|  TRUE   |  TRUE   |      TRUE        |"<<endl;
	cout<<"|  TRUE   |  FALSE  |      TRUE        |"<<endl;
	cout<<"|  FALSE  |  TRUE   |      TRUE        |"<<endl;
	cout<<"|  FALSE  |  FALSE  |      FALSE       |"<<endl;
	cout<<"----------------------------------------"<<endl;
}

void logic::nega(){
	cout<<"_______________________________________"<<endl;
	cout<<"| P value | Q value |     Negation     |"<<endl;
	cout<<"|		 |		   |	~P	|	~Q	  |"<<endl;
	cout<<"==========|=========|========|========="<<endl;
	cout<<"|  TRUE   |  TRUE   |  FALSE |  FALSE  |"<<endl;
	cout<<"|  TRUE   |  FALSE  |  FALSE |  TRUE   |"<<endl;
	cout<<"|  FALSE  |  TRUE   |  TRUE  |  FALSE  |"<<endl;
	cout<<"|  FALSE  |  FALSE  |  TRUE  |  TRUE   |"<<endl;
	cout<<"----------------------------------------"<<endl;
}

void logic::cond(){
	cout<<"_________________________________________"<<endl;
	cout<<"| P value | Q value | Conditional (P->Q) |"<<endl;
	cout<<"========================================="<<endl;
	cout<<"|  TRUE   |  TRUE   |        TRUE        |"<<endl;
	cout<<"|  TRUE   |  FALSE  |        FALSE       |"<<endl;
	cout<<"|  FALSE  |  TRUE   |        TRUE        |"<<endl;
	cout<<"|  FALSE  |  FALSE  |        TRUE        |"<<endl;
	cout<<"------------------------------------------"<<endl;
}

void logic::bicon(){
	cout<<"_________________________________________"<<endl;
	cout<<"| P value | Q value | Conditional (P<->Q)|"<<endl;
	cout<<"========================================="<<endl;
	cout<<"|  TRUE   |  TRUE   |        TRUE        |"<<endl;
	cout<<"|  TRUE   |  FALSE  |        FALSE       |"<<endl;
	cout<<"|  FALSE  |  TRUE   |        FALSE       |"<<endl;
	cout<<"|  FALSE  |  FALSE  |        TRUE        |"<<endl;
	cout<<"------------------------------------------"<<endl;
}

void logic::again(){
	cout<<"Do you want to select another option?\n";
	cout<<"(1) YES\n(2) NO\n";
	cout<<"Choice: ";
	cin>>repeat;
	if(repeat==1){
		cout<<"\n\n";
		input();
	}
}
