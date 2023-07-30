#include<iostream>
using namespace std;
// spelling is intentionally wrong
// invoke at the time of object creation
// it have no return type and any input parameter

class hero{
    public :
    int health;
    char level;

    // constructor
    hero(){
        cout<<"constructor called "<<endl;
    }
    // parametrise constructor
    hero(int health){
       this-> health  = health;
    }
    hero(int health, char level){
       this-> health  = health;
       this-> level  = level;
    }
    void sethealth(int h){
        health = h;
    }
    int gethealth(){
        return health;
    }
    void print(){
        cout<<level<<endl;
        cout<<health<<endl;
    }
};

int main(){
 cout<<"hi"<<endl;
  hero tayyab;  
  tayyab.gethealth();
  cout<<"hello"<<endl;

//   dynamic allocation
hero *h =  new hero(12);
hero temp(22,'a');
    temp.print();
    return 0;
}