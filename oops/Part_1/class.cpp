 #include<iostream>
 using namespace std;
 class student {
    public:
    string name;
    int rno;
    float gpa;

 };
 int main(){
    student s;
    s.name = "Yogi";
    s.rno = 35;
    s.gpa = 8.8;
    cout<<s.name;
 }