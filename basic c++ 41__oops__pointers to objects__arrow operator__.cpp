#include<iostream>
using namespace std;
class complex{
	int q1,q2;
	public:
		void set_data(int w1,int w2){
			q1=w1;
			q2=w2;
		}
		void get_data(){
			cout<<"the value of q1 is "<<q1<<endl;
			cout<<"the value of q2 is"<<q2<<endl;
		}
};
int main(){
	complex *bigo= new complex;//dynamic method of creating objects and referencing then to a pointer//
/*	complex so2;*/
/*	complex *bigo= &so2;*/
/*	(*bigo).set_data(21,89);//dereferencing of pointers//
	(*bigo).get_data();*/
	//arrow operator//
	bigo->set_data(22,89);
	bigo->get_data();
	
	//array of objects//
	complex *sigma= new complex[4];
	sigma->set_data(12,56);
	sigma->get_data();
	
	return 0;
}
