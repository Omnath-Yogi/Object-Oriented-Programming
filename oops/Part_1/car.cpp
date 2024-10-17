#include <iostream>
using namespace std;
class car
{
public:
    string name;
    int price;
    int seats;
    string type;
};

void print(car c)
{
    cout << c.name << " " << c.type << " " << c.price << " " << c.seats << "  " << endl;
}

void change(car& c){
    c.name = "BMW";
}


int main()
{ 
    car c1;
    c1.name = "Honda city";
    c1.price = 1500000;
    c1.seats = 5;
    c1.type = "Sedan";

print(c1);
  change(c1);
  print(c1);

    car c2;
    c2.name = " Toyota Fortuner";
    c2.price = 4500000;
    c2.seats = 8;
    c2.type = "SUV";

    car c3;
    c3.name = "Maruti Swift";
    c3.price = 700000;
    c3.seats = 5;
    c3.type = "Hatchback";

    // print(c1);
    // print(c2);
    // print(c3);
}
         