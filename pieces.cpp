#include "pieces.h"
#include "movement.h"
#include <iostream>
#include <math.h>

movement moi;

//Helper Statements
/*std::cout<<nr<<"<--nr\n";
std::cout<<tr<<"<--tr\n";
std::cout<<nc<<"<--nc\n";
std::cout<<tc<<"<--tc\n";*/
	
bool pieces::king(int x,int y){
	
	int nr,nc,tr,tc;
	moi.convert(x,nr,nc); moi.convert(y,tr,tc);
		
	if(tr == (nr - 1) || tr == nr || tr == (nr + 1)){
		if(tc == nc || tc == (nc - 1) || tc == (nc + 1))
			return true;
	}		
	
	return false;	
}

bool pieces::queen(int x,int y){
		
	if(rook(x,y) || bishop(x,y))
		return true;
	
	return false;
}

bool pieces::rook(int x,int y){
	
	int nr,nc,tr,tc;
	moi.convert(x,nr,nc); moi.convert(y,tr,tc);
	
	if(nr == tr || nc == tc)
		return true;
		
	return false;
}

bool pieces::bishop(int x,int y){
	
	int nr,nc,tr,tc,chr,chc;
	moi.convert(x,nr,nc); moi.convert(y,tr,tc);
	chr = fabs(nr-tr); chc = fabs(tc-tr);
	
	if(chc == chr)
		return true;
	
	return true;
}

bool pieces::knight(int x,int y){
	
	int nr,nc,tr,tc;
	moi.convert(x,nr,nc); moi.convert(y,tr,tc);
	
	if(tr == (nr - 1) || tr == (nr + 1){
		if(tc == (nc - 2) || tc == (nc + 2))
			return true;
	}
	
	/*else if(tr == (nr + 1)){
			if(tc == (nc - 2) || tc == (nc + 2))
				return true;
	}*/
	
	else if(tr == (nr + 2) || tr == (nr - 2)){
			if(tc == (nc + 1) || tc == (nc - 1))
				return true;
	}
	
	/*else if(tr == (nr - 2)){
			if(tc == (nc - 1) || tc == (nc + 1))
				return true;
	}*/
	
	return false;
}

bool pieces::pawn(int x,int y){
	
	int nr,nc,tr,tc;
	moi.convert(x,nr,nc); moi.convert(y,tr,tc);
	
	if(tr == (nr - 1))
		return true;
	
	return false;
}

bool pieces::castle(int x,int y){
	
	int nr,nc,tr,tc;
	moi.convert(x,nr,nc); moi.convert(y,tr,tc);
	
	return true;
}


