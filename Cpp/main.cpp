#include <iostream>
using namespace std;


class PRI {
public:
	int a;
private:
	int b;
};


class AAAA { int  a; 	public :virtual void foo() {};
};
class AAAA1 { int  e; };


class BBBB :public virtual AAAA { int b;};

class CCCC :public virtual AAAA { int c; };

class DDDD :public BBBB, public CCCC ,public virtual AAAA1
{ int d; };

class Concrete :public virtual AAAA
{
public:
	Concrete();
	~Concrete();
	virtual void foo() {};
	 void foo0() {};
	virtual void foo1() {};


private:
	char c1;
	double d1;
	int val;
	char c2;


};

Concrete::Concrete()
{
}

Concrete::~Concrete()
{
}


int main()
{

	Concrete c1;
	auto func = &Concrete::foo;
	auto fun1 = &AAAA::foo;
	char op;
	int a11;
	scanf_s("%d\n", &a11);
	scanf_s("%c", &op, 1);
	int a = sizeof(int);

	PRI p;
	p.a = 10;
	int* pb = (int *)((char *)&p + 4);
	*pb = 20;


 	

 	std::cout << "hello world" << std::endl;

	return 0;
}