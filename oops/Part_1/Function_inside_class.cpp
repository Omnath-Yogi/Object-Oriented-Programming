#include <iostream>
using namespace std;
class cricketer
{
public:
    string name;
    int runs;
    float avg;

    cricketer(string name, int runs,float avg)
    {
        this->name = name;
        this->runs = runs;
        this ->avg= avg;
    }

    void print()
    {
        cout << name << " " << runs << endl;
    }
    int matches(){
        return runs/avg;
    }
};
int main()
{
    cricketer c1("Gautum Gambhir", 20000,39.6);
    cricketer c2("Virat Kholi", 20000,51.3);

    c1.print();
    cout<<c1.matches()<<endl;
     c2.print();
       cout<<c2.matches()<<endl;

}