#include"iGraphics.h"         // declaration of  all header file
#include "mainMenu.h"
#include "WalkRight.h"
#include"WalkLeft.h"
#include"JumpLeft.h"
#include "jumpRight.h"
#include "block.h"
#include "background rendering.h"
#include"CharacterFall.h"
#include"hscore.h"
#include"GameOver.h"
#include"ResumeMenu.h"
#include "Boss.h"
#include "powerup.h"
/*function iDraw() is called again and again by the system.
*/

void iDraw()
{
    iClear();
	// start variable for controlling draw
	if (start == 0){  // game menu and enter name part        
            
	
		MainMenu();          // mainmenu draw
		printname();         // enter name screen draw name
		specialbuttonshow();  //special button show main menu
	}
	
	else if (start == 1){        //game start
		 
		characterdropchoice();        //fall controlling character y cordinate for falling
		showBackgroundImage();   //drawing background    
		blockprint();            //drawing block
		ScoresPrint();           //drawing score
		showImage();             //for drawing image for walk right
		showImage1();             //for drawing image for walk left
		showImage2();              //for drawing image for  jump right
		showImage3();              //for drawing image for jump left
		blockfall();               //block cordinates for character not falling
		showBoss();                    //showing boss
		gameoverblock();                //game over cordinate
		showball();                // energyball draw
		bossgocontrl();  //this function controll when boss  will go 
		gemsimageshow();  //for drawing gems
		gemsplacement(); // this function random gems placement
		gemsvanish(); //this function is the reason why gems vanish after character touch
		powerupcontroll(); // this function controll powerup limit and drawing bars of power

		
	}
	else if (start == 3){       //for game over screen appear

		gameover();                 // drawing game over image and score
		gameoverspecialbutton();  //special home menu button
	}
		
	

	else if (start == 4)        //for resume screen appear
	{

		iShowImage(0, 0, 800, 700, ResumePic);    //resume image
		resumespecialpics();//for special pics show

	}
	else if (start == 5){ //game finish screen will appear


		gamefinish();  //for game finish
		gameoverspecialbutton();  //special home menu button

	}
	else if (start == 10){ //a speacial image appear when character collect 3 gems because of this function

		chaospicsshow();  // speacial image show

	}
	
}

/*
function iMouseMove() is called when the user presses and drags the mouse.
(mx, my) is the position where the mouse pointer is.
*/
void iMouseMove(int mx, int my)
{
	//place your codes here
}
void iPassiveMouseMove(int mx, int my){

	if (count == 0) //this means bellow statement will only work in main menu page
	{
		if (mx >= 26.88 && mx <= 212.02 && my >= 346.04 && my <= 438.57)   //play button
		{
			speacialbutton = 1; //special play button call
			
		}

		else if (mx >= 72.42 && mx <= 257.55 && my >= 234.78 && my <= 307.08) // high score button
		{
			speacialbutton = 2;  //special high score button 
			
		}
		else if (mx >= 122.37 && mx <= 316.11 && my >= 135.18 && my <= 199.99) //instruction button
		{
			speacialbutton = 4; //special instruction button call
			
		}
		else if (mx >= 676.68 && mx <= 795.53 && my >= 9.82 && my <= 77.34)  //exit button
		{
			speacialbutton = 5; //special exit button call

		}
		else if (mx >= 156.28 && mx <= 319.20 && my >= 35.01 && my <= 90.17)  //about us button
		{
			speacialbutton = 3;  //special about us button call
		
		}
		else if (mx >= 0.00 && mx <= 80.090 && my >= 0.00 && my <= 63.372){ //sound off/on in main menu
			speacialbutton = 12;  //special sound button call
			
		}
		else{

			speacialbutton = 0; //initialize
		}
	}

	else if (count == 1 || count == 2 || count == 3 || count == 4)// this means below statement will only work in enter name page,instruction page,high score page and about us page
	{
		if (mx >= 2.37 && mx <= 154.15 && my >= 4.74 && my <= 72.33)  //back button
		{
			speacialbutton = 6;  //special back button call
		}
		else{
			speacialbutton = 0; //initialize
		}
	}
	else if (start == 4 && count == 5)     //this means below statement only work in resume menu page/ all logics for resume menu
	{
		if (mx >= 79.44 && mx <= 219.81&& my >= 30.47 && my <= 154.52)   //exit button
		{
			speacialbutton = 7;  //special exit button call
		}

		else if (mx >= 48.97 && mx <= 236.14 && my >= 406.98 && my <= 541.92)//resume button
		{
			speacialbutton = 9;  //special resume button call
			
		}
		else if (mx >= 130.58 && mx <= 311.22 && my >= 205.67 && my <= 344.96)//restart button
		{
			speacialbutton = 8;  //special restart button

		}
		else if (mx >= 664.229 && mx <= 800 && my >= 0.00 && my <= 73.932){ //sound off/on in resume menu

			speacialbutton = 11;  //special sound button

		}
		else {
			speacialbutton = 0; //initialize 

		}
	}

	 if (start == 3 || start == 5)  // this indicate below statement will only work in game over page and game finish page 
	{

		if (mx >= 281.285 && mx <= 281.285 + 212.269 && my >= 0.529 && my <= 0.529 + 72.359){//main menu button

			speacialbutton = 10;  //speacial main menu button call
			
             			
		}
		else {

			speacialbutton = 0;  //initialize 
		}
	}

}

