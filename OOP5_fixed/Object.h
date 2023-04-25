#pragma once
#include <iostream>
#include <string>
using namespace std;

size_t count_Base = 0, count_Desc = 0;;

class Base
{
private:
	size_t idB;
public:
	Base() : idB(count_Base++)
	{
		cout << "Constructor withOUT parameters - Base " << idB << endl;
	}

	Base(const string& s) : idB(count_Base++)
	{
		cout << "Constructor with parameter ----- Base " << idB << " " << s << endl;
	}
	Base(const Base* a) : idB(count_Base++)
	{
		cout << "Constructor with parameter ----- Base " << idB << endl;
	}
	Base(const Base& a) : idB(count_Base++)
	{
		cout << "Copy constructor --------------- Base " << idB << endl;
	}

	~Base()
	{
		cout << "Destructor --------------------- Base " << idB << endl;
		--count_Base;
	}
};

class Desc : public Base
{
private:
	size_t idD;
public:
	Desc() : idD(count_Desc++)
	{
		cout << "Constructor withOUT parameters - Desc " << idD << endl;
	}

	Desc(const string& s) : idD(count_Desc++)
	{
		cout << "Constructor with parameter ----- Desc " << idD << " " << s << endl;
	}
	Desc(const Desc* a) : idD(count_Desc++)
	{
		cout << "Constructor with parameter ----- Desc " << idD << endl;
	}
	Desc(const Desc& a) : idD(count_Desc++)
	{
		cout << "Copy constructor --------------- Desc " << idD << endl;
	}

	~Desc()
	{
		cout << "Destructor --------------------- Desc " << idD << endl;
		--count_Desc;
	}
};
