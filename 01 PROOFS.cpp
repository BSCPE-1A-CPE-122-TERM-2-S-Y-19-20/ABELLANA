#include <iostream>
#include <string.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
class proofs{
	
	public:
		int option,again;
		void input();
		void iden();
		void domin();
		void idem();
		void doubneg();
		void commu();
		void asso();
		void dist();
		void demo();
		void abso();
		void nega();
		void repeat();
		void conpros();
		void biconrpros();
		
};

int main(int argc, char** argv) {
	proofs a;	
	a.input();
	return 0;
}

void proofs::input(){
	cout<<"*this code only presents the table of logical equivalences in logic.*\n";
	cout<<"so with all that being said....\n";
	cout<<"Please select the option you want to use.\n\n"<<endl;
	cout<<"(1) IDENTITY LAWS\n(2) DOMINANT LAWS\n(3) IDEMPOTENT LAWS\n(4)DOUBLE NEGATION LAWS"<<endl;
	cout<<"(5) COMMUTATIVE LAW\n(6) ASSOCIATIVE LAWS\n(7) DISTRIBUTIVE LAWS\n(8) DE MORGAN'S LAW"<<endl;
	cout<<"(9) ABSORPTION LAW\n(10) NEGATION LAWS\n(11) CONDITIONAL PROSPECTIVE\n(12) BICONDITIONAL PROSPECTIVE"<<endl;
	cout<<"\n\nCHOICE: ";
	cin>>option;
	switch(option){
		case 1:
			iden();
			repeat();
			break;
		case 2:
			domin();
			repeat();
			break;
		case 3:
			idem();
			repeat();
			break;
		case 4:
			doubneg();
			repeat();
			break;
		case 5:
			commu();
			repeat();
			break;
		case 6:
			asso();
			repeat();
			break;
		case 7:
			dist();
			repeat();
			break;
		case 8:
			demo();
			repeat();
			break;
		case 9:
			abso();
			repeat();
			break;
		case 10:
			nega();
			repeat();
			break;
		case 11:
			conpros();
			repeat();
			break;
		case 12:
			biconrpros();
			repeat();
			break;
		default:
			repeat();
			break;
	}
}

void proofs::iden(){
	cout<<"     Table of Logical Equivalences     "<<endl;
	cout<<"_______________________________________"<<endl;
	cout<<"|   Equivalence   |       Name        |"<<endl;
	cout<<"==================|===================="<<endl;
	cout<<"|     p^T = p     |   IDENTITY LAWS   |"<<endl;
	cout<<"|     pvT = p     |                   |"<<endl;
	cout<<"======================================="<<endl;
}

void proofs::domin(){
	cout<<"     Table of Logical Equivalences     "<<endl;
	cout<<"_______________________________________"<<endl;
	cout<<"|   Equivalence   |       Name        |"<<endl;
	cout<<"==================|===================="<<endl;
	cout<<"|     pVT = T     |   DOMINANT LAWS   |"<<endl;
	cout<<"|     p^T = F     |                   |"<<endl;
	cout<<"======================================="<<endl;
}

void proofs::idem(){
	cout<<"     Table of Logical Equivalences     "<<endl;
	cout<<"_______________________________________"<<endl;
	cout<<"|   Equivalence   |       Name        |"<<endl;
	cout<<"==================|===================="<<endl;
	cout<<"|     pVp = p     |     IDEMPOTENT    |"<<endl;
	cout<<"|     p^p = p     |        LAWS       |"<<endl;
	cout<<"======================================="<<endl;
}

void proofs::doubneg(){
	cout<<"     Table of Logical Equivalences     "<<endl;
	cout<<"_______________________________________"<<endl;
	cout<<"|   Equivalence   |       Name        |"<<endl;
	cout<<"==================|===================="<<endl;
	cout<<"|    ~(~p) = p    |  DOUBLE NEGATION  |"<<endl;
	cout<<"|                 |        LAWS       |"<<endl;
	cout<<"======================================="<<endl;
}

void proofs::commu(){
	cout<<"     Table of Logical Equivalences     "<<endl;
	cout<<"_______________________________________"<<endl;
	cout<<"|   Equivalence   |       Name        |"<<endl;
	cout<<"==================|===================="<<endl;
	cout<<"|    pVq = qvp    |    COMMUTATIVE    |"<<endl;
	cout<<"|    p^q = q^p    |       LAWS        |"<<endl;
	cout<<"======================================="<<endl;
}

