#include "Header.h"
void Student::Cin() {};
std::ostream& operator<< (std::ostream& out, const Student& student)
{
    out   << student.name << ' ' << student.group << ' ' << student.score;
    return out;
}

std::istream& operator>>(std::istream& in, Student& student)
{
    cout << "¬ведите фамилию ,группу и оценку:";
    in >> student.name;
    
    in >> student.group;
   
    in >> student.score;
    return in;
}

void number(Student*& a, int n)
{
   
        a = new Student[n];
    

}
Student Student::operator=(int newscore) {
    this->score = newscore;
    return *this;
}