/*
function iMouse() is called when the user presses/releases the mouse.
(mx, my) is the position where the mouse pointer is.
*/
void iMouse(int button, int state, int mx, int my)
{
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN) // work for left click
	{
		
		
		if (count == 0) //this means bellow statement will only work in main menu page
		{
			if (mx >= 26.88 && mx <= 212.02 && my >= 346.04 && my <= 438.57)   //play button
			{
				
				PlaySound("sounds\\button.wav", NULL, SND_ASYNC); //playsound call
				count = 1; // enter name page come because of this
				speacialbutton = 0;//for speacial button go
				if (soundOn == true){ //sound off/on controil
					PlaySound("sounds\\enter name.wav", NULL, SND_ASYNC | SND_LOOP); //playsound call
				}
				whitebar = 1; //for name logic active
				
			}

			else if (mx >= 72.42 && mx <= 257.55 && my >= 234.78 && my <= 307.08) // high score button
			{

				PlaySound("sounds\\button.wav", NULL, SND_ASYNC); // playsound call
				playerdatareadagain(); //new data read from file for printing it in high score page
				count = 2;// high score page come because of this
				speacialbutton = 0;//for speacial button go
				if (soundOn == true){ //sound off/on controll
					PlaySound("sounds\\resume.wav", NULL, SND_ASYNC | SND_LOOP); //play sound call
				}
			}
			else if (mx >= 122.37 && mx <= 316.11 && my >= 135.18 && my <= 199.99) //instruction button
			{
				
				PlaySound("sounds\\button.wav", NULL, SND_ASYNC); //play sound call 
				count = 3; //instruction page come because of this
				speacialbutton = 0;//for speacial button go
				if (soundOn == true){ //sound off/on controll
					PlaySound("sounds\\resume.wav", NULL, SND_ASYNC | SND_LOOP); //play sound call
				}
			}
			else if (mx >= 676.68 && mx <= 795.53 && my >= 9.82 && my <= 77.34)  //exit button
			{
				PlaySound("sounds\\button.wav", NULL, SND_ASYNC); //playsound call
				exit(0); //game exit because of this

			}
			else if (mx >= 156.28 && mx <= 319.20 && my >= 35.01 && my <= 90.17)  //about us button
			{

				PlaySound("sounds\\button.wav", NULL, SND_ASYNC);//playsound call
				count = 4;// about us page come because of this
				speacialbutton = 0;//for speacial button go
				if (soundOn == true){ //sound off/on controll
					PlaySound("sounds\\resume.wav", NULL, SND_ASYNC | SND_LOOP); //playsound call
				}
			}
			else if (mx >= 0.00 && mx <= 80.090 && my >= 0.00 && my <= 63.372){ //sound off/on in main menu

				if (soundOn == true){  //when sound is on

					soundOn = false; // sound off
					PlaySound(0, 0, 0); //sound off

				}
				else if (soundOn == false){ //when sound is off

					soundOn = true; //sound on 
					PlaySound("sounds\\mainMenu.wav", NULL, SND_ASYNC | SND_LOOP); //sound on
				}
			}

		}

		else if (whitebar == 1){   //this means below statements will only work in enter name page  //controlling enter name white bar

			if (mx >= 26.09 && mx <= 351.17 && my >= 253.75 && my <= 360.75 && name == 0) //white bar in enter menu page/click to active
			{
				name = 1;   //to active enter name box
				barappear = true; //gray bar will appear because of this


			}
		}

		 if (count == 1 || count == 2 || count == 3 || count == 4)// this means below statement will only work in enter name page,instruction page,high score page and about us page
		{
			if (mx >= 2.37 && mx <= 154.15 && my >= 4.74 && my <= 72.33)  //back button
			{
				whitebar = 0; //for name logic deactive
				PlaySound("sounds\\button.wav", NULL, SND_ASYNC); //playsound call
				count = 0; // because of this main menu will apear
				speacialbutton = 0;//for speacial button go
				name = 0; // name variable controll the activation of enter name bar so it return to initial state so that it can work again
				for (int i = 0; i < len; i++)  //making previous string null
					str[i] = 0;
				len = 0; // len is the index of str array so this is returning to initial state so that it can work again
				if (soundOn == true){ //sound off/on controll
					PlaySound("sounds\\mainMenu.wav", NULL, SND_ASYNC | SND_LOOP);//playsound call
				}
				barappear = false;// it became false so that gray bar can disappear and can appear again when click the white bar in enter name page
			}
		}
		
		else if (start == 4 && count == 5)     //this means below statement only work in resume menu page/ all logics for resume menu
			{
				if (mx >= 79.44 && mx <= 219.81&& my >= 30.47 && my <= 154.52)   //exit button
				{
					PlaySound("sounds\\button.wav", NULL, SND_ASYNC); //play sound call
					count = 0; //go to main menu because of this
					speacialbutton = 0;//for speacial button go
					start = 0; //  function for menu work again in idraw
					restart(); //restart function call which initialized all variable so that game can restart
					if (soundOn == true){ //sound off/on controll
						PlaySound("sounds\\mainMenu.wav", NULL, SND_ASYNC | SND_LOOP); //play sound call
					}
				}

				else if (mx >= 48.97 && mx <= 236.14 && my >= 406.98 && my <= 541.92)//resume button
				{

					PlaySound("sounds\\button.wav", NULL, SND_ASYNC); //playsound call
					start = 1;  // game start, game resume here
					speacialbutton = 0;//for speacial button go
					if (soundOn == true){ //sound off/on controll
						PlaySound("sounds\\InsideGame.wav", NULL, SND_ASYNC | SND_LOOP); //play sound call
					}
				}
				else if (mx >= 130.58 && mx <= 311.22 && my >= 205.67 && my <= 344.96)//restart button
				{
					PlaySound("sounds\\button.wav", NULL, SND_ASYNC); // playsound call
					restart();   ////restart function call which initialized all variable so that game can restart
					start = 1;  //game start
					speacialbutton = 0;//for speacial button go
					if (soundOn == true){//sound off/on controll
						PlaySound("sounds\\InsideGame.wav", NULL, SND_ASYNC | SND_LOOP);
					}
				}
				else if (mx >= 664.229 && mx <= 800 && my >= 0.00 && my <= 73.932){ //sound off/on in resume menu

					if (soundOn == true){ //sound off/on controll

						soundOn = false;  // sound off
						PlaySound(0,0,0); //sound off

					}
					else if (soundOn == false){//sound off/on controll

						soundOn = true;  //sound on
						PlaySound("sounds\\resume.wav", NULL, SND_ASYNC | SND_LOOP);//sound on
					}
				}
			}
		    
		if (start == 3 || start == 5)  // this indicate below statement will only work in game over page and game finish page 
		{

			if (mx >= 281.285 && mx <= 281.285 + 212.269 && my >= 0.529 && my <= 0.529 + 72.359){//main menu button

				PlaySound("sounds\\button.wav", NULL, SND_ASYNC); // play sound call
				dataentry();  // new data entry of player in file after game over or game finish
				playerdataread();  // all data of file is read
				sortinghighscore(); // sorting the highscore with name
				playerdatawritefile(); // new sorting data of top 5 is written in file after clearing previous data in file 
				count = 0;    // main menu appear because of this
				start = 0;     //go to main menu after game over
				speacialbutton = 0;//for speacial button go
				restart();   //restart function call which initialized all variable so that game can restart
				if (soundOn == true){ //sound off/on
					PlaySound("sounds\\mainMenu.wav", NULL, SND_ASYNC | SND_LOOP); //playsound call
				}
			}
		}
		}

	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		//place your codes here
	}
}

