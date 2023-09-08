// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class Complex{
    int a,b;
    public:
     friend Complex sumComplex(Complex o1,Complex o2);
    void setnumber(int v1,int v2){
        a=v1;
        b=v2;
    }
   
    void printnumber(){
        cout<<"your number is " <<a<<" + "<<b<<"i"<<endl;
    }
};
//function returning complex
Complex sumComplex(Complex o1,Complex o2){
    Complex o3;
    o3.setnumber((o1.a+o2.a),(o1.b+o2.b));
    return o3;
}
int main() {
    // Write C++ code here
    Complex s1,s2,sum;
    s1.setnumber(1,2);
    s1.printnumber();
    s2.setnumber(4,6);
    sum=sumComplex(s1,s2);
    sum.printnumber();
    s2.printnumber();
    
    return 0;
}
