#include<bits/stdc++.h>
using namespace std;
class college{
    protected:
    string name;
    int id;
  public:
  college(string n,int i){
      name=n;
      id=i;
  }
  virtual void display(){
      cout<<"this is college class "<<endl;
  }
};
class school:public college{
    string subject;
  public:
  school(string n,int i,string s):college(n,i){
     subject=s;
  }
  void display(){
      cout<<"this is school class "<<name<<" "<<id<<" "<<subject<<endl;
  }
};
class university:public college{
    string branch;
  public:
  university(string n,int i,string b):college(n,i){
     branch=b;
  }
  void display(){
      cout<<"this is university class "<<name<<" "<<id<<" "<<branch<<endl;
  }
};
int main(){
    college *pcllg[2];
    school schobj("vivek",1,"maths");
    university uniob("cse",3,"kumar");
    pcllg[0]=&schobj;
    pcllg[1]=&uniob;
    //  college colobj("vivek",1);
     
  
//   pcllg->display();
    pcllg[0]->display();
    pcllg[1]->display();
}
