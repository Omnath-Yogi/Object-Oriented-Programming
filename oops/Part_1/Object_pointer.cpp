#include<iostream>
using namespace std;
 class cricketer{
    public:
    string name;
    int runs;


    cricketer(string name, int runs){   
       this->name = name;
           this->runs = runs;
           
    }
 };

 void change(cricketer*c){
   //  (*c).name= "Sachin";
    c->name="Sachin" ;
 }
 int main(){
   cricketer c1("Gautum Gambhir",20000);
   cricketer c2("Virat Kholi", 20000);
   cout<<c1.name<<endl;
   cricketer* p = &c1;    // p stores the adress of object pointer c1

   // cout<<p<<endl;
   // cout<<(*p).name<<endl;
   //    (*p).runs=10000;
   //     cout<<(*p).runs<<endl;


   change(&c1);
   cout<<c1.name<<endl;

 }