#include<iostream>
using namespace std;
 class cricketer{
    public:
    string name;
    int runs;

    cricketer(string name, int runs){    // when the parameter variable name and class variable name is same then this print garbage values
       this->name = name;
           this->runs = runs;
    }
 };
 int main(){
   cricketer c1("Gautum Gambhir",20000);
   cricketer c2("Virat Kholi", 20000);


   cout<<c1.name<<" "<<c1.runs<<endl;
   cout<<c2.name<<" "<<c2.runs<<endl;
 }