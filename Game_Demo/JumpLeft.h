#ifndef JUMPLEFT_H_INCLUDED
#define JUMPLEFT_H_INCLUDED



void showImage2()
{

	if (index == 36)  //controlling jump after final image
	{

		if (jumpmode == 0){  //first jump

			index = 57; //falling position of character
			mode = 0;//initialize so that it can be used again
			if (drop >= 1){//when character is on block and if character jump the block fall coordinate will assign to gravity fall variable for one time 

				fall1 = fall2; //fall1 is gravity fall and fall2 is block fall
			}

			jumpmode++; //jumpmode is increasing so that character can jump again in the air and only can jump once, that means this controll double jump, character won't able to jump more then two times untill he touch the block again
			characterfallimagecorrection = 2; //character fall position go into  walk position immediatly when touch block beacause this variable

		}
	    else if(jumpmode == 1){  //second jump

			index = 57; //falling position of character
			mode = 0;  //initialize so that it can be used again
			drop = 0;
			walkmode = 0;
			jumpmode++; //jumpmode is increasing so that character can jump again in the air and only can jump once, that means this controll double jump, character won't able to jump more then two times untill he touch the block again
			characterfallimagecorrection = 2;//character fall position go into  walk position immediatly when touch block beacause this variable

		}


	}
}
void change2()  //for controlling jump rendering
{
	if (start == 1){  //function work after game start

		if (mode == 3) //when left jump
		{
			index++;  //character rendering
			

				fall2 = fall2 + 8.1; //jumping
				fall1 = fall1 + 8.1; //jumping
				dx = dx - 3; //jumping

		
		}

	}
}
void jumpleft()//jump left image load
{
	image[18] = iLoadImage("jump left//jump1.png");
	image[19] = iLoadImage("jump left//jump2.png");
	image[20] = iLoadImage("jump left//jump3.png");
	image[21] = iLoadImage("jump left//jump4.png");
	image[22] = iLoadImage("jump left//jump5.png");
	image[23] = iLoadImage("jump left//jump6.png");
	image[24] = iLoadImage("jump left//jump7.png");
	image[25] = iLoadImage("jump left//jump8.png");
	image[26] = iLoadImage("jump left//jump9.png");
	image[27] = iLoadImage("jump left//jump10.png");
	image[28] = iLoadImage("jump left//jump11.png");
	image[29] = iLoadImage("jump left//jump12.png");
	image[30] = iLoadImage("jump left//jump13.png");
	image[31] = iLoadImage("jump left//jump14.png");
	image[32] = iLoadImage("jump left//jump15.png");
	image[33] = iLoadImage("jump left//jump16.png");
	image[34] = iLoadImage("jump left//jump17.png");
	image[35] = iLoadImage("jump left//jump18.png");
	image[36] = iLoadImage("jump left//jump19.png");
	image[57] = iLoadImage("jump left//jump5.png");

}

#endif // JUMPLEFT_H_INCLUDED
