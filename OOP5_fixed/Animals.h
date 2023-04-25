#pragma once
#include <iostream>
#include <string>
class Animal
{
public:
	virtual bool isA(const std::string& Name)
	{
		return Name == "Animal";
	}
	virtual std::string classname()
	{
		return "Animal";
	}
	virtual ~Animal() {}
};

class Cat : public Animal
{
public:
	bool isA(const std::string& Name) override
	{
		return Name == "Cat" || Animal::isA(Name);
	}

	std::string classname() override
	{
		return "Cat";
	}

	std::string catchMouse() {
		return "got it";
	}
	~Cat() override
	{

	}
};

class MaineCoon : public Cat
{
public:
	bool isA(const std::string& Name) override
	{
		return Name == "MainCoon" || Cat::isA(Name);
	}

	std::string classname() override
	{
		return "MainCoon";
	}
	~MaineCoon() override
	{

	}
};


class Dog : public Animal
{
public:
	bool isA(const std::string& Name) override
	{
		return Name == "Dog" || Animal::isA(Name);
	}

	std::string classname() override
	{
		return "Dog";
	}

	~Dog() override
	{

	}
};
