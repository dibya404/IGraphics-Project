#ifndef BLOCK_H_INCLUDED
#define BLOCK_H_INCLUDED

typedef struct coordinate cor; 
typedef struct image img; 

int Backgroundimage[9]; //this is used for loading background image
double dy1 = 0, dy2 = 4200, dy3 = 2100, dy4 = 700, dy5 =3500 ,dy6=1400,dy7=2800; //for block rendering and random/// so that background can go down and their initialize place// i used cycle logic/background will be cycled because of these variables controll 

struct coordinate  //blocks cordinate structure
{
	double x, y;
};


struct image    //image properties structure
{
	
	double width, height;
	
};


cor block[78];  //coordinate structure type variable declare
img blockImage[78];  //image properties type variable declare

void blockgroupone(){  //imformation for blocks for drawing
	block[0].x = -89.435;
	block[0].y = 65;
	blockImage[0].width = 388.578;
	blockImage[0].height = 41.408;
	iShowImage(block[0].x, block[0].y + dy1, blockImage[0].width, blockImage[0].height, Backgroundimage[1]);

	block[1].x = 60.390;
	block[1].y = 165;
	blockImage[1].width = 388.578;
	blockImage[1].height = 41.408;
	iShowImage(block[1].x, block[1].y + dy1, blockImage[1].width, blockImage[1].height, Backgroundimage[1]);

	block[2].x = 250.961;
	block[2].y = 253;
	blockImage[2].width = 388.578;
	blockImage[2].height = 41.408;
	iShowImage(block[2].x, block[2].y + dy1, blockImage[2].width, blockImage[2].height, Backgroundimage[1]);

	block[3].x = 401.650;
	block[3].y = 352;
	blockImage[3].width = 388.578;
	blockImage[3].height = 41.408;
	iShowImage(block[3].x, block[3].y + dy1, blockImage[3].width, blockImage[3].height, Backgroundimage[1]);

	block[4].x = -26.191;
	block[4].y = 341;
	blockImage[4].width = 388.578;
	blockImage[4].height = 41.408;
	iShowImage(block[4].x, block[4].y + dy1, blockImage[4].width, blockImage[4].height, Backgroundimage[1]);

	block[5].x = 152.165;
	block[5].y = 469;
	blockImage[5].width = 388.578;
	blockImage[5].height = 41.408;
	iShowImage(block[5].x, block[5].y + dy1, blockImage[5].width, blockImage[5].height, Backgroundimage[1]);

	block[6].x = 397.657;
	block[6].y = 615;
	blockImage[6].width = 388.578;
	blockImage[6].height = 41.408;
	iShowImage(block[6].x, block[6].y + dy1, blockImage[6].width, blockImage[6].height, Backgroundimage[1]);

	block[7].x = -56.884;
	block[7].y = 645;
	blockImage[7].width = 388.578;
	blockImage[7].height = 41.408;
	iShowImage(block[7].x, block[7].y + dy1, blockImage[7].width, blockImage[7].height, Backgroundimage[1]);

}

void blockgrouptwo(){  //imformation for blocks for drawing

	block[8].x = 509.061;
	block[8].y = 46;
	blockImage[8].width = 388.578;
	blockImage[8].height = 41.408;
	iShowImage(block[8].x, block[8].y + dy2, blockImage[8].width, blockImage[8].height, Backgroundimage[1]);

	block[9].x = 189.852;
	block[9].y = 207;
	blockImage[9].width = 388.578;
	blockImage[9].height = 41.408;
	iShowImage(block[9].x, block[9].y + dy2, blockImage[9].width, blockImage[9].height, Backgroundimage[1]);

	block[10].x = 122.453;
	block[10].y = 350;
	blockImage[10].width = 388.578;
	blockImage[10].height = 41.408;
	iShowImage(block[10].x, block[10].y + dy2, blockImage[10].width, blockImage[10].height, Backgroundimage[1]);

	block[11].x = -92.882;
	block[11].y = 426;
	blockImage[11].width = 388.578;
	blockImage[11].height = 41.408;
	iShowImage(block[11].x, block[11].y + dy2, blockImage[11].width, blockImage[11].height, Backgroundimage[1]);

	block[12].x = 401.650;
	block[12].y = 382;
	blockImage[12].width = 388.578;
	blockImage[12].height = 41.408;
	iShowImage(block[12].x, block[12].y + dy2, blockImage[12].width, blockImage[12].height, Backgroundimage[1]);

	block[13].x = 367.066;
	block[13].y = 538;
	blockImage[13].width = 388.578;
	blockImage[13].height = 41.408;
	iShowImage(block[13].x, block[13].y + dy2, blockImage[13].width, blockImage[13].height, Backgroundimage[1]);

	block[14].x = 47.220;
	block[14].y = 520;
	blockImage[14].width = 388.578;
	blockImage[14].height = 41.408;
	iShowImage(block[14].x, block[14].y + dy2, blockImage[14].width, blockImage[14].height, Backgroundimage[1]);

	block[15].x = -56.884;
	block[15].y = 645;
	blockImage[15].width = 388.578;
	blockImage[15].height = 41.408;
	iShowImage(block[15].x, block[15].y + dy2, blockImage[15].width, blockImage[15].height, Backgroundimage[1]);

	block[16].x = 411.422;
	block[16].y = 654;
	blockImage[16].width = 388.578;
	blockImage[16].height = 41.408;
	iShowImage(block[16].x, block[16].y + dy2, blockImage[16].width, blockImage[16].height, Backgroundimage[1]);
}

