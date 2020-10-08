#include<iostream>
using namespace std;
class Sec_B;
class Sec_A{
	private:
		int n;
	public:
	void setdata(int t){
	n = t;
	}
	friend Sec_B;
}a;

class Sec_B{
	public:
	void func(Sec_A n){
	cout<<"Val = "<<n.n<<endl;
	}
}b;

int main(){
	a.setdata(369);
	b.func(a);
}
