#ifndef BOSS_H_INCLUDED
#define BOSS_H_INCLUDED
#include"hscore.h"

int boss_X = 500; //boss coordinate
int boss_Y = 600;  //boss coordinate
int ball_X1 = (boss_X + 50);  //ball coordinate
int ball_Y1 = (boss_Y - 35);   //ball coordinate
int ball_w = 0, ball_h = 0;  //ball size controll
int  bossY=1200;  //controlling boss come
int bosmove = 0; //controlling boss x coordinate moving control after boss come
int move = 6;  //for moving boss
int bosspic, ballpic;  //boss image and ball image load
int bossgocontroll=0; //controlling many times boss go problem


void bossimageload(){ 

	bosspic = iLoadImage("boss\\boss.png"); //for loading boss image
	ballpic = iLoadImage("boss\\ball.png"); //for loading energy ball image

}


void showBoss(){
	//drawing boss image and ball image

	iShowImage(boss_X, boss_Y + bossY, 150, 90, bosspic);
	
	
}

void showball(){ //for drawing energy ball

	if (bosmove == 1){ //if boss appear
	
		iShowImage(ball_X1, ball_Y1, 40 + ball_w, 40 + ball_h, ballpic);
	
	}

}


void moveBoss(){ //for moving boss

	if (start == 1 && bosmove == 1){ //function work after game start

		boss_X += move;  //for moving boss in x coordinate
		if (boss_X >600 || boss_X < 1){
			move *= (-1); //boss bounce back left side to right side or right side to left side
		}

	}
	
}
void moveBall(){  //for moving ball

	if (start == 1 && bosmove == 1){  //function work after game start

		if (bossgocontroll == 0){   //when boss first appear

			ball_Y1 -= 2; //ball is going down slowly

		}
		else if (bossgocontroll == 1){ //when boss second appear 

			ball_Y1 -= 6; //ball is going down fast


		}
		else if (bossgocontroll == 2){ //when boss third appear

			ball_Y1 -= 5; //ball is going down fast
			ball_w = 50; //ball width increase
			ball_h = 50; //ball height increase

		}
		
		
		if (ball_Y1 < 10){ // when ball will be shoot again

			ball_X1 = (boss_X + 50); //ball go back to initial state and shoot again
			ball_Y1 = (boss_Y - 35);  //ball go back to initial state and shoot again

		}
	}
}

void bosscome(){  //this function is called in isettimer // this controll boss come
	if (start == 1){  // when game start

		if (bossY == 0){ //when boss come into the screen 

			bosmove = 1; //boss will go left-right or right-left because of this variable


		}
		else if (bosmove == 0){ //when boss is not in screen 

			bossY--; //boss is going down and near the screen 
		}

	}

}

void bossgoone(){ //boss go for first time
	if (start == 1 && bosmove == 1 && bossgocontroll == 0){ //here bossmove indicate boss is still in the screen and bossgocontroll controll the boss go for first time

		
		bossY = 1200;  //boss go to out of screen
		bosmove = 0;  //initialize so that it can work again
		bossgocontroll = 1; //so that boss can come second time
		ball_X1 = (boss_X + 50); //initialize
		ball_Y1 = (boss_Y - 35); //initialize

	}
	
}

void bossgotwo(){  //boss go for second time

	if (start == 1 && bosmove == 1 && bossgocontroll == 1){ //here bossmove indicate boss is still in the screen and bossgocontroll controll the boss go for second time

		bossY = 1200;  //boss go to out of screen
		bosmove = 0;   //initialize so that it can work again
		bossgocontroll = 2;//so that boss can come second time
		ball_X1 = (boss_X + 50); //initialize
		ball_Y1 = (boss_Y - 35);  //initialize

	}
}

void bossgothree(){  //boss go for third time

	if (start == 1 && bosmove == 1 && bossgocontroll == 2){  ////here bossmove indicate boss is still in the screen and bossgocontroll controll the boss go for third time

		bossY = 1200; //boss go to out of screen
		bosmove = 0; //initialize so that it can work again
		bossgocontroll = 3;//so that boss can come second time
		ball_X1 = (boss_X + 50); //initialize
		ball_Y1 = (boss_Y - 35);//initialize
		start = 5;
		if (soundOn == true){
			PlaySound("sounds\\gamefinish.wav", NULL, SND_ASYNC || SND_LOOP);
		}
	}
}

void bossgocontrl(){
	// for calling boss go function so that boss disappear

	if (SCORE == 40 && bosmove == 1){
		  
		bossgoone();

	}
	else if (SCORE == 80 && bosmove == 1){

		
		bossgotwo();

	}
	else if (SCORE == 120 && bosmove == 1){

	
		bossgothree();

	}
}

#endif // BOSS_H_INCLUDED
