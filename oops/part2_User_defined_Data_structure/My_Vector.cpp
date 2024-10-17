#include <iostream>
using namespace std;
class vector
{
public:
     int size;
     int capacity;
     int *arr;

     vector()
     {
          size = 0;
          capacity = 1;
          arr = new int[1];
     }

     void add(int ele)
     {
          if (size == capacity)
          {
               capacity = 2 * capacity;
               int *arr2 = new int[capacity];

               for (int i = 0; i < size; i++)
               {
                    arr2[i] = arr[i];
               }
               arr = arr2;
          }
          arr[size++] = ele;
     }

     void print()
     {
          for (int i = 0; i < size; i++)
          {
               cout << arr[i] << " ";
          }
          cout << endl;
     }

   int get(int idx){
     if(idx<size && idx>=0){
          return arr[idx];
             }
             else{
               cout<<"Invalid Input"<<endl;
               return 0;
             }
   }


   void remove(){
   if(size>0){
       size--;
   }
   else{ cout<<"invalid operation"<<endl;
   }
   }

};

int main()
{
     vector v;
     v.add(11);
     v.print();
     // cout<<"capacity is" <<" "<<v.capacity<<" "<< "Size is" <<" "<<v.size<<endl;
     v.add(22);
     v.print();
     // cout<<"capacity is" <<" "<<v.capacity<<" "<< "Size is" <<" "<<v.size<<endl;
     v.add(33);
     v.print();
     // cout<<"capacity is" <<" "<<v.capacity<<" "<< "Size is" <<" "<<v.size<<endl;
     v.add(44);
     v.print();
     // cout<<"capacity is" <<" "<<v.capacity<<" "<< "Size is" <<" "<<v.size<<endl;
     v.add(55);
     v.print();
     // cout<<"capacity is" <<" "<<v.capacity<<" "<< "Size is" <<" "<<v.size<<endl;
     v.add(66);
     v.print();
     // cout<<"capacity is" <<" "<<v.capacity<<" "<< "Size is" <<" "<<v.size<<endl;
     v.add(77);
     v.print();
     // cout<<"capacity is" <<" "<<v.capacity<<" "<< "Size is" <<" "<<v.size<<endl;
     v.add(88);
     v.print();
     // cout<<"capacity is" <<" "<<v.capacity<<" "<< "Size is" <<" "<<v.size<<endl;
     v.add(99);
     v.print();
     // cout<<"capacity is" <<" "<<v.capacity<<" "<< "Size is" <<" "<<v.size<<endl;
     v.add(110);
     v.print();
     // cout<<"capacity is" <<" "<<v.capacity<<" "<< "Size is" <<" "<<v.size<<endl;


     // cout<<v.get(10)<<endl;
     v.remove();
     v.print();
}