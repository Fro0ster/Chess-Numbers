#include "movement.h"
#include "pieces.h"
#include <ctype.h>

pieces pi;

void movement::convert(int x,int &a,int &b){
	a=x/10;
	b=x%10;
}

void movement::clearPos(int x){
	int m,n;
	convert(x,m,n);
	board[m][n]=' ';
}

bool movement::checkGoPos(int x){ 
	int a,b;
	convert(x,a,b);
	if(board[a][b]==' ')
		return true;
	else
		return false;
}

bool movement::moveIt(int in,int out){
	
	int thA,thB,inA,inB;
	convert(out,thA,thB); convert(in,inA,inB);
	char pi=board[inA][inB];
	
	if(/*checkGoPos(out) &&*/checkIt(pi,in,out)){
		clearPos(in);
		board[thA][thB]=pi;
		return true;
	}
	
	return false;
}

bool movement::checkIt(char x,int from,int to){
	bool yn;
	char y = tolower(x);
	
	switch(y){
		case 'k': yn = pi.king(from,to);break;
		case 'q': yn = pi.queen(from,to);break;
		case 'b': yn = pi.bishop(from,to);break;
		case 'n': yn = pi.knight(from,to);break;
		case 'r': yn = pi.rook(from,to);break;
		case 'p': yn = pi.pawn(from,to);break;
	}
	
	return yn;
}

