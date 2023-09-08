// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class student{
  protected:
  string name;
  int roll;
  void setdata(string n,int r){
      name=n;
      roll=r;
  }
  void get(){
      cout<<name<<" "<<roll<<endl;
  }
};
class marks:public student{
    protected:
    int physics;
    int maths;
    public:
  student ::setdata;
  student::name;
  student::roll;
    student::get;
    void setmarks(int p,int m){
        physics=p;
        maths=m;
       
    }
    void getmarks(){
        cout<<"helllo my name is"<<name<<"having rollno"<<roll<<"this is a marks "<<physics<<" "<<maths<<" "<<endl;
    }
};
class result:public marks{
    protected:
    float per;
    public:
    marks::setmarks;
    marks::getmarks;
    void setdata(int p){
        per=p;
    }
    void display_result(){
        cout<<per<<" "<<physics<<" "<<maths<< " "<<name<<roll<<endl;
    }
    
};
int main() {
    // Write C++ code here
    marks m;
    //accessing in protected mode
    m.setdata("nmdfg",890);
    //accesing in public mode once if we are inherting 
    // m.name="vivek";
    // m.roll=235;
    m.get();
    m.setmarks(76,89);
    m.getmarks();
    // result res;
    // res.setmarks(89234567,89,"er",34);
    // res.getmarks();
    // res.setdata(890.099);
    // res.display_result();
  
    // m.name="vivek";
    
    
   
    // res.display_result();

    return 0;
}
