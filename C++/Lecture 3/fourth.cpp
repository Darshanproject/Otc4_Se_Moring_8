#include<iostream>
using namespace std;
class grandfathers{
	public:
		void display(){
			cout<<"This is my garndfathers class "<<endl;
		}
};
class fathers:public grandfathers{
	public:
		void display1(){
			cout<<"This is my fathers class "<<endl;
		}
};
class middle{
	public:
		void xyz(){
			cout<<"This is your middle class"<<endl;
		}
};
class child:public fathers,public middle{
	public:
		void display2(){
			cout<<"This is child class"<<endl;
		}
};


int main(){
	child obj;
	obj.display();
	obj.display2();
	obj.display1();
	obj.xyz();
	return 0;
}
