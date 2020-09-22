#include<iostream>
#include<string>
 
 using namespace std;
 class player{
     private:
     //attributes
     string name {"Coder"};
     int health;
     int xp;

     public:
     //methods
     void talk(string text_to_say){cout<< name<<" "<"says"<<" "<<text_to_say<<endl;}
     bool is_dead();
 };
 int main(){
     player tilak;  
     //tilak.name ="Tilak"; (this is private so it will produce compilation error)
     //cout<<tilak.health << endl; (compilation error too) //private
     tilak.talk("Hello there"); //correct because it is in public
     return 0;
 }
