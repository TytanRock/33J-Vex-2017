#ifndef MAIN_H
#define MAIN_H

enum armPositions
{
	armGround = 0,
	idlePosition = 1,
	l0 = 2,
	l1 = 3,
	l2 = 4,
	l3 = 5,
	l4 = 6,
	l5 = 7,
	l6 = 8,
	l7 = 9,
	l8 = 10,
	l9 = 11
};

enum clawPositions
{
	open = 0,
	closed = 1
};

enum chainPositions
{
	out,
	in
};

enum mobilePositions
{
	mobileGround = 101,
	up = 150,
};

enum armState
{
	package,
	idle,
	grabbing,
	cone0,
	cone1,
	cone2,
	cone3,
	cone4,
	cone5,
	cone6,
	cone7,
	cone8,
	cone9,
	index,
	place
};

float convertAngle(int sensor, float m, float b)
{
		return sensor * m + b;
}

float ramp(float current, float last)
{
	if(current - last > 0)return last + 0.1;
	else return last - 0.02;
}

#endif
