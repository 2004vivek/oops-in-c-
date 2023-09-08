#include<iostream>
using namespace std;
class College{
	public:
		static string timing,period;
		string name,placement,infrastructure,branch;
		int fees;
		double per;
		College(string n,string p,string i,string b,int f,double pe);
		void display();
};
string College::timing="9.30";
string College::period="8";
College::College(string n,string p,string i,string b,int f,double pe){
	this->name=n;
	this->placement=p;
	this->infrastructure=i;
	this->branch=b;
	this->fees=f;
	this->per=pe;
}
void College::display(){
	cout<<name<<" "<<placement<<" "<<infrastructure<<" "<<branch<<" "<<fees<<" "<<per<<endl;
	cout<<timing<<" "<<endl;
	cout<<period<<" "<<endl;
}
int main(){
	College s1("aec","80","good","allbranch",125,12);
	s1.display();
}
