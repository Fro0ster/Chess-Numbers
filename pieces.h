#ifndef PIECES_H
#define PIECES_H

class pieces
{
	
	private:
		friend class movement;
		
	public:
		bool king(int x,int y);
		bool queen(int x, int y);
		bool knight(int x, int y);
		bool rook(int x, int y);
		bool bishop(int x, int y);
		bool pawn(int x, int y);
				
};

#endif
