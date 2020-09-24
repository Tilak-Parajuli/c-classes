//Tilak Parajuli
#include<iostream>
using namespace std;
class sum{
    private:
    float principle,time,rate;
    float interest(){
        return (principle*time*rate)/100;
    }
    public:
    void data(float p,float t, float r){
        principle=p;
        time=t;
        rate=r;
    }
    void total(){
        cout<<"Total amt  :"<<principle+interest()<<"\n";
    }
};

int main(){
    class sum i;
    i.data(1000,5,5.6);
    i.total();
    return 0;
}