void proofs::asso(){
	cout<<"     Table of Logical Equivalences     "<<endl;
	cout<<"_______________________________________"<<endl;
	cout<<"|   Equivalence   |       Name        |"<<endl;
	cout<<"==================|===================="<<endl;
	cout<<"|(pVq)Vr = pV(qVr)|    ASSOCIATIVE    |"<<endl;
	cout<<"|(p^q)^r = p^(q^r)|       LAWS        |"<<endl;
	cout<<"======================================="<<endl;
}

void proofs::dist(){
	cout<<"       Table of Logical Equivalences       "<<endl;
	cout<<"___________________________________________"<<endl;
	cout<<"|     Equivalence     |       Name        |"<<endl;
	cout<<"======================|===================="<<endl;
	cout<<"|pV(qVr) = (pVq)^(pVr)|   DISTRIBUTIVE    |"<<endl;
	cout<<"|p^(qVr) = (p^q)V(p^r)|       LAWS        |"<<endl;
	cout<<"==========================================="<<endl;
}

void proofs::demo(){
	cout<<"       Table of Logical Equivalences       "<<endl;
	cout<<"___________________________________________"<<endl;
	cout<<"|     Equivalence     |       Name        |"<<endl;
	cout<<"======================|===================="<<endl;
	cout<<"|  ~(p^q) = ~p V ~q   |   DE MORGAN'S'    |"<<endl;
	cout<<"|  ~(pVq) = ~p ^ ~q   |       LAW         |"<<endl;
	cout<<"==========================================="<<endl;
}

void proofs::abso(){
	cout<<"     Table of Logical Equivalences     "<<endl;
	cout<<"_______________________________________"<<endl;
	cout<<"|   Equivalence   |       Name        |"<<endl;
	cout<<"==================|===================="<<endl;
	cout<<"|     pV(p^q)     |     ABSORPTION    |"<<endl;
	cout<<"|     p^(pVq)     |       LAWS        |"<<endl;
	cout<<"======================================="<<endl;
}

void proofs::nega(){
	cout<<"     Table of Logical Equivalences     "<<endl;
	cout<<"_______________________________________"<<endl;
	cout<<"|   Equivalence   |       Name        |"<<endl;
	cout<<"==================|===================="<<endl;
	cout<<"|     pV~q = T    |      NEGATION     |"<<endl;
	cout<<"|     p^~q = F    |        LAWS       |"<<endl;
	cout<<"======================================="<<endl;
}

void proofs::conpros(){
	cout<<"          Table of Logical Equivalences        "<<endl;
	cout<<"_______________________________________________"<<endl;
	cout<<"|        Equivalence       |       Name       |"<<endl;
	cout<<"===========================|==================="<<endl;
	cout<<"|      p->q     =   ~pVq   |                  |"<<endl;
	cout<<"|      p->q     =  ~q->~p  |                  |"<<endl;
	cout<<"|      pVq      =  ~p->q   |    CONDITIONAL   |"<<endl;
	cout<<"|    ~(p->q)    =   p^~q   |    PROSPECTIVE   |"<<endl;
	cout<<"| (p->q)^(p->r) = p->(q^r) |                  |"<<endl;
	cout<<"| (p->r)^(q->r) = (pVq)->r |                  |"<<endl;
	cout<<"| (p->q)V(p->r) = p->(qVr) |                  |"<<endl;
	cout<<"| (p->r)V(q->r) = (pVq)->r |                  |"<<endl;
	cout<<"==============================================="<<endl;
}

void proofs::biconrpros(){
	cout<<"           Table of Logical Equivalences          "<<endl;
	cout<<"__________________________________________________"<<endl;
	cout<<"|         Equivalence         |       Name       |"<<endl;
	cout<<"==============================|==================="<<endl;
	cout<<"|      p<->q  =  (p->q^(q->p) |                  |"<<endl;
	cout<<"|      p<->q  =    ~p<->~q    |   BICONDITIONAL  |"<<endl;
	cout<<"|      P<->q  =  (p^q)V(~p^~q)|    PROSPECTIVE   |"<<endl;
	cout<<"|    ~(p<->q) =    p<->~q     |                  |"<<endl;
	cout<<"=================================================="<<endl;
}

void proofs::repeat(){
	cout<<"\n\nDo you want to select another option?";
	cout<<"\n(1) YES\n(2) NO";
	cout<<"\nChoice: ";
	cin>>again;
	if(again==1){
		cout<<endl<<endl;
		input();
	}
}
