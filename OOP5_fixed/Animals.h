#pragma once
#include <iostream>
#include <string>
using namespace std;

class Animal
{
public:
	string doSomething()
	{
		return "Something";
	}
	string doVoice()
	{
		return voice();
	}
	string voice()
	{
		return "Silence";
	}
	~Animal()
	{
		cout << "~Animal()" << endl;
	}
};

class Cat : public Animal
{
public:
	string doSomething()
	{
		return "CatSomething";
	}
	string voice()
	{
		return "Meow";
	}
	~Cat()
	{
		cout << "~Cat()" << endl;
	}
};

class AnimalCorrect
{
public:
	virtual string doSomething()
	{
		return "Something";
	}
	string doVoice()
	{
		return voice();
	}
	virtual string voice()
	{
		return "Silence";
	}
	virtual ~AnimalCorrect()
	{
		cout << "~Animal" << endl;
	}
};

class CatCorrect : public AnimalCorrect
{
public:
	string doSomething()
	{
		return "CatSomething";
	}
	string voice() override
	{
		return "Meow";
	}
	~CatCorrect() override
	{
		cout << "~Cat()" << endl;
	}
};