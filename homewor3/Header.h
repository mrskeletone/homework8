#ifndef HEADER_H
#define HEADER_H
#include <iostream>
#include <math.h>
#include <string>
using namespace std;

class Student
{
public:
	void Cin();
	friend std::ostream& operator<< (std::ostream& out, const Student  &student);
	friend std::istream& operator>> (std::istream& in, Student& student);
	Student operator=(int newscore);
private:
	string name, group;
	int  score;
};
void number(Student*& a, int n);
#endif // !COMPLEX_H
