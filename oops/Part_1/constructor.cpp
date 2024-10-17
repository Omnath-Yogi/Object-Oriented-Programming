#include<iostream>
using namespace std;
 class Student{
    public:
    string name;
    int rno;
    float gpa;


 Student(string n, int r, float g){
  name =n;
  rno = r;
  gpa= g;

 }

 };

 int main(){
    Student s1("Yogi",35,8.8);
    Student s2("Omesh",34,7.5);
   cout<<s1.name<<" "<<s1.rno<<" "<<s1.gpa<<endl;
    cout<<s2.name<<" "<<s2.rno<<" "<<s2.gpa<<endl;
 }