//Tilak Parajuli :)
#include<iostream>
using namespace std;
class Sec_c{
	int x;
	public:
	void let(int y){x=y;};
	Sec_c& adding(Sec_c boys,Sec_c& girls){
		girls.x=x+boys.x;
		return girls;
		}
void out(){
	cout<<"X is equal to --> "<<x<<"  :)"<<endl<<"\n";}
}boys,girls,total;

int main(){
	boys.let(69);
	girls.let(36);
	total=boys.adding(girls,total);
	boys.out();
	girls.out();
	total.out();
}							
