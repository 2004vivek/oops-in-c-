#include<iostream>
using namespace std;
class Student{
	private:
		string name;
		int roll;
	public:
		Student(string n,int r){
			name=n;
			roll=r;
		}
		
		void display(){
			cout<<"hi my name is "<<name <<" with age "<<roll;
		}
		~Student(){
			cout<<"destructor is called";
		}
};
int main(){
	Student s("vivek",7);
	//works on pointer ie dynamic address
	Student *ptr=new s("vivek",7);
	delete s;
	ptr->display();

	
	
		
}
