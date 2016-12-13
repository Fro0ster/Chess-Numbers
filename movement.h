#ifndef MOVEMENT_H
#define MOVEMENT_H

extern char board[8][8];

class movement
{	
	private:
		friend class pieces;
		bool checkIt(char,int,int);
		
	public:
		bool moveIt(int in,int out);

	protected:
		void convert(int,int &,int &);
		bool checkGoPos(int);
		void clearPos(int);		
};

#endif
