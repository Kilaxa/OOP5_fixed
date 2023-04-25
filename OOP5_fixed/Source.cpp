#include <vector>
#include "Object.h"

void in1(Base a)
{
	std::cout << "Call in1" << std::endl;
}

void in2(Base* a)
{
	std::cout << "Call in2" << std::endl;
}

void in3(Base& a)
{
	std::cout << "Call in3" << std::endl;
}

Base out1()
{
	Base o("out1");
	return o;
}
Base out2()
{
	Base* po = new Base("out2");
	return *po;
}
Base* out3()
{
	Base o("out3");
	return &o;
}
Base* out4()
{
	Base* po = new Base("out4");
	return po;
}
Base& out5()
{
	Base o("out5");
	return o;
}
Base& out6()
{
	Base* po = new Base("out2");
	return *po;
}

int main() {
	Base* b = new Base();
	Desc* d = new Desc();

	std::cout << "----Start in----" << std::endl;
	in1(*b);
	in2(b);
	in3(*b);

	in1(*d);
	in2(d);
	in3(*d);
	std::cout << "----End   in----" << std::endl;

	delete d;
	delete b;

	Base o;
	Base* po;

	std::cout << "----Start out---" << std::endl;
	o = out1();
	o = out2();
	po = out3();
	po = out4();
	o = out5();
	o = out6();
	std::cout << "----End   out----" << std::endl;

	return 0;
}
