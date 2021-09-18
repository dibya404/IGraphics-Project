#ifndef JUMPRIGHT_H_INCLUDED
#define JUMPRIGHT_H_INCLUDED
int  X4 = 50, Y4 = 30; //image coordinate
void showImage3()
{

	 if (index == 55)//controlling jump after final image
	{
		
		if (jumpmode == 0){ //first jump

			index = 56; //falling position of character
			mode = 0; //initialize so that it can be used again
			if (drop >= 1){ //when character is on block and if character jump the block fall coordinate will assign to gravity fall variable for one time 

				fall1 = fall2; //fall1 is gravity fall and fall2 is block fall
			}
			jumpmode++; //jumpmode is increasing so that character can jump again in the air and only can jump once, that means this controll double jump, character won't able to jump more then two times untill he touch the block again
			characterfallimagecorrection = 1; //character fall position go into  walk position immediatly when touch block beacause this variable

		}
		else if (jumpmode == 1){  //second jump

			index = 56; //falling position of character
			mode = 0;//initialize so that it can be used again
			jumpmode++;  //jumpmode is increasing so that character can jump again in the air and only can jump once, that means this controll double jump, character won't able to jump more then two times untill he touch the block again
			characterfallimagecorrection = 1; //character fall position go into  walk position immediatly when touch block beacause this variable

		}
	}

	

}
void change3()//controlling jump right rendering
{
	if (start == 1){  //function work after game start


		if (mode == 4)  //when left jump
		{

			index++; //character rendering
			

				fall2 = fall2 + 8.1; //jumping
				fall1 = fall1 + 8.1; //jumping
				dx = dx + 3; //jumping

			
			
		}
	}
}
void jumpRight()//load image for jumpright
{
	image[37] = iLoadImage("jump right//jump1.png");
	image[38] = iLoadImage("jump right//jump2.png");
	image[39] = iLoadImage("jump right//jump3.png");
	image[40] = iLoadImage("jump right//jump4.png");
	image[41] = iLoadImage("jump right//jump5.png");
	image[42] = iLoadImage("jump right//jump6.png");
	image[43] = iLoadImage("jump right//jump7.png");
	image[44] = iLoadImage("jump right//jump8.png");
	image[45] = iLoadImage("jump right//jump9.png");
	image[46] = iLoadImage("jump right//jump10.png");
	image[47] = iLoadImage("jump right//jump11.png");
	image[48] = iLoadImage("jump right//jump12.png");
	image[49] = iLoadImage("jump right//jump13.png");
	image[50] = iLoadImage("jump right//jump14.png");
	image[51] = iLoadImage("jump right//jump15.png");
	image[52] = iLoadImage("jump right//jump16.png");
	image[53] = iLoadImage("jump right//jump17.png");
	image[54] = iLoadImage("jump right//jump18.png");
	image[55] = iLoadImage("jump right//jump19.png");
	image[56] = iLoadImage("jump right//jump5.png");
}


#endif // JUMPRIGHT_H_INCLUDED
