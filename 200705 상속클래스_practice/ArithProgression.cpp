#include "ArithProgression.h"
#include <iostream>
using namespace std;

long ArithProgression::nextValue()
{
	cur = cur + inc;
	return cur;
}

//������
ArithProgression::ArithProgression(long i)
	:Progression(),inc(i) {}

//�Ҹ��� -> x