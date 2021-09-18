#ifndef BACKGROUND_RENDERING_H_INCLUDED
#define BACKGROUND_RENDERING_H_INCLUDED
#include"CharacterFall.h"
#include "block.h"
#include"powerup.h"
///for controlling  background image rendering 
int dy8 = 0, dy9 = 0, dy10 = 0, dy11 = 0, dy12 = 0, dy13 = 738, dy14 = 904, dy15 = 1070, dy16 = 1236, dy17 = 1402, dy18 = 1568, dy19 = 1734, dy20 = 1900;  //for background rendering/ so that background can go down and their initialize place// i used cycle logic/background will be cycled because of these variables controll 

void showBackgroundImage() //for drawing background picture
{
	iShowImage(0, 572 + dy8, 800, 166, Backgroundimage[0]);
	iShowImage(0, 406 + dy9, 800, 166, Backgroundimage[3]);
	iShowImage(0, 240 + dy10, 800, 166, Backgroundimage[4]);
	iShowImage(0, 75 + dy11, 800, 166, Backgroundimage[6]);
	iShowImage(0, -91 + dy12, 800, 166, Backgroundimage[7]);
	iShowImage(0, dy13, 800, 170, Backgroundimage[5]);
	iShowImage(0, dy14, 800, 170, Backgroundimage[4]);
	iShowImage(0, dy15, 800, 170, Backgroundimage[3]);
	iShowImage(0, dy16, 800, 166, Backgroundimage[0]);
	iShowImage(0, dy17, 800, 170, Backgroundimage[5]);
	iShowImage(0, dy18, 800, 170, Backgroundimage[4]);
	iShowImage(0, dy19, 800, 170, Backgroundimage[3]);
	iShowImage(0, dy20, 800, 166, Backgroundimage[0]);

}
void loadImageforbackground()
{//for loading background image
	Backgroundimage[0] = iLoadImage("background image\\bacground1.png");
	Backgroundimage[3] = iLoadImage("background image\\bacground2.png");
	Backgroundimage[4] = iLoadImage("background image\\bacground3.png");
	Backgroundimage[5] = iLoadImage("background image\\bacground6.png");
	Backgroundimage[6] = iLoadImage("background image\\bacground4.png");
	Backgroundimage[7] = iLoadImage("background image\\bacground5.png");
	Backgroundimage[1] = iLoadImage("background image\\block 1.png");
	Backgroundimage[2] = iLoadImage("background image\\spike.png");
}
	void blockRendering(){
		// blocks and background rendering
		if (start == 1){  //function work after game start
		
		     //blocks are going down 
			dy1 = dy1 - 1;  //for block
			dy2 = dy2 - 1;  //for block
			dy3 = dy3 - 1;  //for block
			dy4 = dy4 - 1;  //for block
			dy5 = dy5 - 1;  //for block
			dy6 = dy6 - 1;  //for block
			dy7 = dy7 - 1;  //for block
			dy8 = dy8 - 1;  //for background
			dy9 = dy9 - 1;   //for background

			characterdrop2();  //for controlling staying in block, means droping with block
			//background are going down 
			dy10 = dy10 - 1;  //for background
			dy11 = dy11 - 1;  //for background
			dy12 = dy12 - 1;  //for background
			dy13 = dy13 - 1;  //for background
			dy14 = dy14 - 1;  //for background
			dy15 = dy15 - 1;  //for background
			dy16 = dy16 - 1;  //for background
			dy17 = dy17 - 1;  //for background
			dy18 = dy18 - 1;  //for background
			dy19 = dy19 - 1;  //for background
			dy20 = dy20 - 1;  //for background
			//gem is going down
			gemdy = gemdy - 1; //for gems rendering
			




			//below logics are used for cycled rendering
			if (dy1 <= -700){             //for block

				dy1 = 4200;


			}

			if (dy2 <= -700){            //for block

				dy2 = 4200;


			}

			if (dy3 <= -700){           //for block

				dy3 = 4200;


			}

			if (dy4 <= -700){          //for block

				dy4 = 4200;


			}

			if (dy5 <= -700){        //for block

				dy5 = 4200;


			}

			if (dy6 <= -700){         //for block

				dy6 = 4200;


			}

			if (dy7 <= -700){         //for block

				dy7 = 4200;


			}

			if (dy13 <= -166){         //for background

				dy13 = 1160;

			}
			if (dy14 <= -166){         //for background

				dy14 = 1160;

			}
			if (dy15 <= -166){         //for background

				dy15 = 1160;

			}
			if (dy16 <= -166){         //for background

				dy16 = 1160;

			}
			if (dy17 <= -166){         //for background

				dy17 = 1160;

			}
			if (dy18 <= -166){         //for background

				dy18 = 1160;

			}
			if (dy19 <= -166){         //for background

				dy19 = 1160;

			}
			if (dy20 <= -166){         //for background

				dy20 = 1160;

			}
		  
		
		}
		

	}

	void blockprint(){   
		//all blocks are drawing because of this
		blockgroupone();   
		blockgrouptwo();
		blockgroupthree();
		blockgroupfour();
		blockgroupfive();
		blockgroupsix();
		blockgroupseven();

	}

	

#endif // BACKGROUND_RENDERING_H_INCLUDED
