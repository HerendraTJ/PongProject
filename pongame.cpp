#include <stdlib.h>
#include <ncurses.h>
#include <player.h>
#include <ball.h>
#include <conio.h>


int ch;
int panjang=80;
int lebar=24;
int dir=1;
int player1Points,player2Points=0;
bool quit;
char wallTexture,playerTexture;
bool player1Server,player2Serve=false;

Player player1

int main(){
setup();
while(!quit){
    input();
    logic();
    draw();
}
endwin();
return 0;
}

void setup(){
wallTexture = '#';
initscr();
cbreak();
noecho();
curs_set(0);
keypad(stdscr,true);
timeout(50);


quit = false;
player1Points=0;
player2Points=0;
}

void input(){
ch=getch();
switch(ch){





}






}

return 0;
}

