// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
//forward decleration
class Complex;
class calcuator{
    public:
    int add(int a,int b){
        return a+b;
    }
    int complexrealsum(Complex,Complex);
    //friend class
    int complexcomsum(Complex,Complex);
    
};
class Complex{
    int a,b;
    public:
    //indivuially declaring function as friend
     friend int calcuator::complexrealsum(Complex o1,Complex o2);
     friend int calcuator::complexcomsum(Complex o1,Complex o2);
     //declaring the entire calcutator class as friend
     friend class calcuator; 
    void setnumber(int v1,int v2){
        a=v1;
        b=v2;
    }
   
    void printnumber(){
        cout<<"your number is " <<a<<" + "<<b<<"i"<<endl;
    }
};
int calcuator:: complexrealsum(Complex o1,Complex o2){
        return o1.a+o2.a;
    }
int calcuator:: complexcomsum(Complex o1,Complex o2){
        return o1.b+o2.b;
    }

//function returning complex
// Complex sumComplex(Complex o1,Complex o2){
//     Complex o3;
//     o3.setnumber((o1.a+o2.a),(o1.b+o2.b));
//     return o3;
// }
int main() {
    // Write C++ code here
    
    Complex s1,s2;
    s1.setnumber(1,2);
    s1.printnumber();
    s2.setnumber(4,6);
    s2.printnumber();
    calcuator calc;
    int res=calc. complexrealsum(s1,s2);
    cout<<"the sum of real part of o1 and o2 is"<<res<<endl;
     int resc=calc. complexcomsum(s1,s2);
    cout<<"the sum of imaginary part of o1 and o2 is"<<resc<<endl;
    // sum=sumComplex(s1,s2);
    // sum.printnumber();
    // s2.printnumber();
    
    return 0;
}

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
//swapping private value of the class
class c2;
class c1{
    int val;
    public:
    void setdata(int a){
        val=a;
    }
    void display(){
        cout<<val<<endl;
    }
    friend void exchange(c1 &,c2 &);
};
class c2{
    int val2;
    public:
    void setdata(int a){
        val2=a;
    }
    void display(){
        cout<<val2<<endl;
    }
    friend void exchange(c1 &,c2 &);
};
//reference to data of c1
void exchange(c1 &x,c2 &y){
    int temp=x.val;
    x.val=y.val2;
    y.val2=temp;
}
int main() {
    // Write C++ code here
    c1 o1;
    c2 o2;
    o1.setdata(3);
     o1.display();
    o2.setdata(8);
     o2.display();
    exchange(o1,o2);
    cout<<"the value after exchanging become";
    o1.display();
     cout<<"the value after exchanging become";
    o2.display();
    return 0;
}
