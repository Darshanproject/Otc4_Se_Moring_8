#include<iostream>
using namespace std;
class parent{
	public:
		void display(){
			cout<<"This is my parent class "<<endl;
		}
};
class uncle{
	public:
		void display1(){
			cout<<"This is my uncle class "<<endl;
		}
};

class child:public parent,public uncle{
	public :
		void display2(){
			cout<<"This is child class"<<endl;
		}
};


int main(){
	child obj;
	obj.display();
	obj.display2();
	obj.display1();
	return 0;
}
