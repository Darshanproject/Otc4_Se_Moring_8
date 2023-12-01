#include<iostream>
using namespace std;
class person{
	public:
		void dispaly(int num,int num1){
			cout<<"This is your first methode"<<num+num1<<endl;
		}
		void dispaly(double num,double num1){
			cout<<"This is your second Methode"<<num+num1<<endl;
		}
};



int main(){
	person obj;
	obj.dispaly(1,2);
	
	return 0;
}
