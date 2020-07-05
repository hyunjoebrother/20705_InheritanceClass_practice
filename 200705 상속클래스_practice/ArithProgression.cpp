#include "ArithProgression.h"
#include <iostream>
using namespace std;

long ArithProgression::nextValue()
{
	cur = cur + inc;
	return cur;
}

//持失切
ArithProgression::ArithProgression(long i)
	:Progression(),inc(i) {}

//社瑚切 -> x