#include<iostream>
using namespace std;
//class and object
//differnt ways of creating obj
class Humanbeing{
	public:
		string name;
		void Introduce();
};
void Humanbeing::Introduce(){
			cout<<"hi i am "<<name<<endl;
		}
int main(){
    //differnt waysof creating obj
	//it will take stack memory
	Humanbeing o1;
	o1.name="vivek";
	o1.Introduce();
	
	//it will take queue memory and it will create dynamic space
//	Humanbeing *ptr=new Humanbeing;//creating obj using ptr
	Humanbeing *ptr=&o1;
//	ptr->name="kumar";
	ptr->Introduce(); 
}
