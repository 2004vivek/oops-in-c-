// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class Y;
class X{
    int data;
    public:
    void setvalue(int value){
        data=value;
    }
    friend void add(X,Y);
};
class Y{
    int num;
      public:
    void setvalue(int value){
        num=value;
    }
     friend void add(X,Y);
};
void add(X o1,Y o2){
    cout<<"summing data of X and Y gives "<<o1.data+o2.num;
}
int main() {
    // Write C++ code here
    X a;
    a.setvalue(3);
    Y b;
    b.setvalue(5);
   add(a,b);
    
    return 0;
}
