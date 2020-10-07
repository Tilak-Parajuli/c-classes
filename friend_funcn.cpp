#include<iostream>
using namespace std;
class B;
class A{
	int a;
	public:
	void setvalue(int x){
		a =x;
	}
void putvalue()	{
	cout<<"The value of a  ="<<a<<endl<<"\n";
	}
friend void display_sum(A,B);
}A1;

class B	{
	int b;
	public:
	void setvalue(int y){
		b=y;
	}
void putvalue(){
	cout<<"The value of b is:"<<b<<endl<<"\n";
	}
friend void display_sum(A,B);
}B1;

void display_sum(A obj01,B obj02){
	cout<<"The Sum of a and b =-> "<<(obj01.a + obj02.b)<<"\n";
	}
int main(){
	A1.setvalue(36);
	B1.setvalue(72);
	A1.putvalue();
	B1.putvalue();
	display_sum(A1,B1);
}