/*
function iKeyboard() is called whenever the user hits a key in keyboard.
key- holds the ASCII value of the key pressed.
*/
void iKeyboard(unsigned char key)
{
	if (key == 'c') //for  left jump
	{  
			
		
		if (jumpmode == 0 && (index == 56 || index == 57 || index == 0 || index == 9)){//for controlling smooth rendering and double jump

			PlaySound("sounds\\jump.wav", NULL, SND_ASYNC | SND_NOSTOP); //playsound call
			drop1 = 1;   //for acvating characterdrop1 and drop1 controll falling when character jump
			index = 18;   //initial image index
			mode = 3;    //for controliing change2 function , it controlls left jump
			

		}
		else if (jumpmode == 1 && (index == 56 || index == 57 || index == 0 || index == 9)){ //controlling smooth rendering and double jump
          
			PlaySound("sounds\\jump.wav", NULL, SND_ASYNC | SND_NOSTOP); //playsound call
			drop1 = 1;              //for acvating characterdrop1 and drop1 controll falling when character jump
   			index = 18;              //initial image index
			mode = 3;              //for controliing change2 function , it controlls left jump
		
		}

		}
	  	
	
	if (key == 'v') //for right jump
	{
		
		if (jumpmode == 0 && (index == 56 || index == 57 || index == 0 || index == 9)){//controlling smooth rendeering and double jump

			PlaySound("sounds\\jump.wav", NULL, SND_ASYNC | SND_NOSTOP); // playsound call
			index = 37;           //initial image index
			mode = 4;               //for controliing change3 function , it controlls right jump
			drop1 = 1;            //for acvating characterdrop1 and drop1 controll falling when character jump
			

		}
		else if (jumpmode == 1 && (index == 56 || index == 57 || index == 0 || index == 9)){//controliing smooth rendering and double jump

			PlaySound("sounds\\jump.wav", NULL, SND_ASYNC | SND_NOSTOP); // play sound call
			index = 37;           //initial image index
			mode = 4;                //for controliing change3 function , it controlls right jump
			drop1 = 1;                //for acvating characterdrop1 and drop1 controll falling when character jump
			
		}

	}
		
	
	if (name == 1 )  //name==1 means enter name is active now so you can write now  //controlling drawing character by character of name 
	{
		if (key == '\r')       //after enter work
		{
			whitebar = 0; //for name logic deactive
			name = 0; // name variable initialized so that in can work again
			strcpy_s(p[1].name, str);   //coping string to new string, which is player name
			for (int i = 0; i < len; i++)  //making previous string null
				str[i] = 0;  
			len = 0; // len is used for controlling str array index, here it return to zero
			start = 1;     //game start controll
			if (soundOn == true){ // sound off/on controll
				PlaySound("sounds\\InsideGame.wav", NULL, SND_ASYNC | SND_LOOP); //playsound call
			}
			barappear = false;  // barappear is used for drawing gray bar after clicking white bar in enter name screen, here it become false so that it can work again
			count = -1;  //so that nothing is print for main menu
		}

		else if (key == '\b'){//back space button

			len--;  // len value decrease  
			str[len] = 0; // null value assign then because of that character delete by pressing back space

		}

		else 
		{
			str[len] = key;   //print name
			len++;  // len value increase so that next character can input and print 
			
		}

	}

	//place your codes for other keys here
}

