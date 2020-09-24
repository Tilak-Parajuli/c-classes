#include<iostream>
using namespace std;
class set{
    private:
    int t,p;
    public:
    void input();
    int largest();
    void display();
};

inline int set::largest(){
    if(t>=p){
       return t;
    }
    else{
        return p;
    }
}
inline void set::input(){
    cout<<"Enter the values of t and p \n";
    cin>>t>>p;
}
void set::display(){
    cout<<"Greatest Value ="<<largest()<<endl;
}
int main(){
    set set1;
    set1.input();
    set1.display();
    return 0;
}