#include "Progression.h"

#include <string>
#include <iostream>
using namespace std;

class ArithProgression: public Progression //���
{
private:
	

protected:
	long inc;
	virtual long nextValue();

public:
	//������ -> ��� ���迡�� �ڽ�, �θ� class ��� �����ڰ� �־�� �Ѵ�
	ArithProgression(long i = 1);

	//�Ҹ��� -> ��� ���迡�� �Ҹ��ڴ� �ڵ� ȣ�� -> �� �ᵵ ����

};