#ifndef PONG_PLAYER_H
#define PONG_PLAYER_H
#include <ncurse.h>

struct Player{
	
	
	public:
		Player(int x,int y);
		int getX() {return x;}
		int getY() {return y;}
		int getHeight() {return height;}
		void setX(int a){
			x=a;
		}
		void setY(int a){
			y=a;
		}
		
	
	
	
};
