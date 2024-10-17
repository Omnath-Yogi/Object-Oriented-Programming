#include <iostream>
using namespace std;
class cricketer
{
public:
    string name;
    int runs;
    float avg;

    cricketer(string name, int runs, float avg)
    {
        this->name = name;
        this->runs = runs;
        this->avg = avg;
    }
};

int main(){
    cricketer c1("Virat Kohli",25000,55.4);
    cricketer *c2 = new cricketer("Rohit Sharma",18000,47.8);

cout<<c1.name<<" "<<c1.runs<<endl;
//    cout<<(*c2).name<<" "<<(*c2).runs<<endl;
cout<<c2->name<<" "<<c2->runs<<endl;

    // int *ptr = new int(707);
    // cout<<*ptr<<endl;
    // 0x61fe94  0xfc13d0
}