#ifndef PONG_BALL_H
#define PONG_BALL_H
#include <ncurses.h>

struct ball{
public:
    ball(double x,double y, int speed);
    double getX(){return x;}
    double getY() {return y;}




};
