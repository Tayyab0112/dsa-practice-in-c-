#include<iostream>
// #include "Hero.cpp"
using namespace std;

class hero{
    // properties 

int health ;
public :
    char level  ;

    int gethealth(){
        return health;
    }
    char getlevel(){
        return level ;
    }
    void sethealth(int h){
        health  = h;
    }
    void setlevel(char l){
        level = l;
    }

};
class zero{
    // empty class have 1 size
};
int main(){
 hero tayyab;//static alloctaion
 tayyab.setlevel('A');
 cout<<"level is "<<tayyab.level<<endl;
 tayyab.sethealth(120);
 cout<<"health is "<<tayyab.gethealth()<<endl;
 hero*b = new hero;// dynamic allocation
cout<<"level by dynaic allocation is "<<(*b).level<<endl;
cout<<"the health by dynamic allocation is"<<(*b).gethealth()<<endl;

//  cout<<"the size of tayyab is "<<sizeof(tayyab)<<endl;
//  tayyab.sethealth(100);
//  cout<<tayyab.gethealth()<<endl;
//  tayyab.setlevel('A');
//  cout<<tayyab.getlevel()<<endl;
//  a1.health = 70;
//  a1.level = 'a';
//  cout<<a1.health<<endl;
//  cout<<a1.level<<endl;
//  cout<< a1.health<<endl;
// cout<<"size of hero is"<<sizeof(a1.health)<<endl;
   return 0;  
}