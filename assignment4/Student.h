#pragma once
#include"Person.h"
class Student:public Person
{
public:

	Student(double score);
	~Student();
private:
	double score;
};

