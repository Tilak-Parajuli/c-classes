#include<iostream>
using namespace std;
class Demo01{
	private:
		int a;
	public:
		void set(int x){
			a = x;
		}
		Demo01 sum(Demo01 ob1, Demo01 ob2){

		Demo01 ob3;
		ob3.a=ob1.a+ob2.a;
		return ob3;
		}
		void print(){
		cout<<"The value of A :  "<<a<<endl;
		}
	}d1,d2,d3;
	int main(){

 	d1.set(369);
	d2.set(07);
	d3=d3.sum(d1,d2);
	d1.print();
	d2.print();
	d3.print();
	return 0;
}
