#include <iostream>
using namespace std;
class car
{
public:
    string name;
    int price;
    int seats;
    string type;

    car(string n, int p, int s, string t)
    {
        name = n;
        price = p;
        seats = s;
        type = t;
    }
};

void print(car c)
{
    cout << c.name << " " << c.type << " " << c.price << " " << c.seats << "  " << endl;
}

void change(car &c)
{
    c.name = "BMW";
}

int main(){
    
    car c1("Honda city", 1500000, 5, "Sedan");

    print(c1);
     change(c1);
     print(c1);

    car c2(" Toyota Fortuner", 4500000, 8, "SUV");
    print(c2);
 
    car c3("MAruti Swift",700000,5, "Hetchback");
    print(c3);

    
   
   
     
     
}
