#pragma once
#include <iostream>
#include <string>

size_t count_Base = 0, count_Desc = 0;;

class Base
{
private:
	size_t idB;
public:
	Base() : idB(count_Base++)
	{
		std::cout << "Constructor withOUT parameters - Base " << idB << std::endl;
	}

	Base(const std::string& s) : idB(count_Base++)
	{
		std::cout << "Constructor with parameter ----- Base " << idB << " " << s << std::endl;
	}
	Base(const Base* a) : idB(count_Base++)
	{
		std::cout << "Constructor with parameter ----- Base " << idB << std::endl;
	}
	Base(const Base& a) : idB(count_Base++)
	{
		std::cout << "Copy constructor --------------- Base " << idB << std::endl;
	}

	~Base()
	{
		std::cout << "Destructor --------------------- Base " << idB << std::endl;
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
		std::cout << "Constructor withOUT parameters - Desc " << idD << std::endl;
	}

	Desc(const std::string& s) : idD(count_Desc++)
	{
		std::cout << "Constructor with parameter ----- Desc " << idD << " " << s << std::endl;
	}
	Desc(const Desc* a) : idD(count_Desc++)
	{
		std::cout << "Constructor with parameter ----- Desc " << idD << std::endl;
	}
	Desc(const Desc& a) : idD(count_Desc++)
	{
		std::cout << "Copy constructor --------------- Desc " << idD << std::endl;
	}

	~Desc()
	{
		std::cout << "Destructor --------------------- Desc " << idD << std::endl;
		--count_Desc;
	}
};
