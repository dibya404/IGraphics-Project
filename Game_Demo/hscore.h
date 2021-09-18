#ifndef HSCORE_H_INCLUDED
#define HSCORE_H_INCLUDED
#include<string.h>
#include"WalkRight.h"
typedef struct player player;
struct player
{
	char name[20];  //player name
	int score;  //player score
	char highscr[20]; //player score in string

};

player playerdata[10], p[10]; //player data 

int SCORE = 0; //initialze score  
char scr[20] = "0";//score string


void scoreCalculation(){ //score up//is called in isettimer in main function

	if (start == 1){ //function work after game start

		SCORE = SCORE + 1; //score is increasing
		_itoa_s(SCORE, scr, 10);//score int convert to string

	}


}
void ScoresPrint(){  //called in idraw

	// score print in game 
	iSetColor(0, 255, 0);
	iText(0.00, 670.00, "SCORE:", GLUT_BITMAP_TIMES_ROMAN_24);
	iSetColor(255, 0, 0);
	iText(0.00, 640.00, scr, GLUT_BITMAP_TIMES_ROMAN_24);

}

void dataentry(){ //data entry into file after game over // called in imouse_ for gameover screen and game finish screen part_ main menu button

	FILE *f1;  
	f1 = fopen("highscore", "a"); //open file in append mode
	fprintf(f1, "%s\t%d\n", p[1].name, p[1].score); //write new data into file
	fclose(f1);

}

void playerdataread(){  // new data read from file after game over  // called in imouse_ for gameover screen and game finish screen part_ main menu button
	FILE *fl;
	fl = fopen("highscore", "r"); //open file in read mode

	int i;
	for (i = 0; i<6; i++){

		fscanf(fl, "%s\t%d\n", &p[i].name, &p[i].score); //file data read

	}

	fclose(fl);

}

void sortinghighscore(){  //sorting new data using buble sort // called in imouse_ for gameover screen and game finish screen part_ main menu button
	int temp;
	char tempname[20];
	for (int i = 0; i<6; i++){

		for (int j = 0; j<6; j++){   //buble sort algrorithm is used for sorting

			if (p[i].score>p[j].score){

				temp = p[i].score;
				strcpy(tempname, p[i].name);
				p[i].score = p[j].score;
				strcpy(p[i].name, p[j].name);
				p[j].score = temp;
				strcpy(p[j].name, tempname);

			}
		}
	}
}


void playerdatawritefile(){ //writing the sorting data into the file // called in imouse_ for gameover screen and game finish screen part_ main menu button


	FILE *fl;
	fl = fopen("highscore", "w"); //file open in write mode
	int i;
	for (i = 0; i<5; i++){

		fprintf(fl, "%s\t%d\n", p[i].name, p[i].score); //top 5 data is written in file

	}

	fclose(fl);


}

void playerdatareadagain(){  //new sorting data read from file //called in imouse _for main menu screen _highscore button

	FILE *fl;
	fl = fopen("highscore", "r"); //file open in read mode


	int i;
	for (i = 0; i<5; i++){

		fscanf(fl, "%s\t%d\n", &playerdata[i].name, &playerdata[i].score);//new data from file read

	}

	fclose(fl);

	for (int i = 0; i < 5; i++){  //converting player score into string

		_itoa_s(playerdata[i].score, playerdata[i].highscr, 10); //score of new data is coverted into string so that in can be drawn

	}

}


void printhighscore(){  //print the highscores into the highscore screen called in main menu function

	iSetColor(255, 255, 0);
	iText(100.00, 450.00, playerdata[0].name, GLUT_BITMAP_TIMES_ROMAN_24);
	iText(188.00, 450.00, playerdata[0].highscr, GLUT_BITMAP_TIMES_ROMAN_24);
	iText(100.00, 400.00, playerdata[1].name, GLUT_BITMAP_TIMES_ROMAN_24);
	iText(188.00, 400.00, playerdata[1].highscr, GLUT_BITMAP_TIMES_ROMAN_24);
	iText(100.00, 350.00, playerdata[2].name, GLUT_BITMAP_TIMES_ROMAN_24);
	iText(188.00, 350.00, playerdata[2].highscr, GLUT_BITMAP_TIMES_ROMAN_24);
	iText(100.00, 300.00, playerdata[3].name, GLUT_BITMAP_TIMES_ROMAN_24);
	iText(188.00, 300.00, playerdata[3].highscr, GLUT_BITMAP_TIMES_ROMAN_24);
	iText(100.00, 250.00, playerdata[4].name, GLUT_BITMAP_TIMES_ROMAN_24);
	iText(188.00, 250.00, playerdata[4].highscr, GLUT_BITMAP_TIMES_ROMAN_24);

}



#endif // HSCORE_H_INCLUDED
