#include<iostream>
using namespace std;
class Complex_Number{
    private:
    int real_part,imagianary_part;
    public:
    void data_from_user(){
        cout<<"Enter the values of Real and Imagianary part  \n";
        cin>>real_part>>imagianary_part;
        
    }
    void display(){
        cout<<real_part<<imagianary_part<<"\n";
    }
    void adding_complex_numbers(Complex_Number x1,Complex_Number x2){
        real_part=x1.real_part+x2.imagianary_part;
        imagianary_part=x1.imagianary_part+x2.imagianary_part;
    }
};
 int main (void){
    Complex_Number x1,x2,x3;
    x1.data_from_user();
    x2.data_from_user();
    x3.adding_complex_numbers(x1,x2);
    cout<<"x3=";
    x3.display();
    return 0;
}