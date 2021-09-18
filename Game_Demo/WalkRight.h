#ifndef WALKRIGHT_H_INCLUDED
#define WALKRIGHT_H_INCLUDED

#include "stdlib.h"

int index = 0, mode = 0, drop = 1;  ///image index, walk left-right and jump left-right,caracter drop
double X1 = 17, dx = 0, dy=0;   //image coordinate
 double Y1 = 99;   //image coordinate
 int fall1=0, fall2=0;  //gravity fall, fall with block
 int drop1 = -1;   // caracter fall after jummp
 int start =0 ;   //game start controll
 int jumpmode;///double jump mode controll
 int walkmode;  //walk and sky walk controll
char image[58];  //image array
int characterfallimagecorrection=0; //this variable controll the fact that if character touch the block then chaaracter will automitacally change its fall position into walk position
boolean soundOn = true; //sound off/on is controll by this variable
int skywalkfix = 0;//this variable controll the fact that if character go out of block then character will automitacally change his walk position into fall position


void showImage()
{
	iShowImage(X1 + dx, Y1+dy , 48, 79, image[index]);//character image print
	
	if (index == 8)//controlling walk after final image
	{
	
		index = 0; //character position come to right walk initial position
		mode = 0; //initialize so that it can work again 
		fall1 = fall2; //when character drop from block block fall coordinate assign to gravity fall
		
	}
	
}
void change()  //controlling walk rendering
{
	if (start == 1){  //function work after game start

		if (mode == 1)//when right walk active
		{
			index++; //walk image rendering
			dx = dx + 7; //walking


		}
	}
}
void walkRight()
{
   //walk right image load
	
	image[0] = iLoadImage("walk right//walk1.png");
	image[1] = iLoadImage("walk right//walk2.png");
	image[2] = iLoadImage("walk right//walk3.png");
	image[3] = iLoadImage("walk right//walk4.png");
	image[4] = iLoadImage("walk right//walk5.png");
	image[5] = iLoadImage("walk right//walk6.png");
	image[6] = iLoadImage("walk right//walk7.png");
	image[7] = iLoadImage("walk right//walk8.png");
	image[8] = iLoadImage("walk right//walk9.png");

}




#endif // WALKRIGHT_H_INCLUDED
