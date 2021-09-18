#ifndef GAMEOVER_H_INCLUDED
#define GAMEOVER_H_INCLUDED
#include"Boss.h"
#include"WalkRight.h"
#include"powerup.h"
int image8;
void gameoverpic()//game over image load
{
	
	image7 = iLoadImage("game over image//GameOver.png");
	image8 = iLoadImage("game over image//game finish.png");
}

void gameoverblock()  //game over logic
{
	

	 if (Y1 + dy == 0){ //when character crash with below end screen 

		 if (soundOn == true){
			 PlaySound("sounds\\gameOver.wav", NULL, SND_ASYNC);
		 }
		start = 3; //game over

	}

	 if (power == false){

		 if ((Y1 + dy + 69 > ball_Y1 && Y1 + dy  < ball_Y1 + 37 + ball_h) && (X1 + dx + 43 > ball_X1  && X1 + dx  < ball_X1 + 37 + ball_w)){
			 //when character crash with energy ball 
			 if (soundOn == true){
				 PlaySound("sounds\\gameOver.wav", NULL, SND_ASYNC);
			 }
			 start = 3;//game over

		 }
	 }
}

		
void gameover(){//game over image draw and score draw

	
	
	iShowImage(0, 0, 800, 700, image7); //game over image show
	iSetColor(255, 0, 0); 
	iText(300, 190, "YOUR SCORE  ", GLUT_BITMAP_TIMES_ROMAN_24);
	iText(480, 190, scr, GLUT_BITMAP_TIMES_ROMAN_24);//score show
	p[1].score = SCORE;//score initialize into p[1].score so that it can be write in file later
	
}

void gamefinish(){//game finish page draw and score draw

	iShowImage(0, 0, 800, 700, image8);//game finish image draw 
	iSetColor(255, 0, 0);
	iText(300, 181, "YOUR SCORE  ", GLUT_BITMAP_TIMES_ROMAN_24);
	iText(480, 181, scr, GLUT_BITMAP_TIMES_ROMAN_24); //score draw
	p[1].score = SCORE; //score initialize into p[1].score so that it can be write in file later

}

#endif // GAMEOVER_H_INCLUDED