void  blockgroupthree(){  //imformation for blocks for drawing

	block[17].x = 182.223;
	block[17].y = 37;
	blockImage[17].width = 388.578;
	blockImage[17].height = 41.408;
	iShowImage(block[17].x, block[17].y + dy3, blockImage[17].width, blockImage[17].height, Backgroundimage[1]);

	block[18].x = -64.312;
	block[18].y = 196;
	blockImage[18].width = 388.578;
	blockImage[18].height = 41.408;
	iShowImage(block[18].x, block[18].y + dy3, blockImage[18].width, blockImage[18].height, Backgroundimage[1]);

	block[19].x = 426.831;
	block[19].y = 205;
	blockImage[19].width = 388.578;
	blockImage[19].height = 41.408;
	iShowImage(block[19].x, block[19].y + dy3, blockImage[19].width, blockImage[19].height, Backgroundimage[1]);

	block[20].x = 302.010;  //spike
	block[20].y = 301;
	blockImage[20].width = 125.217;
	blockImage[20].height = 41.144;
	iShowImage(block[20].x, block[20].y + dy3, blockImage[20].width, blockImage[20].height, Backgroundimage[2]);

	block[21].x = 13.153;
	block[21].y = 367;
	blockImage[21].width = 388.578;
	blockImage[21].height = 41.408;
	iShowImage(block[21].x, block[21].y + dy3, blockImage[21].width, blockImage[21].height, Backgroundimage[1]);

	block[22].x = 466.369;
	block[22].y = 341;
	blockImage[22].width = 388.578;
	blockImage[22].height = 41.408;
	iShowImage(block[22].x, block[22].y + dy3, blockImage[22].width, blockImage[22].height, Backgroundimage[1]);

	block[23].x = 258.827;
	block[23].y = 453;
	blockImage[23].width = 388.578;
	blockImage[23].height = 41.408;
	iShowImage(block[23].x, block[23].y + dy3, blockImage[23].width, blockImage[23].height, Backgroundimage[1]);

	block[24].x = -69.620;
	block[24].y = 515;
	blockImage[24].width = 388.578;
	blockImage[24].height = 41.408;
	iShowImage(block[24].x, block[24].y + dy3, blockImage[24].width, blockImage[24].height, Backgroundimage[1]);

	block[25].x = 444.094;
	block[25].y = 546;
	blockImage[25].width = 388.578;
	blockImage[25].height = 41.408;
	iShowImage(block[25].x, block[25].y + dy3, blockImage[25].width, blockImage[25].height, Backgroundimage[1]);

	block[26].x = 100.168;
	block[26].y = 668;
	blockImage[26].width = 388.578;
	blockImage[26].height = 41.408;
	iShowImage(block[26].x, block[26].y + dy3, blockImage[26].width, blockImage[26].height, Backgroundimage[1]);

	block[27].x = 411.423;
	block[27].y = 659;
	blockImage[27].width = 388.578;
	blockImage[27].height = 41.408;
	iShowImage(block[27].x, block[27].y + dy3, blockImage[27].width, blockImage[27].height, Backgroundimage[1]);

	block[28].x = 263.777;  //spike
	block[28].y = 544;
	blockImage[28].width = 125.217;
	blockImage[28].height = 41.144;
	iShowImage(block[28].x, block[28].y + dy3, blockImage[28].width, blockImage[28].height, Backgroundimage[2]);

}

