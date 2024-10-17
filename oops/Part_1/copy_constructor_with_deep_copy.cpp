#include <iostream>
using namespace std;
class student
{
public:
    string name;
    int rno;
    float gpa;

    student()
    { // default Constructor
         
    }

    student(string n, int r)
    {
        name = n;
        rno = r;
    }

    student(string n, int r, float g)
    {
        name = n;
        rno = r;
        gpa = g;
    }
};

 

void display(student z)
{
    cout << "Name is " << z.name << " " << "Roll no. is " << z.rno << " " << "CGPA is " << z.gpa << endl;
}

int main()
{
    student s1;
    s1.name = "Ram";
    s1.rno = 12;
    s1.gpa = 6.7;

    student s2("Shyam", 21);
    s2.gpa = 9.1;

    student s3("Cobra", 33, 8.3);

    // display(s1.name, s1.rno,s1.gpa);

    student s4 = s1;
    s4.name ="Yogi";    //copy constructor deep copy
     student s5 = student(s1);
     s5.name ="copy";   //copy constructor deep copy
    display(s1);
    display(s2);
    display(s3);
    display(s4);
       display(s5);
}