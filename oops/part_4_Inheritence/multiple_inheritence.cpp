#include<iostream>
using namespace std;

class cricketer{
 public:
 int runs;
 float avg;
 int wickets;
};

class Engineer{
    public:
    string domain;
    int experience;

};

class phodu:public Engineer,cricketer{
     string name;
 };

int main(){

}