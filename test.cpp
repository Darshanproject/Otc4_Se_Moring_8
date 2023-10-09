#include<iostream>
using namespace std;
class human{
	public:
	void run(){
		cout<<"We can run \n";
	}	
};

class Boy:public human{
	public:
		void run(){
			cout<<"Boy can run";
		}
};

int main(){
	Boy obj;
	obj.human::run();
	obj.run();
}
