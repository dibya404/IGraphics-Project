#ifndef CHARACTERFALL_H_INCLUDED
#define CHARACTERFALL_H_INCLUDED
#include "block.h"
#include"WalkRight.h"
#include"powerup.h"
void characterdrop1()  //when character don't find any block character will fall fast because of this function call // this is called in isettimer
{
	if (start == 1){  //function work after game start


		if (drop == 0 || drop1 == 1){  //drop controll fall from block and drop1 controll fall after jump


			fall1 -= 1;   //gravity fall

		}
	}
	
}

void characterdrop2(){ //when character is on the block character don't fall rather stay in the block or you can say character is going down with block speed //called in block rendering function in background rendering header file 

	
	if (start == 1){  //function work after game start
		if (drop >= 1){   //fall with block 

			fall2 -= 1; //fall with block speed

		}
		
	}
	

}

void characterdropchoice(){  //controlling two type of falling

      if (drop == 1){  //when character is on the block

		fall2 = fall1; //gravity fall cordinate assign into  fall  with block coordinate //assign one time
		
		
	}
	else if (drop >= 1){ ////when character is on the block

		dy = fall2;   //fall with block
		
		
	}
	else if (drop == 0){ // when character is not on the block


		dy = fall1;   //gravity fall

	}

}
void blockfall()  //imformation of block and spike coordinate for falling controll and game over
{
	//when character is in those below coordinates // character won't fall because of drop increasing value,
	//jumpmode is 0 so that charactar can jump again because this variable controll first jump and second jump,
	//walkmode is 1 so that character can walk on the block because this variable controll block walk and sky walk
	// when characterfallimagecorrection is 1 and character is in falling position then if character touch block character will come to walk position

	if (X1 + dx >= -21.3 && X1 + dx <= 190.64 && Y1 + dy == 99+dy1)
	{
		
		drop ++;
		jumpmode = 0;
		walkmode = 1;
		if (characterfallimagecorrection == 1 && index==56){
			index = 0;
			characterfallimagecorrection = 0;

		}
		else if (characterfallimagecorrection == 2 && index == 57){
			index = 9;
			characterfallimagecorrection = 0;

		}


	}
	
	else if (X1+dx >= 128.6&&X1+dx <=340.27&&Y1+dy == 194+dy1)
	{
		drop ++;
		jumpmode = 0;
		walkmode = 1;
		if (characterfallimagecorrection == 1 && index == 56){
			index = 0;
			characterfallimagecorrection = 0;

		}
		else if (characterfallimagecorrection == 2 && index == 57){
			index = 9;
			characterfallimagecorrection = 0;

		}
	}
	else if (X1+dx >=312.62&&X1+dx <=531.29&&Y1+dy == 283+dy1)
	{
		drop++;
		jumpmode = 0;
		walkmode = 1;
		if (characterfallimagecorrection == 1 && index == 56){
			index = 0;
			characterfallimagecorrection = 0;

		}
		else if (characterfallimagecorrection == 2 && index == 57){
			index = 9;
			characterfallimagecorrection = 0;

		}
	}
	else if (X1+dx >=471.37&&X1+dx <=683.04&&Y1+dy ==380+dy1)
	{
		drop++;
		walkmode = 1;
		jumpmode = 0;
		if (characterfallimagecorrection == 1 && index == 56){
			index = 0;
			characterfallimagecorrection = 0;

		}
		else if (characterfallimagecorrection == 2 && index == 57){
			index = 9;
			characterfallimagecorrection = 0;

		}
	}
	else if (X1+dx >=42.66&&X1+dx <=254.33&&Y1+dy ==370+dy1)
	{
		drop++;
		walkmode = 1;
		jumpmode = 0;
		if (characterfallimagecorrection == 1 && index == 56){
			index = 0;
			characterfallimagecorrection = 0;

		}
		else if (characterfallimagecorrection == 2 && index == 57){
			index = 9;
			characterfallimagecorrection = 0;

		}
	}
	else if (X1+dx >=220.94&&X1+dx <= 432.61&&Y1+dy == 498+dy1)
	{
		drop++;
		walkmode = 1;
		jumpmode = 0;
		if (characterfallimagecorrection == 1 && index == 56){
			index = 0;
			characterfallimagecorrection = 0;

		}
		else if (characterfallimagecorrection == 2 && index == 57){
			index = 9;
			characterfallimagecorrection = 0;

		}
	}
	else if (X1+dx >=11.89 &&X1+dx <=223.56 &&Y1+dy ==673+dy1 )
	{
		drop++;
		walkmode = 1;
		jumpmode = 0;
		if (characterfallimagecorrection == 1 && index == 56){
			index = 0;
			characterfallimagecorrection = 0;

		}
		else if (characterfallimagecorrection == 2 && index == 57){
			index = 9;
			characterfallimagecorrection = 0;

		}
	}
	else if (X1+dx >= 467.1 && X1+dx <=678.77 && Y1+dy ==646+dy1)
	{
		drop++;
		walkmode = 1;
		jumpmode = 0;
		if (characterfallimagecorrection == 1 && index == 56){
			index = 0;
			characterfallimagecorrection = 0;

		}
		else if (characterfallimagecorrection == 2 && index == 57){
			index = 9;
			characterfallimagecorrection = 0;

		}
	}

	else if (X1 + dx >= 577.46&&X1 + dx <= 789.13&&Y1 + dy == 76 + dy2)
	{  //for block group two
		drop++;
		walkmode = 1;
		jumpmode = 0;
		if (characterfallimagecorrection == 1 && index == 56){
			index = 0;
			characterfallimagecorrection = 0;

		}
		else if (characterfallimagecorrection == 2 && index == 57){
			index = 9;
			characterfallimagecorrection = 0;

		}
	}
	else if (X1 + dx >= 258.05&&X1 + dx <= 469.72&&Y1 + dy == 237 + dy2)
	{
		drop++;
		walkmode = 1;
		jumpmode = 0;
		if (characterfallimagecorrection == 1 && index == 56){
			index = 0;
			characterfallimagecorrection = 0;

		}
		else if (characterfallimagecorrection == 2 && index == 57){
			index = 9;
			characterfallimagecorrection = 0;

		}
	}
	else if (X1 + dx >= 190.13&&X1 + dx <= 401.8&&Y1 + dy == 381 + dy2)
	{
		drop++;
		walkmode = 1;
		jumpmode = 0;
		if (characterfallimagecorrection == 1 && index == 56){
			index = 0;
			characterfallimagecorrection = 0;

		}
		else if (characterfallimagecorrection == 2 && index == 57){
			index = 9;
			characterfallimagecorrection = 0;

		}
	}
	else if (X1 + dx >= 470.31&&X1 + dx <= 681.98&&Y1 + dy == 412 + dy2)
	{
		drop++;
		walkmode = 1;
		jumpmode = 0;
		if (characterfallimagecorrection == 1 && index == 56){
			index = 0;
			characterfallimagecorrection = 0;

		}
		else if (characterfallimagecorrection == 2 && index == 57){
			index = 9;
			characterfallimagecorrection = 0;

		}
	}
	else if (X1 + dx >= -24.21&&X1 + dx <= 187.46&&Y1 + dy == 456 + dy2)
	{
		drop++;
		walkmode = 1;
		jumpmode = 0;
		if (characterfallimagecorrection == 1 && index == 56){
			index = 0;
			characterfallimagecorrection = 0;

		}
		else if (characterfallimagecorrection == 2 && index == 57){
			index = 9;
			characterfallimagecorrection = 0;

		}
	}
	else if (X1 + dx >= 115.86&&X1 + dx <= 327.53&&Y1 + dy == 550 + dy2)
	{
		drop++;
		walkmode = 1;
		jumpmode = 0;
		if (characterfallimagecorrection == 1 && index == 56){
			index = 0;
			characterfallimagecorrection = 0;

		}
		else if (characterfallimagecorrection == 2 && index == 57){
			index = 9;
			characterfallimagecorrection = 0;

		}
	}
	else if (X1 + dx >= 435.27 &&X1 + dx <= 646.94&&Y1 + dy == 568 + dy2)
	{
		drop++;
		walkmode = 1;
		jumpmode = 0;
		if (characterfallimagecorrection == 1 && index == 56){
			index = 0;
			characterfallimagecorrection = 0;

		}
		else if (characterfallimagecorrection == 2 && index == 57){
			index = 9;
			characterfallimagecorrection = 0;

		}
	}
	else if (X1 + dx >= -10.83&&X1 + dx <= 222.5&&Y1 + dy == 676 + dy2)
	{
		drop++;
		walkmode = 1;
		jumpmode = 0;
		if (characterfallimagecorrection == 1 && index == 56){
			index = 0;
			characterfallimagecorrection = 0;

		}
		else if (characterfallimagecorrection == 2 && index == 57){
			index = 9;
			characterfallimagecorrection = 0;

		}
	}
	else if (X1 + dx >= 478.77&&X1 + dx <= 690.44&&Y1 + dy == 685 + dy2)
	{
		drop++;
		walkmode = 1;
		jumpmode = 0;
		if (characterfallimagecorrection == 1 && index == 56){
			index = 0;
			characterfallimagecorrection = 0;

		}
		else if (characterfallimagecorrection == 2 && index == 57){
			index = 9;
			characterfallimagecorrection = 0;
		}
	}

	else if (X1 + dx >= 250.15&&X1 + dx <= 461.82&&Y1 + dy == 68 + dy3) //for block group three
	{
		drop++;
		walkmode = 1;
		jumpmode = 0;
		if (characterfallimagecorrection == 1 && index == 56){
			index = 0;
			characterfallimagecorrection = 0;

		}
		else if (characterfallimagecorrection == 2 && index == 57){
			index = 9;
			characterfallimagecorrection = 0;

		}
	}
	else if (X1 + dx >= 494.01&&X1 + dx <= 705.68&&Y1 + dy == 235 + dy3)
	{
		drop++;
		walkmode = 1;
		jumpmode = 0;
		if (characterfallimagecorrection == 1 && index == 56){
			index = 0;
			characterfallimagecorrection = 0;

		}
		else if (characterfallimagecorrection == 2 && index == 57){
			index = 9;
			characterfallimagecorrection = 0;

		}
	}
	else if (X1 + dx >= -3.27&&X1 + dx <= 214.94 &&Y1 + dy == 227 + dy3)
	{
		drop++;
		walkmode = 1;
		jumpmode = 0;
		if (characterfallimagecorrection == 1 && index == 56){
			index = 0;
			characterfallimagecorrection = 0;

		}
		else if (characterfallimagecorrection == 2 && index == 57){
			index = 9;
			characterfallimagecorrection = 0;

		}
	}
	else if (X1 + dx >= 300.64&&X1 + dx <= 405.96 && Y1 + dy == 342 + dy3)
	{
		//spike
		if (power == false){

			if (soundOn == true){
				PlaySound("sounds\\gameOver.wav", NULL, SND_ASYNC);
			}
			start = 3; //game over

		}

	}
	else if (X1 + dx >= 81.32&&X1 + dx <= 292.99&&Y1 + dy == 397 + dy3)
	{
		drop++;
		walkmode = 1;
		jumpmode = 0;
		if (characterfallimagecorrection == 1 && index == 56){
			index = 0;
			characterfallimagecorrection = 0;

		}
		else if (characterfallimagecorrection == 2 && index == 57){
			index = 9;
			characterfallimagecorrection = 0;

		}
	}
	else if (X1 + dx >= 534.52&&X1 + dx <= 746.19&&Y1 + dy == 372 + dy3)
	{
		drop++;
		walkmode = 1;
		jumpmode = 0;
		if (characterfallimagecorrection == 1 && index == 56){
			index = 0;
			characterfallimagecorrection = 0;

		}
		else if (characterfallimagecorrection == 2 && index == 57){
			index = 9;
			characterfallimagecorrection = 0;

		}
	}
	else if (X1 + dx >= 327.4 &&X1 + dx <= 539.07&&Y1 + dy == 483 + dy3)
	{
		drop++;
		walkmode = 1;
		jumpmode = 0;
		if (characterfallimagecorrection == 1 && index == 56){
			index = 0;
			characterfallimagecorrection = 0;

		}
		else if (characterfallimagecorrection == 2 && index == 57){
			index = 9;
			characterfallimagecorrection = 0;

		}
	}
	else if (X1 + dx >= -1.98&&X1 + dx <= 209.69&&Y1 + dy == 546 + dy3)
	{
		drop++;
		walkmode = 1;
		jumpmode = 0;
		if (characterfallimagecorrection == 1 && index == 56){
			index = 0;
			characterfallimagecorrection = 0;

		}
		else if (characterfallimagecorrection == 2 && index == 57){
			index = 9;
			characterfallimagecorrection = 0;

		}
	}
	else if (X1 + dx >= 250.89&&X1 + dx <= 367.67 &&  Y1 + dy == 586 + dy3)
	{
		//spike
		if (power == false){

			if (soundOn == true){
				PlaySound("sounds\\gameOver.wav", NULL, SND_ASYNC);
			}
			start = 3; //game over

		}
	}
	else if (X1 + dx >= 512.75&&X1 + dx <= 724.42&&Y1 + dy == 577 + dy3)
	{
		drop++;
		walkmode = 1;
		jumpmode = 0;
		if (characterfallimagecorrection == 1 && index == 56){
			index = 0;
			characterfallimagecorrection = 0;

		}
		else if (characterfallimagecorrection == 2 && index == 57){
			index = 9;
			characterfallimagecorrection = 0;

		}
	}
	else if (X1 + dx >= 168.36&&X1 + dx <= 380.03&&Y1 + dy == 698 + dy3)
	{
		drop++;
		walkmode = 1;
		jumpmode = 0;
		if (characterfallimagecorrection == 1 && index == 56){
			index = 0;
			characterfallimagecorrection = 0;

		}
		else if (characterfallimagecorrection == 2 && index == 57){
			index = 9;
			characterfallimagecorrection = 0;

		}
	}
	else if (X1 + dx >= 479.75&&X1 + dx <= 691.42&&Y1 + dy == 689 + dy3)
	{
		drop++;
		walkmode = 1;
		jumpmode = 0;
		if (characterfallimagecorrection == 1 && index == 56){
			index = 0;
			characterfallimagecorrection = 0;

		}
		else if (characterfallimagecorrection == 2 && index == 57){
			index = 9;
			characterfallimagecorrection = 0;

		}
	}

	else if (X1 + dx >= 153.36&&X1 + dx <= 365.03&&Y1 + dy == 68 + dy4) //for block group four
	{
		drop++;
		walkmode = 1;
		jumpmode = 0;
		if (characterfallimagecorrection == 1 && index == 56){
			index = 0;
			characterfallimagecorrection = 0;

		}
		else if (characterfallimagecorrection == 2 && index == 57){
			index = 9;
			characterfallimagecorrection = 0;

		}
	}
	else if (X1 + dx >= 3.27&&X1 + dx <= 214.94&&Y1 + dy == 227 + dy4)
	{
		drop++;
		walkmode = 1;
		jumpmode = 0;
		if (characterfallimagecorrection == 1 && index == 56){
			index = 0;
			characterfallimagecorrection = 0;

		}
		else if (characterfallimagecorrection == 2 && index == 57){
			index = 9;
			characterfallimagecorrection = 0;

		}
	}
	else if (X1 + dx >= 280.91&&X1 + dx <= 408.94&& Y1 + dy == 168 + dy4)
	{
		//spike
		if (power == false){

			if (soundOn == true){
				PlaySound("sounds\\gameOver.wav", NULL, SND_ASYNC);
			}
			start = 3; //game over

		}

	}
	else if (X1 + dx >= 533.77&&X1 + dx <= 745.44 && Y1 + dy == 189 + dy4)
	{
		drop++;
		walkmode = 1;
		jumpmode = 0;
		if (characterfallimagecorrection == 1 && index == 56){
			index = 0;
			characterfallimagecorrection = 0;

		}
		else if (characterfallimagecorrection == 2 && index == 57){
			index = 9;
			characterfallimagecorrection = 0;

		}
	}
	else if (X1 + dx >= 275.66&&X1 + dx <= 487.33 && Y1 + dy == 235 + dy4)
	{
		drop++;
		walkmode = 1;
		jumpmode = 0;
		if (characterfallimagecorrection == 1 && index == 56){
			index = 0;
			characterfallimagecorrection = 0;

		}
		else if (characterfallimagecorrection == 2 && index == 57){
			index = 9;
			characterfallimagecorrection = 0;

		}
	}
	else if (X1 + dx >= 220.61&&X1 + dx <= 325.64&&Y1 + dy == 383 + dy4)
	{
		//spike
		if (power == false){

			if (soundOn == true){
				PlaySound("sounds\\gameOver.wav", NULL, SND_ASYNC);
			}
			start = 3; //game oover

		}
	}
	else if (X1 + dx >= 94.81&&X1 + dx <= 306.48&&Y1 + dy == 432 + dy4)
	{
		drop++;
		walkmode = 1;
		jumpmode = 0;
		if (characterfallimagecorrection == 1 && index == 56){
			index = 0;
			characterfallimagecorrection = 0;

		}
		else if (characterfallimagecorrection == 2 && index == 57){
			index = 9;
			characterfallimagecorrection = 0;

		}
	}
	else if (X1 + dx >= 447.48&&X1 + dx <= 659.15&&Y1 + dy == 390 + dy4)
	{
		drop++;
		walkmode = 1;
		jumpmode = 0;
		if (characterfallimagecorrection == 1 && index == 56){
			index = 0;
			characterfallimagecorrection = 0;

		}
		else if (characterfallimagecorrection == 2 && index == 57){
			index = 9;
			characterfallimagecorrection = 0;

		}
	}
	else if (X1 + dx >= -29.77&&X1 + dx <= 181.9&&Y1 + dy == 516 + dy4)
	{
		drop++;
		walkmode = 1;
		jumpmode = 0;
		if (characterfallimagecorrection == 1 && index == 56){
			index = 0;
			characterfallimagecorrection = 0;

		}
		else if (characterfallimagecorrection == 2 && index == 57){
			index = 9;
			characterfallimagecorrection = 0;

		}
	}
	else if (X1 + dx >= 366.44&&X1 + dx <= 578.11&&Y1 + dy == 483 + dy4)
	{
		drop++;
		walkmode = 1;
		jumpmode = 0;
		if (characterfallimagecorrection == 1 && index == 56){
			index = 0;
			characterfallimagecorrection = 0;

		}
		else if (characterfallimagecorrection == 2 && index == 57){
			index = 9;
			characterfallimagecorrection = 0;

		}
	}
	else if (X1 + dx >= 240.64&&X1 + dx <= 343.67&&Y1 + dy == 637 + dy4)
	{
		//spike
		if (power == false){

			if (soundOn == true){
				PlaySound("sounds\\gameOver.wav", NULL, SND_ASYNC);
			}
			start = 3; //game over

		}
	}
	else if (X1 + dx >= 530.51 && X1 + dx <= 632.54 && Y1 + dy == 614 + dy4)
	{
		//spike
		if (power == false){

			if (soundOn == true){
				PlaySound("sounds\\gameOver.wav", NULL, SND_ASYNC);
			}
			start = 3; //game over

		}
	}
	else if (X1 + dx >= 0.0&&X1 + dx <= 173.67&&Y1 + dy == 673 + dy4)
	{
		drop++;
		walkmode = 1;
		jumpmode = 0;
		if (characterfallimagecorrection == 1 && index == 56){
			index = 0;
			characterfallimagecorrection = 0;

		}
		else if (characterfallimagecorrection == 2 && index == 57){
			index = 9;
			characterfallimagecorrection = 0;

		}
	}
	else if (X1 + dx >= 269.65&&X1 + dx <= 481.32&&Y1 + dy == 677 + dy4)
	{
		drop++;
		walkmode = 1;
		jumpmode = 0;
		if (characterfallimagecorrection == 1 && index == 56){
			index = 0;
			characterfallimagecorrection = 0;

		}
		else if (characterfallimagecorrection == 2 && index == 57){
			index = 9;
			characterfallimagecorrection = 0;

		}
	}
	else if (X1 + dx >= 557.05&&X1 + dx <= 768.72&&Y1 + dy == 673 + dy4)
	{
		drop++;
		walkmode = 1;
		jumpmode = 0;
		if (characterfallimagecorrection == 1 && index == 56){
			index = 0;
			characterfallimagecorrection = 0;

		}
		else if (characterfallimagecorrection == 2 && index == 57){
			index = 9;
			characterfallimagecorrection = 0;

		}
	}

	else if (X1 + dx >= 662.38&&X1 + dx <= 874.05&&Y1 + dy == 71 + dy5) //for block group five
	{
		drop++;
		walkmode = 1;
		jumpmode = 0;
		if (characterfallimagecorrection == 1 && index == 56){
			index = 0;
			characterfallimagecorrection = 0;

		}
		else if (characterfallimagecorrection == 2 && index == 57){
			index = 9;
			characterfallimagecorrection = 0;

		}
	}
	else if (X1 + dx >= 533.96&&X1 + dx <= 745.63&&Y1 + dy == 188 + dy5)
	{
		drop++;
		walkmode = 1;
		jumpmode = 0;
		if (characterfallimagecorrection == 1 && index == 56){
			index = 0;
			characterfallimagecorrection = 0;

		}
		else if (characterfallimagecorrection == 2 && index == 57){
			index = 9;
			characterfallimagecorrection = 0;

		}
	}
	else if (X1 + dx >= 612.52&&X1 + dx <= 714.18&&Y1 + dy == 302 + dy5)
	{
		//spike
		if (power == false){

			if (soundOn == true){
				PlaySound("sounds\\gameOver.wav", NULL, SND_ASYNC);
			}
			start = 3; //game over

		}
	}
	else if (X1 + dx >= 47.95&&X1 + dx <= 259.62&&Y1 + dy == 238 + dy5)
	{
		drop++;
		walkmode = 1;
		jumpmode = 0;
		if (characterfallimagecorrection == 1 && index == 56){
			index = 0;
			characterfallimagecorrection = 0;

		}
		else if (characterfallimagecorrection == 2 && index == 57){
			index = 9;
			characterfallimagecorrection = 0;

		}
	}
	else if (X1 + dx >= 290.97&&X1 + dx <= 502.64&&Y1 + dy == 289 + dy5)
	{
		drop++;
		walkmode = 1;
		jumpmode = 0;
		if (characterfallimagecorrection == 1 && index == 56){
			index = 0;
			characterfallimagecorrection = 0;

		}
		else if (characterfallimagecorrection == 2 && index == 57){
			index = 9;
			characterfallimagecorrection = 0;

		}
	}
	else if (X1 + dx >= 4.44&&X1 + dx <= 216.11&&Y1 + dy == 382 + dy5)
	{
		drop++;
		walkmode = 1;
		jumpmode = 0;
		if (characterfallimagecorrection == 1 && index == 56){
			index = 0;
			characterfallimagecorrection = 0;

		}
		else if (characterfallimagecorrection == 2 && index == 57){
			index = 9;
			characterfallimagecorrection = 0;

		}
	}
	else if (X1 + dx >= 280.55&&X1 + dx <= 385.20&&Y1 + dy == 435 + dy5)
	{
		//spike
		if (power == false){

			if (soundOn == true){
				PlaySound("sounds\\gameOver.wav", NULL, SND_ASYNC);
			}
			start = 3; //game over

		}
	}
	else if (X1 + dx >= 449.06&&X1 + dx <= 660.73&&Y1 + dy == 389 + dy5)
	{
		drop++;
		walkmode = 1;
		jumpmode = 0;
		if (characterfallimagecorrection == 1 && index == 56){
			index = 0;
			characterfallimagecorrection = 0;

		}
		else if (characterfallimagecorrection == 2 && index == 57){
			index = 9;
			characterfallimagecorrection = 0;

		}
	}
	else if (X1 + dx >= 3.38&&X1 + dx <= 215.05&&Y1 + dy == 517 + dy5)
	{
		drop++;
		walkmode = 1;
		jumpmode = 0;
		if (characterfallimagecorrection == 1 && index == 56){
			index = 0;
			characterfallimagecorrection = 0;

		}
		else if (characterfallimagecorrection == 2 && index == 57){
			index = 9;
			characterfallimagecorrection = 0;

		}
	}
	else if (X1 + dx >= 252.76&&X1 + dx <= 464.43&&Y1 + dy == 485 + dy5)
	{
		drop++;
		walkmode = 1;
		jumpmode = 0;
		if (characterfallimagecorrection == 1 && index == 56){
			index = 0;
			characterfallimagecorrection = 0;

		}
		else if (characterfallimagecorrection == 2 && index == 57){
			index = 9;
			characterfallimagecorrection = 0;

		}
	}
	else if (X1 + dx >= 565.82&&X1 + dx <= 777.49&&Y1 + dy == 507 + dy5)
	{
		drop++;
		walkmode = 1;
		jumpmode = 0;
		if (characterfallimagecorrection == 1 && index == 56){
			index = 0;
			characterfallimagecorrection = 0;

		}
		else if (characterfallimagecorrection == 2 && index == 57){
			index = 9;
			characterfallimagecorrection = 0;

		}
	}
	else if (X1 + dx >= 20.67&&X1 + dx <= 128.39&&Y1 + dy == 590 + dy5)
	{
		//spike
		if (power == false){

			if (soundOn == true){
				PlaySound("sounds\\gameOver.wav", NULL, SND_ASYNC);
			}
			start = 3;//game over

		}
	}
	else if (X1 + dx >= 244.25&&X1 + dx <= 455.92&&Y1 + dy == 672 + dy5)
	{
		drop++;
		walkmode = 1;
		jumpmode = 0;
		if (characterfallimagecorrection == 1 && index == 56){
			index = 0;
			characterfallimagecorrection = 0;

		}
		else if (characterfallimagecorrection == 2 && index == 57){
			index = 9;
			characterfallimagecorrection = 0;

		}
	}
	else if (X1 + dx >= 184.84&&X1 + dx <= 396.51&&Y1 + dy == 592 + dy5)
	{
		drop++;
		walkmode = 1;
		jumpmode = 0;
		if (characterfallimagecorrection == 1 && index == 56){
			index = 0;
			characterfallimagecorrection = 0;

		}
		else if (characterfallimagecorrection == 2 && index == 57){
			index = 9;
			characterfallimagecorrection = 0;

		}
	}
	else if (X1 + dx >= 484.31&&X1 + dx <= 588.93&&Y1 + dy == 591 + dy5)
	{
		//spike
		if (power == false){

			if (soundOn == true){
				PlaySound("sounds\\gameOver.wav", NULL, SND_ASYNC);
			}
			start = 3;//game over

		}
	}
	else if (X1 + dx >= 557.31&&X1 + dx <= 768.98&&Y1 + dy == 673 + dy5)
	{
		drop++;
		walkmode = 1;
		jumpmode = 0;
		if (characterfallimagecorrection == 1 && index == 56){
			index = 0;
			characterfallimagecorrection = 0;

		}
		else if (characterfallimagecorrection == 2 && index == 57){
			index = 9;
			characterfallimagecorrection = 0;

		}
	}

	else if (X1 + dx >= -21.03 && X1 + dx <= 190.64 && Y1 + dy == 101 + dy6) //for block group six
	{
		drop++;
		walkmode = 1;
		jumpmode = 0;
		if (characterfallimagecorrection == 1 && index == 56){
			index = 0;
			characterfallimagecorrection = 0;

		}
		else if (characterfallimagecorrection == 2 && index == 57){
			index = 9;
			characterfallimagecorrection = 0;

		}
	}

	else if (X1 + dx >= 128.6&&X1 + dx <= 340.27&&Y1 + dy == 194 + dy6)
	{
		drop++;
		walkmode = 1;
		jumpmode = 0;
		if (characterfallimagecorrection == 1 && index == 56){
			index = 0;
			characterfallimagecorrection = 0;

		}
		else if (characterfallimagecorrection == 2 && index == 57){
			index = 9;
			characterfallimagecorrection = 0;

		}
	}
	else if (X1 + dx >= 319.62&&X1 + dx <= 531.29&&Y1 + dy == 283 + dy6)
	{
		drop++;
		walkmode = 1;
		jumpmode = 0;
		if (characterfallimagecorrection == 1 && index == 56){
			index = 0;
			characterfallimagecorrection = 0;

		}
		else if (characterfallimagecorrection == 2 && index == 57){
			index = 9;
			characterfallimagecorrection = 0;

		}
	}
	else if (X1 + dx >= 471.37&&X1 + dx <= 683.04&&Y1 + dy == 380 + dy6)
	{
		drop++;
		walkmode = 1;
		jumpmode = 0;
		if (characterfallimagecorrection == 1 && index == 56){
			index = 0;
			characterfallimagecorrection = 0;

		}
		else if (characterfallimagecorrection == 2 && index == 57){
			index = 9;
			characterfallimagecorrection = 0;

		}
	}
	else if (X1 + dx >= 42.66&&X1 + dx <= 254.33&&Y1 + dy == 370 + dy6)
	{
		drop++;
		walkmode = 1;
		jumpmode = 0;
		if (characterfallimagecorrection == 1 && index == 56){
			index = 0;
			characterfallimagecorrection = 0;

		}
		else if (characterfallimagecorrection == 2 && index == 57){
			index = 9;
			characterfallimagecorrection = 0;

		}
	}
	else if (X1 + dx >= 220.94&&X1 + dx <= 432.61&&Y1 + dy == 498 + dy6)
	{
		drop++;
		walkmode = 1;
		jumpmode = 0;
		if (characterfallimagecorrection == 1 && index == 56){
			index = 0;
			characterfallimagecorrection = 0;

		}
		else if (characterfallimagecorrection == 2 && index == 57){
			index = 9;
			characterfallimagecorrection = 0;

		}
	}
	else if (X1 + dx >= 11.89 &&X1 + dx <= 223.56 &&Y1 + dy == 673 + dy6)
	{
		drop++;
		walkmode = 1;
		jumpmode = 0;
		if (characterfallimagecorrection == 1 && index == 56){
			index = 0;
			characterfallimagecorrection = 0;

		}
		else if (characterfallimagecorrection == 2 && index == 57){
			index = 9;
			characterfallimagecorrection = 0;

		}
	}
	else if (X1 + dx >= 467.1 && X1 + dx <= 678.77 && Y1 + dy == 646 + dy6)
	{
		drop++;
		walkmode = 1;
		jumpmode = 0;
		if (characterfallimagecorrection == 1 && index == 56){
			index = 0;
			characterfallimagecorrection = 0;

		}
		else if (characterfallimagecorrection == 2 && index == 57){
			index = 9;
			characterfallimagecorrection = 0;

		}
	}

	else if (X1 + dx >= 577.46&&X1 + dx <= 789.13&&Y1 + dy == 76 + dy7) //for block group seven
	{
		drop++;
		walkmode = 1;
		jumpmode = 0;
		if (characterfallimagecorrection == 1 && index == 56){
			index = 0;
			characterfallimagecorrection = 0;

		}
		else if (characterfallimagecorrection == 2 && index == 57){
			index = 9;
			characterfallimagecorrection = 0;

		}
	}
	else if (X1 + dx >= 258.05&&X1 + dx <= 469.72&&Y1 + dy == 237 + dy7)
	{
		drop++;
		walkmode = 1;
		jumpmode = 0;
		if (characterfallimagecorrection == 1 && index == 56){
			index = 0;
			characterfallimagecorrection = 0;

		}
		else if (characterfallimagecorrection == 2 && index == 57){
			index = 9;
			characterfallimagecorrection = 0;

		}
	}
	else if (X1 + dx >= 190.13&&X1 + dx <= 401.8&&Y1 + dy == 381 + dy7)
	{
		drop++;
		walkmode = 1;
		jumpmode = 0;
		if (characterfallimagecorrection == 1 && index == 56){
			index = 0;
			characterfallimagecorrection = 0;

		}
		else if (characterfallimagecorrection == 2 && index == 57){
			index = 9;
			characterfallimagecorrection = 0;

		}
	}
	else if (X1 + dx >= 470.31&&X1 + dx <= 681.98&&Y1 + dy == 412 + dy7)
	{
		drop++;
		walkmode = 1;
		jumpmode = 0;
		if (characterfallimagecorrection == 1 && index == 56){
			index = 0;
			characterfallimagecorrection = 0;

		}
		else if (characterfallimagecorrection == 2 && index == 57){
			index = 9;
			characterfallimagecorrection = 0;

		}
	}
	else if (X1 + dx >= -24.21&&X1 + dx <= 187.46&&Y1 + dy == 456 + dy7)
	{
		drop++;
		walkmode = 1;
		jumpmode = 0;
		if (characterfallimagecorrection == 1 && index == 56){
			index = 0;
			characterfallimagecorrection = 0;

		}
		else if (characterfallimagecorrection == 2 && index == 57){
			index = 9;
			characterfallimagecorrection = 0;

		}
	}
	else if (X1 + dx >= 115.86&&X1 + dx <= 327.53&&Y1 + dy == 550 + dy7)
	{
		drop++;
		walkmode = 1;
		jumpmode = 0;
		if (characterfallimagecorrection == 1 && index == 56){
			index = 0;
			characterfallimagecorrection = 0;

		}
		else if (characterfallimagecorrection == 2 && index == 57){
			index = 9;
			characterfallimagecorrection = 0;

		}
	}
	else if (X1 + dx >= 435.27 &&X1 + dx <= 646.94&&Y1 + dy == 568 + dy7)
	{
		drop++;
		walkmode = 1;
		jumpmode = 0;
		if (characterfallimagecorrection == 1 && index == 56){
			index = 0;
			characterfallimagecorrection = 0;

		}
		else if (characterfallimagecorrection == 2 && index == 57){
			index = 9;
			characterfallimagecorrection = 0;

		}
	}
	else if (X1 + dx >= -10.83&&X1 + dx <= 222.5&&Y1 + dy == 676 + dy7)
	{
		drop++;
		walkmode = 1;
		jumpmode = 0;
		if (characterfallimagecorrection == 1 && index == 56){
			index = 0;
			characterfallimagecorrection = 0;

		}
		else if (characterfallimagecorrection == 2 && index == 57){
			index = 9;
			characterfallimagecorrection = 0;

		}
	}
	else if (X1 >= 478.77&&X1 <= 690.44&&Y1 == 685 + dy7)
	{
		drop++;
		walkmode = 1;
		jumpmode = 0;
		if (characterfallimagecorrection == 1 && index == 56){
			index = 0;
			characterfallimagecorrection = 0;

		}
		else if (characterfallimagecorrection == 2 && index == 57){
			index = 9;
			characterfallimagecorrection = 0;

		}
	}

	else{ //when character is not on the block

		if (skywalkfix == 1 && mode == 1){//when character go outside of blocks in right side because of skywalkfix variable charactar walk position immediatly change into fall position
			index = 56; //character  position is changing to fall position
			mode = 0; //initialize
		}
		else if (skywalkfix == 2 && mode == 2){ //when character go outside of blocks in left side because of skywalkfix variable charactar walk position immediatly change into fall position

			index = 57; //character  position is changing to fall position
			mode = 0; //initialize
		}

		if (index == 56 || index == 57){ //when character is in falling position

			drop = 0; //drop become zero that means character will fall faster /gravity fall
			walkmode = 0; //character will able to sky walk
			
		}
	
	}
}
  

#endif // CHARACTERFALL_H_INCLUDED
