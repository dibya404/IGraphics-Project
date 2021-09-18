#ifndef WALKLEFT_H_INCLUDED
#define WALKLEFT_H_INCLUD



void showImage1()
{
	
	if (index == 17) //controlling walk after final image
	{
		index = 9; //character position come to left walk initial position
		mode = 0; //initialize so that it can work again 
		fall1 = fall2; //when character drop from block block fall coordinate assign to gravity fall 
		
	}
}
void walkleft()
{
	
	//walk left image load
	image[9] = iLoadImage("walk left//walk1.png");
	image[10] = iLoadImage("walk left//walk2.png");
	image[11] = iLoadImage("walk left//walk3.png");
	image[12] = iLoadImage("walk left//walk4.png");
	image[13] = iLoadImage("walk left//walk5.png");
	image[14] = iLoadImage("walk left//walk6.png");
	image[15] = iLoadImage("walk left//walk7.png");
	image[16] = iLoadImage("walk left//walk8.png");
	image[17] = iLoadImage("walk left//walk9.png");

}

void change1()//to controlling walk left rendering
{
	if (start == 1){  //function work after game start

		if (mode == 2) //when left walk active
		{

			index++; //walk image rendering
			dx = dx - 7; //walking


		}
	}
}

#endif // WALKLEFT_H_INCLUDED
