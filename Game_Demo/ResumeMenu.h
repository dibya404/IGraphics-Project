#ifndef RESUMEMENU_H_INCLUDED
#define RESUMEMENU_H_INCLUDED
#include "background rendering.h"
#include"WalkRight.h"
#include"Boss.h"
int ResumePic; //image load

void restart() //restart the game by assigning all variable to its initial state 
{

dy8 = 0, dy9 = 0, dy10 = 0, dy11 = 0, dy12 = 0, dy13 = 738, dy14 = 904, dy15 = 1070, dy16 = 1236, dy17 = 1402, dy18 = 1568, dy19 = 1734, dy20 = 1900;

dy1 = 0, dy2 = 4200, dy3 = 2100, dy4 = 700, dy5 = 3500, dy6 = 1400, dy7 = 2800;

 index = 0, mode = 0, drop = 1;

 X1 = 17, dx = 0, dy = 0;

 Y1 = 99;

 fall1 = 0, fall2 = 0;

 drop1 = -1;

 start = 0;

 jumpmode = -1;

 walkmode = -1;
 SCORE = 0;

 bossY = 1200;  
 bosmove = 0; 
 move = 6;
 bossgocontroll = 0;
 ball_Y1 = (boss_Y - 35);
 ball_w = 0, ball_h = 0;
 ball_X1 = (boss_X + 50);
 gemX = 30, gemY = 200;
 gemdx = 0, gemdy = 0;
 powerbarwidth = 0;
 powerbarhieght = 40;
 powerusedup = false;
 power = false;
 chaoscontrolpicscontrol = -1;
 barappear = false;
 skywalkfix = 0;
 whitebar = 0;

}



#endif // RESUMEMENU_H_INCLUDED
