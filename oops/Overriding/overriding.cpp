#include <iostream>
using namespace std;

class scooty
{
public:
    int topSpeed;
    float Mileage;
    virtual void sound()
    {
        cout << "Vroom Vroom" << endl;
    }

private:
    int BootSpace;
};

class bike : public scooty
{
public:
    int gears;
    void sound()
    {
        cout << "Droom Droom" << endl;
    }
};

int main()
{
          scooty* b= new bike();
          b->sound();


}