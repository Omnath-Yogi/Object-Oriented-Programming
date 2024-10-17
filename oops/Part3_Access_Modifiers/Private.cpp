#include<iostream>
using namespace std;
class student{
    public:
    int rno;
    string name;

    student(){

    }


    student(string name, int rno,float marks){
     this->rno=rno;
     this->name=name;
     this->marks=marks;
    }
        //  void dispay(){
        //   cout<<"Roll no."<<" "<<rno<<endl;
        //    cout<<"Name"<<" "<<name<<endl;
        //     cout<<"Marks"<<" "<<marks<<endl;
        //  }



         float getMarks(){
          return marks;            //getter function
         }
         void setMarks(float marks){
          this ->marks =marks;
         }
    private:
    float marks;
};

int main(){
    student s1("Omnath Yogi",21,90.2);
  
  student s2;
  s2.name="manish jat";
  s2.rno = 23; 
 // s2.marks=11.2;    // ths is giving error because the private i sonly accesable in its class outside it not allowed

//  cout<<s1.marks<<endl; this will give error because its outside the class
// s1.dispay();  // this methhod is use to print the data member of private



// another way to access private member is to create a function which return it



 cout<<s1.getMarks()<<endl;
  s1.setMarks(99.20);
  cout<<s1.getMarks()<<endl;

}