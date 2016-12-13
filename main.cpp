#include "head.h"
using namespace std;

//Global Variables
//HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
int from,to;
movement mo;

char board[8][8]={
		        'R','N','B','K','Q','B','N','R',
				'P','P','P','P','P','P','P','P', 
				' ',' ',' ',' ',' ',' ',' ',' ', 
				' ',' ',' ',' ',' ',' ',' ',' ', 
				' ',' ',' ',' ',' ',' ',' ',' ', 
				' ',' ',' ',' ',' ',' ',' ',' ', 
				'p','p','p','p','p','p','p','p',  
				'r','n','b','k','q','b','n','r',
};

void putBoard(){
	
	cout<<" ";
	for(int a=0;a<8;a++){
		//top Nos
		cout<<"   "<<a<<" ";
	}
	cout<<endl<<"  ----------------------------------------"<<endl;
	
	for(int i=0;i<8;i++){
		cout<<i<<" ";
		for(int j=0;j<8;j++){
			cout<<"| "<<board[i][j]<<" |";
		}
		cout<<" "<<i;
		cout<<endl<<"  ----------------------------------------"<<endl;	
	}
	
	cout<<" ";
	for(int b=0;b<8;b++){
		//bottom Nos
		cout<<"   "<<b<<" ";
	}
}

void handler(){
	
	if(mo.moveIt(from,to)){
		cout<<"Moved the Piece";
		return;
	}
	else
		cout<<"Wrong Move!";
}

int main() {
	while(1){
		system("cls");
		putBoard();
		cout<<endl<<endl;
		cout<<"Move Piece At:";
		cin>>from;cout<<endl;
		cout<<"Move Piece To:";
		cin>>to;cout<<endl;
		handler();
		system("pause");
		cout<<endl;
	}
	
	cout<<endl<<endl<<endl;
	return 0;
}