void  blockgroupfour(){  //imformation for blocks for drawing

	block[29].x = 85.023;
	block[29].y = 37;
	blockImage[29].width = 388.578;
	blockImage[29].height = 41.408;
	iShowImage(block[29].x, block[29].y + dy4, blockImage[29].width, blockImage[29].height, Backgroundimage[1]);

	block[30].x = 466.369;
	block[30].y = 158;
	blockImage[30].width = 388.578;
	blockImage[30].height = 41.408;
	iShowImage(block[30].x, block[30].y + dy4, blockImage[30].width, blockImage[30].height, Backgroundimage[1]);

	block[31].x = -64.312;
	block[31].y = 196;
	blockImage[31].width = 388.578;
	blockImage[31].height = 41.408;
	iShowImage(block[31].x, block[31].y + dy4, blockImage[31].width, blockImage[31].height, Backgroundimage[1]);

	block[32].x = 208.030;
	block[32].y = 205;
	blockImage[32].width = 388.578;
	blockImage[32].height = 41.408;
	iShowImage(block[32].x, block[32].y + dy4, blockImage[32].width, blockImage[32].height, Backgroundimage[1]);

	block[33].x = 379.053;
	block[33].y = 360;
	blockImage[33].width = 388.578;
	blockImage[33].height = 41.408;
	iShowImage(block[33].x, block[33].y + dy4, blockImage[33].width, blockImage[33].height, Backgroundimage[1]);

	block[34].x = 27.080;
	block[34].y = 402;
	blockImage[34].width = 388.578;
	blockImage[34].height = 41.408;
	iShowImage(block[34].x, block[34].y + dy4, blockImage[34].width, blockImage[34].height, Backgroundimage[1]);

	block[35].x = 297.927;
	block[35].y = 453;
	blockImage[35].width = 388.578;
	blockImage[35].height = 41.408;
	iShowImage(block[35].x, block[35].y + dy4, blockImage[35].width, blockImage[35].height, Backgroundimage[1]);

	block[36].x = -99.132;
	block[36].y = 485;
	blockImage[36].width = 388.578;
	blockImage[36].height = 41.408;
	iShowImage(block[36].x, block[36].y + dy4, blockImage[36].width, blockImage[36].height, Backgroundimage[1]);

	block[37].x = -133.106;
	block[37].y = 641;
	blockImage[37].width = 388.578;
	blockImage[37].height = 41.408;
	iShowImage(block[37].x, block[37].y + dy4, blockImage[37].width, blockImage[37].height, Backgroundimage[1]);

	block[38].x = 201.723;
	block[38].y = 646;
	blockImage[38].width = 388.578;
	blockImage[38].height = 41.408;
	iShowImage(block[38].x, block[38].y + dy4, blockImage[38].width, blockImage[38].height, Backgroundimage[1]);

	block[39].x = 488.534;
	block[39].y = 642;
	blockImage[39].width = 388.578;
	blockImage[39].height = 41.408;
	iShowImage(block[39].x, block[39].y + dy4, blockImage[39].width, blockImage[39].height, Backgroundimage[1]);

	block[40].x = 305.209;   //spike
	block[40].y = 127;
	blockImage[40].width = 125.217;
	blockImage[40].height = 41.144;
	iShowImage(block[40].x, block[40].y + dy4, blockImage[40].width, blockImage[40].height, Backgroundimage[2]);

	block[41].x = 221.984;   //spike
	block[41].y = 342;
	blockImage[41].width = 125.217;
	blockImage[41].height = 41.144;
	iShowImage(block[41].x, block[41].y + dy4, blockImage[41].width, blockImage[41].height, Backgroundimage[2]);

	block[42].x = 528.671;    //spike
	block[42].y = 573;
	blockImage[42].width = 125.217;
	blockImage[42].height = 41.144;
	iShowImage(block[42].x, block[42].y + dy4, blockImage[42].width, blockImage[42].height, Backgroundimage[2]);

	block[43].x = 240.177;   //spike
	block[43].y = 596;
	blockImage[43].width = 125.217;
	blockImage[43].height = 41.144;
	iShowImage(block[43].x, block[43].y + dy4, blockImage[43].width, blockImage[43].height, Backgroundimage[2]);
}

