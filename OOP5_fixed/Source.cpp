#include <vector>
#include "Object.h"
using namespace std;
//Для проверки механизма передачи объектов как параметров в функции необходимо написать три функции (отдельные функции, а не методы класса):
void in1(Base a)
{
	cout << "Call in1" << endl;
}

void in2(Base* a)
{
	cout << "Call in2" << endl;
}

void in3(Base& a)
{
	cout << "Call in3" << endl;
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
	Base* po = new Base("out6");
	return *po;
}

int main() {
	Base* b = new Base();
	Desc* d = new Desc();

	cout << "\n\n----Start in----" << endl;
	in1(*b);
	in2(b);
	in3(*b);
	cout << "\n";
	in1(*d);
	in2(d);
	in3(*d);
	cout << "----End   in----\n\n" << endl;

	delete d;
	delete b;

	cout << "\n";
	Base o;
	Base* po;
	cout << "\n\n----Start out---" << endl;
	o = out1();
	o = out2();
	po = out3();
	po = out4();
	o = out5();
	o = out6();
	cout << "----End   out----\n" << endl;

	return 0;
}
