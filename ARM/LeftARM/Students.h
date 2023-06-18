#pragma once
#include <iostream>
#include <vector>

using namespace std;

class Student
{
public:
	string name;
	vector<string> labs;

	Student()
	{
		name = "";
	}

	Student(string name, string lab)
	{
		this->name = name;
		this->labs.push_back(lab);
	}

	int GetLabsCount() { return labs.size(); }
	string GetName() { return name; }

	void addLab(string lab) { this->labs.push_back(lab); }
};

class Students
{
public:
	vector<Student> students;

	Students() {}

	~Students() {}

	void addStudent(string name, string lab);
	int GetStudentsCount() { return students.size(); }
};

void Students::addStudent(string name, string lab)
{
	Student stu(name, lab);
	students.push_back(stu);
}