void  blockgroupfive(){  //imformation for blocks for drawing

	block[44].x = 593.749;
	block[44].y = 37;
	blockImage[44].width = 388.578;
	blockImage[44].height = 41.408;
	iShowImage(block[44].x, block[44].y + dy5, blockImage[44].width, blockImage[44].height, Backgroundimage[1]);

	block[45].x = 466.369;
	block[45].y = 158;
	blockImage[45].width = 388.578;
	blockImage[45].height = 41.408;
	iShowImage(block[45].x, block[45].y + dy5, blockImage[45].width, blockImage[45].height, Backgroundimage[1]);

	block[46].x = 222.482;
	block[46].y = 258;
	blockImage[46].width = 388.578;
	blockImage[46].height = 41.408;
	iShowImage(block[46].x, block[46].y + dy5, blockImage[46].width, blockImage[46].height, Backgroundimage[1]);

	block[47].x = -20.254;
	block[47].y = 205;
	blockImage[47].width = 388.578;
	blockImage[47].height = 41.408;
	iShowImage(block[47].x, block[47].y + dy5, blockImage[47].width, blockImage[47].height, Backgroundimage[1]);

	block[48].x = -64.312;
	block[48].y = 350;
	blockImage[48].width = 388.578;
	blockImage[48].height = 41.408;
	iShowImage(block[48].x, block[48].y + dy5, blockImage[48].width, blockImage[48].height, Backgroundimage[1]);

	block[49].x = 379.053;
	block[49].y = 360;
	blockImage[49].width = 388.578;
	blockImage[49].height = 41.408;
	iShowImage(block[49].x, block[49].y + dy5, blockImage[49].width, blockImage[49].height, Backgroundimage[1]);

	block[50].x = 183.787;
	block[50].y = 453;
	blockImage[50].width = 388.578;
	blockImage[50].height = 41.408;
	iShowImage(block[50].x, block[50].y + dy5, blockImage[50].width, blockImage[50].height, Backgroundimage[1]);

	block[51].x = -65.495;
	block[51].y = 485;
	blockImage[51].width = 388.578;
	blockImage[51].height = 41.408;
	iShowImage(block[51].x, block[51].y + dy5, blockImage[51].width, blockImage[51].height, Backgroundimage[1]);

	block[52].x = 496.038;
	block[52].y = 476;
	blockImage[52].width = 388.578;
	blockImage[52].height = 41.408;
	iShowImage(block[52].x, block[52].y + dy5, blockImage[52].width, blockImage[52].height, Backgroundimage[1]);

	block[53].x = 118.575;
	block[53].y = 561;
	blockImage[53].width = 388.578;
	blockImage[53].height = 41.408;
	iShowImage(block[53].x, block[53].y + dy5, blockImage[53].width, blockImage[53].height, Backgroundimage[1]);

	block[54].x = 175.302;
	block[54].y = 641;
	blockImage[54].width = 388.578;
	blockImage[54].height = 41.408;
	iShowImage(block[54].x, block[54].y + dy5, blockImage[54].width, blockImage[54].height, Backgroundimage[1]);

	block[55].x = 488.534;
	block[55].y = 642;
	blockImage[55].width = 388.578;
	blockImage[55].height = 41.408;
	iShowImage(block[55].x, block[55].y + dy5, blockImage[55].width, blockImage[55].height, Backgroundimage[1]);

	block[56].x = 610.594;   //spike
	block[56].y = 261;
	blockImage[56].width = 125.217;
	blockImage[56].height = 41.144;
	iShowImage(block[56].x, block[56].y + dy5, blockImage[56].width, blockImage[56].height, Backgroundimage[2]);

	block[57].x = 282.455;    //spike
	block[57].y = 394;
	blockImage[57].width = 125.217;
	blockImage[57].height = 41.144;
	iShowImage(block[57].x, block[57].y + dy5, blockImage[57].width, blockImage[57].height, Backgroundimage[2]);
	
	block[58].x = 24.745;  //spike
	block[58].y = 551;
	blockImage[58].width = 125.217;
	blockImage[58].height = 41.144;
	iShowImage(block[58].x, block[58].y + dy5, blockImage[58].width, blockImage[58].height, Backgroundimage[2]);

	block[59].x = 484.826;   //spike
	block[59].y = 551;
	blockImage[59].width = 125.217;
	blockImage[59].height = 41.144;
	iShowImage(block[59].x, block[59].y + dy5, blockImage[59].width, blockImage[59].height, Backgroundimage[2]);

}

