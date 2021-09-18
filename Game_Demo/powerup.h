#ifndef POWERUP_H_INCLUDED
#define POWERUP_H_INCLUDED
int gems;  //variable for load picture of gem
int chaoscontrollpic; //variable for load picture of chaoscontroll
double gemX = 200, gemY = 400; //coordinate of gem picture
int gemdx =0 , gemdy = 0;   //controll gem coordinate
int powerbarwidth = 0;     //width of powerbar picture
int powerbarhieght = 40 ;   //height of powerbar picture
boolean powerusedup = false;  //controll powerup limit 
boolean power = false;   // controll game over in powerup// this is the power
int chaoscontrolpicscontrol=-1; // controll the fact that chaoscontrollpic image stay in the screen for a few time and then goes automatically

void powerupimageload(){ // this function load images for power up// called in main method

	gems = iLoadImage("powerup\\gems.png");
	chaoscontrollpic = iLoadImage("powerup\\Chaos_Control.png");
	

}


void gemsimageshow(){ // this function draw the image of gem // called in idraw
	if (powerusedup == false){ //when power is used up only then gems will appear in the screen

		iShowImage(gemX + gemdx, gemY + gemdy, 40, 40, gems); //gems image showw

	}
	
}

void gemsplacement(){ // this function controll the placement of gems randomly called in idraw
	if (powerusedup == false){


		if (gemY + gemdy < 0 || (gemY + gemdy < 750 && gemY + gemdy > 700)){ //when gems go outside of screen controll its next placement

			gemX = rand() % 700; // used for randomize
			gemY = rand() % 550; // used for randomize
			gemdx = 0; //initialize the gem pic coordinate controll varible so that it can work again 
			gemdy = 0;  //initialize the gem pic coordinate controll varible so that it can work again

		}
	}
}


void gemsvanish(){ //controll the fact that gems vanish when character touch it
	if (powerusedup == false){

		if ((Y1 + dy + 79 > gemY + gemdy  && Y1 + dy  < gemY + gemdy + 40) && (X1 + dx + 48 > gemX + gemdx  && X1 + dx  < gemX + gemdx + 40)){// this is coordinate checking of character and gem touching

			gemX = 200; //coordinate changing when touch
			gemY = 1200; //coordinate changing when touch
			gemdx = 0;  //initialize the gem pic coordinate controll varible so that it can work again
			gemdy = 0;  //initialize the gem pic coordinate controll varible so that it can work again
			powerbarwidth = powerbarwidth + 45; //when touch power bar increase in size

		}
	}
	
}

 void powerupcontroll(){ // draw bar and active power up and its time limit and deactive it // called in idraw

	 iSetColor(255, 255, 0);
	 iRectangle(650, 670, 130, 40); //draw tank for bar

	 iSetColor(128,0,0);
	 iFilledRectangle(650, 670, powerbarwidth, powerbarhieght); //draw bar
	 
	 if (powerbarwidth >= 100 && chaoscontrolpicscontrol > 30){ //when gems is collected 3 times and the special effect pics chaos controll go 

		 powerusedup = true; // power began to lose that means bar begin to small   
		 power = true; //power active
		 
	 }
	 else if (powerbarwidth <= 0){ //when bar reduce to zero 

		 powerusedup = false;  //iniatialize the value so that bar stop shrinking and can increase again when true
		 power = false; //power deactive
		 chaoscontrolpicscontrol = -1; //initialize the value so that it can be used again

	 }
	 else if (powerbarwidth >= 100){ //when gems is collected for 3 times a special effect image will come  

		 start = 10; //for drawing that image

	 }

}
 void barreduce(){  //bar will shrink because of this function // called in isettimer in main method
	 if (start == 1){ // when in game
		 if (powerusedup == true){ //when powerup time limit is reducing

			 powerbarwidth = powerbarwidth - 5; //bar will shrink

		 }
	 }
 }
 void chaospicsgo(){ //for drawing speacial effect image chaos pics for a limited time and then go automatically is contriolled by this function
	 if (start == 10){ //when 3 gems is collected 


		 if (powerbarwidth >= 100){  //when bar is full

			 chaoscontrolpicscontrol++; // this variable will increase which controll the fact that chaoscontrollpic image stay in the screen for a few time and then goes automatically
			 
		 }
	 }
 }

 void chaospicsshow(){ //pause and draw special image chaos controll for limeted time


	 if (powerbarwidth >= 100 && (chaoscontrolpicscontrol >= 0 && chaoscontrolpicscontrol <= 30)){ //controlling the the time limit by chaospiccontrol variable in this logic
		 

		 iShowImage(0, 0, 800, 700, chaoscontrollpic); //draw chaoscontrollpic 
		
	 }
	 else if (chaoscontrolpicscontrol > 30){ //picture will go automaticaly because of this

		 start = 1; // game start , resume here
	 }
 }
 

#endif // POWERUP_H_INCLUDED
