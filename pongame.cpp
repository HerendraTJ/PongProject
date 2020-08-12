#include <stdlib.h>
#include <ncurses.h>
#include "player.h"
#include "ball.h"
#include <conio.h>


int ch;
int height=80;
int width=24;
int dir=1;
int player1Points,player2Points=0;
bool quit;
char wallTexture,playerTexture;
bool player1Serve,player2Serve=false;
int height;


Player player1(heigth/2,2);
Player player2(heigth/2,width-3);

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
case KEY_UP:
    if (player2.getY()!=3){
        player2.setY(player2.getY()-1);
    }
    break;
case KEY_DOWN:
    if(player2.getY()!= height - 4){
        player2.setX(player2.getX()-1);
    }
    break;
case KEY_LEFT:
    if(player2.getX()!=width/2+4){
        player2.setX(player2.getX()-1);
    }
    break;
case KEY_RIGHT:
    if(player2.getX()!=width-3){
        player2.setX(player2.getX()+1);
    }
    break;
case 'w':
    if(player1.getY()!=3){
        player1.setY(player1.getY()-1);
    }
    break;
case 's':
    if(player1.getY()!=height-4){
        player1.setY(player1.getY()+1);
    }
    break;
case 'a':
    if(player1.getX()!=2){
        player1.setX(player1.getX()-1);
    }
    break;
case 'd':
    if(player1.getX()!=width/2-4){
        player1.setX(player1.getX()+1);
    }
    break;
case ' ':
    if(player1Serve){
        player1Serve=false;
        dir=1;

    }
    else if(player2Serve){
        player2Serve=false;
        dir=2;
    }
    break;
case 'q':
    quit=true;
    break;

}
}

return 0;
}