void blockgroupsix(){  //imformation for blocks for drawing
	block[60].x = -89.435;
	block[60].y = 65;
	blockImage[60].width = 388.578;
	blockImage[60].height = 41.408;
	iShowImage(block[60].x, block[60].y + dy6, blockImage[60].width, blockImage[60].height, Backgroundimage[1]);

	block[61].x = 60.390;
	block[61].y = 165;
	blockImage[61].width = 388.578;
	blockImage[61].height = 41.408;
	iShowImage(block[61].x, block[61].y + dy6, blockImage[61].width, blockImage[61].height, Backgroundimage[1]);

	block[62].x = 250.961;
	block[62].y = 253;
	blockImage[62].width = 388.578;
	blockImage[62].height = 41.408;
	iShowImage(block[62].x, block[62].y + dy6, blockImage[62].width, blockImage[62].height, Backgroundimage[1]);

	block[63].x = 401.650;
	block[63].y = 352;
	blockImage[63].width = 388.578;
	blockImage[63].height = 41.408;
	iShowImage(block[63].x, block[63].y + dy6, blockImage[63].width, blockImage[63].height, Backgroundimage[1]);

	block[64].x = -26.191;
	block[64].y = 341;
	blockImage[64].width = 388.578;
	blockImage[64].height = 41.408;
	iShowImage(block[64].x, block[64].y + dy6, blockImage[64].width, blockImage[64].height, Backgroundimage[1]);
	
	block[65].x = 152.165;
	block[65].y = 469;
	blockImage[65].width = 388.578;
	blockImage[65].height = 41.408;
	iShowImage(block[65].x, block[65].y + dy6, blockImage[65].width, blockImage[65].height, Backgroundimage[1]);

	block[66].x = 397.657;
	block[66].y = 615;
	blockImage[66].width = 388.578;
	blockImage[66].height = 41.408;
	iShowImage(block[66].x, block[66].y + dy6, blockImage[66].width, blockImage[66].height, Backgroundimage[1]);

	block[67].x = -56.884;
	block[67].y = 645;
	blockImage[67].width = 388.578;
	blockImage[67].height = 41.408;
	iShowImage(block[67].x, block[67].y + dy6, blockImage[67].width, blockImage[67].height, Backgroundimage[1]);

}

void blockgroupseven(){  //imformation for blocks for drawing

	block[68].x = 509.061;
	block[68].y = 462;
	blockImage[68].width = 388.578;
	blockImage[68].height = 41.408;
	iShowImage(block[68].x, block[68].y + dy7, blockImage[68].width, blockImage[68].height, Backgroundimage[1]);

	block[69].x = 189.852;
	block[69].y = 207;
	blockImage[69].width = 388.578;
	blockImage[69].height = 41.408;
	iShowImage(block[69].x, block[69].y + dy7, blockImage[69].width, blockImage[69].height, Backgroundimage[1]);

	block[70].x = 122.453;
	block[70].y = 350;
	blockImage[70].width = 388.578;
	blockImage[70].height = 41.408;
	iShowImage(block[70].x, block[70].y + dy7, blockImage[70].width, blockImage[70].height, Backgroundimage[1]);

	block[71].x = -92.882;
	block[71].y = 426;
	blockImage[71].width = 388.578;
	blockImage[71].height = 41.408;
	iShowImage(block[71].x, block[71].y + dy7, blockImage[71].width, blockImage[71].height, Backgroundimage[1]);

	block[72].x = 401.650;
	block[72].y = 382;
	blockImage[72].width = 388.578;
	blockImage[72].height = 41.408;
	iShowImage(block[72].x, block[72].y + dy7, blockImage[72].width, blockImage[72].height, Backgroundimage[1]);

	block[73].x = 367.066;
	block[73].y = 538;
	blockImage[73].width = 388.578;
	blockImage[73].height = 41.408;
	iShowImage(block[73].x, block[73].y + dy7, blockImage[73].width, blockImage[73].height, Backgroundimage[1]);

	block[74].x = 47.220;
	block[74].y = 520;
	blockImage[74].width = 388.578;
	blockImage[74].height = 41.408;
	iShowImage(block[74].x, block[74].y + dy7, blockImage[74].width, blockImage[74].height, Backgroundimage[1]);

	block[75].x = -56.884;
	block[75].y = 645;
	blockImage[75].width = 388.578;
	blockImage[75].height = 41.408;
	iShowImage(block[75].x, block[75].y + dy7, blockImage[75].width, blockImage[75].height, Backgroundimage[1]);

	block[76].x = 411.422;
	block[76].y = 654;
	blockImage[76].width = 388.578;
	blockImage[76].height = 41.408;
	iShowImage(block[76].x, block[76].y + dy7, blockImage[76].width, blockImage[76].height, Backgroundimage[1]);
}

#endif // BLOCK_H_INCLUDED