/*
function iSpecialKeyboard() is called whenver user hits special keys like-
function keys, home, end, pg up, pg down, arraows etc. you have to use
appropriate constants to detect them. A list is:
GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
*/
void iSpecialKeyboard(unsigned char key)
{

	if (start == 1){
		if (key == GLUT_KEY_END)  // resume menu call
		{
			if (soundOn == true){ // sound off/on controll 
				PlaySound("sounds\\resume.wav", NULL, SND_ASYNC | SND_LOOP); //play sound controll
			}
			start = 4;     //resume menu apear
			count = 5;       //resume menu control
		}
	}
		
	
	//place your codes for other keys here
	if (key == GLUT_KEY_LEFT)
	{  //walk left
		
		if (walkmode == 1 && (index == 9 || index == 56 || index == 0 || index == 57)){//controling smooth rendering and sky walk
	 
			skywalkfix = 2;
			index = 9;    //initial poicture
			mode = 2;     //controlling left walk by calling change1 function

		}
		else if (walkmode == 0){//controlling sky walk when falling

			index = 57;
			mode = 0;   //deactivate walking
			dx = dx - 2;  //doing skywalk
			characterfallimagecorrection = 2; //controlling correction of image after touching block for left side

		}
		
	}
	if (key == GLUT_KEY_RIGHT)
	{  //walk right
	
		if (walkmode == 1 && (index == 0 || index == 56 || index == 9 || index == 57)){//controlling smooth rendering and sky walk

			skywalkfix = 1; //this variable is used so that chaaracter fall image apear automitacaly after fall
			index = 0;//return initial character image
			mode = 1;  //walkig by calling change function

		}
		else if (walkmode == 0){//controlling smooth rendering and sky walk

			index = 56; //fall character image apear
			mode = 0;   //deactive walking
			dx = dx + 2;  //sky walk
			characterfallimagecorrection = 1; //controlling correction of image after touching block for right side

		}	
	}

	


}
int main()
{
	//game screen apear because of this
	iInitialize(800.000, 700.000, "shadow the hedgehog");

	
	entername(); //initialize the variable for enter name
	

		iSetTimer(100, moveBoss); //for moving boss / call moveboss function again and again after 100 mili second
		iSetTimer(10, moveBall); //for moving ball / call moveball function again and again after 10 mili second
	
		iSetTimer(60, change);  //walk right / call change function again and again after 60 mili second
		iSetTimer(60, change1);//walk left / call change1 function again and again after 60 mili second
		iSetTimer(60, change2);//jump left /call change2 function again and again after 60 mili second
		iSetTimer(60, change3);//jump right / call change3 function again and again after 60 mili second
		iSetTimer(40, blockRendering);  //blocks going down  / call blockRendering function again and again after 40 mili second
		iSetTimer(6, characterdrop1); //for controling gravity drop / call characterdrop1 function again and again after 7 mili second
		iSetTimer(5, bosscome);  // for controlling boss come / call bosscome function again and again after 5 mili second
		iSetTimer(1000, scoreCalculation);  // for calculating score / call scoreCalculation function again and again after 1000 mili second
		iSetTimer(740, barreduce); // for bar reducing which controll powerup time limit / call barreduce function again and again after 740 mili second
		iSetTimer(20, chaospicsgo); // controll chaos controll pics / call chaospicsgo function again and again after 20 mili second
		iSetTimer(30, warncolorchange); // controll warning color change / call warncolorchange function again and again after 30 mili second

	ResumePic = iLoadImage("background image//ResumePic.png");//resume image load

	bossimageload(); //boss image load
	loadimageformainmenu(); //main menu image load
	loadImageforbackground(); //background image load
	walkRight(); //walk in right side image load
	walkleft();  //walk in left side image load
	jumpleft();  //jump in left side image load
	jumpRight();  //jump in right side image load
	gameoverpic();  //game over and game finish image load
	powerupimageload();  //power up releated  image load
	buttonimageload(); //special button image load

	if (start == 0){  // sound play call
		//game sound start here after game open
		PlaySound("sounds\\mainMenu.wav", NULL, SND_ASYNC | SND_LOOP);
	}

	iStart();
    return 0;
}

