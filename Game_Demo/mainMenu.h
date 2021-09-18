#ifndef MAINMENU_H_INCLUDED
#define MAINMENU_H_INCLUDED
#include"hscore.h"
int count=0; //a variable for calling image of screens
int image1, image2, image3, image4, image5,image6,image7,bar; //for image loading variable for main menu
char str[100]; // name string in enter name page 
int len;//str aray index
int name; //enter name box active controll
boolean barappear = false; //gray bar appear controll
int r=255, g=255, b=0; //warnning text random color controll
int button[11]; //special button image load variable
int speacialbutton = 0; //special button appear control in ipassivemouse with this variable
int whitebar = 0; //name box active coordinate in imouse will only work in enter name page , this is determined by this variable 

void MainMenu()  //image for main menu show, called in idraw
{
	if (count == 0) //when game start first will appear//main menu screen
	{
		iShowImage(0, 0, 800, 700, image1);    //for calling game cover screen
		iSetColor(r, g, b);
		iText(100, 10, "WARNING:- !!DO NOT DO FULL SCREEN, GAME WILL NOT WORK PROPERLY THEN!!",GLUT_BITMAP_HELVETICA_12);
		//warnning message
	}
	else if(count == 1) //when enter name screen
	{
		iShowImage(0, 0, 800, 700, image2);  //for calling enter name screen
		if (barappear == true){

			iShowImage(26.087, 253.755, 324.901, 106.719, bar);

		}

	}
	else if (count == 2) //when highscore screen
	{
		iShowImage(0, 0, 800, 700, image3);  //for calling high score screen
		printhighscore(); // printing high score in high score screen

	}
	else if (count == 3) //when instruction screen
	{
		iShowImage(0, 0, 800, 700, image4);   //for calling instruction screen

	}
	else if (count == 4) //when about us screen
	{
		iShowImage(0, 0, 800, 700, image5);   //for calling about us screen
	}
	
		
}

void entername(){ //initialize all value / called in main method

	len = 0;
	name = 0;
	str[0] = 0;

}

	void printname(){ //name is print in the name box after activation / called in idraw 
	if (name == 1)
	{
		iSetColor(0, 0, 0);
		iText(26, 310, str, GLUT_BITMAP_TIMES_ROMAN_24);
	}


}

void loadimageformainmenu(){ //load image for main menu

	image1 = iLoadImage("main menu image\\game cover.png");
	image2 = iLoadImage("main menu image\\ENTER NAME SRECEN.png");
	image3 = iLoadImage("main menu image\\high score.png");
	image4 = iLoadImage("main menu image\\instruction cover.png");
	image5 = iLoadImage("main menu image\\ABOUT US.png");
	bar = iLoadImage("main menu image\\name bar.png");

}

void warncolorchange(){
	//warning message color change randomly / called in isettimer
	r = rand() % 255;
	g = rand() % 255;
	b = rand() % 255;

}

void buttonimageload(){
	// image for special button load

	button[0] = iLoadImage("main menu image\\play button.png");
	button[1] = iLoadImage("main menu image\\highscore button.png");
	button[2] = iLoadImage("main menu image\\about us button.png");
	button[3] = iLoadImage("main menu image\\instruction button.png");
	button[4] = iLoadImage("main menu image\\exit 1.png");
	button[5] = iLoadImage("main menu image\\sound bar.png");
	button[6] = iLoadImage("main menu image\\restart button.png");
	button[7] = iLoadImage("main menu image\\resume button.png");
	button[8] = iLoadImage("main menu image\\back button.png");
	button[9] = iLoadImage("main menu image\\HOME BUTTON.png");

}
void specialbuttonshow(){ //called after  main menu in idraw so that it can overlap orginal button when cursor is on the button 

	//specialbutton variable is changed in ipassivemouse
	if (speacialbutton == 1){//play button

		iShowImage(1.935, 311.645, 238.254, 154.727, button[0]);

	}
	else if (speacialbutton == 2){//highscore button

		iShowImage(67.419, 225.717, 202.989, 82.450, button[1]);

	}
	else if (speacialbutton == 3){ //about us button
		iShowImage(150.393, 29.070, 176.599, 67.573, button[2]);

	}
	else if (speacialbutton == 4){ //instruction button

		iShowImage(118.284, 129.493, 206.008, 73.751, button[3]);

	}
	else if (speacialbutton == 5){ //exit button for main menu

		iShowImage(671.075, -0.000, 158.958, 70.746, button[4]);

	}
	else if (speacialbutton == 6){ //back button

		iShowImage(0.000, 0.000, 154.150, 75.889, button[8]);
	}
	else if (speacialbutton == 12){  //sound bar in main menu

		iShowImage(0.00, 0.00, 80.090, 63.372, button[5]);

	}

}

void resumespecialpics(){ //called in idraw

	 if (speacialbutton == 7){//exit button in resume menu

		iShowImage(55.134, 25.446, 191.930, 134.751, button[4]);

	}
	else if (speacialbutton == 8){ //restart button

		iShowImage(102.974, 198.856, 239.966, 149.551, button[6]);
	}
	else if (speacialbutton == 9){//resume button

		iShowImage(37.179, 381.311, 212.554, 171.215, button[7]);

	}
	else if (speacialbutton == 11){//sound bar in resume menu

		iShowImage(664.229, 0.00, 135.771, 73.932, button[5]);

	}
}
void gameoverspecialbutton(){ //called in idraw

	 if (speacialbutton == 10){ //main menu/home button

		iShowImage(281.285, 0.529, 212.269, 72.359, button[9]);

	}
}

#endif // MAINMENU_H_INCLUDED
