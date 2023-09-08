// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class student{
   protected:
   int roll;
   public:
   void set_no(int r){
       roll=r;
   }
   void print_no(){
       cout<<"your roll no"<<roll<<endl;
   }
};
class test:virtual public student{
   protected:
   float maths,physics;
   public:
   void set_marks(float m1,float m2){
       maths=m1;
       physics=m2;
   }
   void print_marks(){
       cout<<"your result"<<maths<<" "<<physics<<endl;
   }
};
class sports:virtual public student{
    protected:
    float score;
    public:
    void set_score(float s){
        score=s;
    }
    void print_score(){
        cout<<"your pt score"<<score<<endl;
    }
};
class result:public test,public sports{
  private:
  float total;
  public:
  void display(){
      total=maths+physics+score;
      print_no();
  print_score();
  print_marks();
  cout<<"your total score"<<total<<endl;
  }
};

int main() {
    // Write C++ code here
    result vivek;
    vivek.set_no(90);
    vivek.set_score(2345.3);
    vivek.set_marks(887,897);
    vivek.display();
    
}
