#include<iostream>
using namespace std;

class scooty{
public:
int TopSpeed;
float Mileage;

private:
int bootspace;
};

class bike:public scooty{
    public:
 int gears;
};

int main(){
    bike b1;
        b1.TopSpeed = 120;
        b1.gears =5;
        b1.Mileage=55.3;
      //  b1.bootspace=10;    // inacessable due to private class;
        cout<<b1.TopSpeed<<endl;
}