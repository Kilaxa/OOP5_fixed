#pragma once
#include <iostream>
#include <string>
class Animal
{
public:
	Animal()
	{
		std::cout << "Constructor --- Animal" << std::endl;
	}

	virtual void talk()
	{
		std::cout << std::endl;
	}

	virtual ~Animal()
	{
		std::cout << "Destructor --- Animal" << std::endl;
	}
};

class Cat : public Animal
{
public:
	Cat()
	{
		std::cout << "Constructor --- Cat" << std::endl;
	}

	void talk() override
	{
		std::cout << "Meow meow" << std::endl;
	}

	~Cat() override
	{
		std::cout << "Destructor --- Cat" << std::endl;
	}
};

class Dog : public Animal
{
public:
	Dog()
	{
		std::cout << "Constructor --- Dog" << std::endl;
	}

	void talk() override
	{
		std::cout << "Bow-wow" << std::endl;
	}

	~Dog() override
	{
		std::cout << "Destructor --- Dog" << std::endl;
	}
};
