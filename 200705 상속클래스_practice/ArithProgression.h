#include "Progression.h"

#include <string>
#include <iostream>
using namespace std;

class ArithProgression: public Progression //상속
{
private:
	

protected:
	long inc;
	virtual long nextValue();

public:
	//생성자 -> 상속 관계에서 자식, 부모 class 모두 생성자가 있어야 한다
	ArithProgression(long i = 1);

	//소멸자 -> 상속 관계에서 소멸자는 자동 호출 -> 안 써도 ㄱㅊ

};