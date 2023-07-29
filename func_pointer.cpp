#include<iostream>
using namespace std;
void print(int * p){
    cout<<*p<<endl;
}
void update(int *p){
    // p = p+1;
    (*p)++;
    cout<<p<<endl;
};
int main(){
int value = 5;
int *p  = &value;
print(p);
update(p);
print(p);
// before and after we get same value
    
    return 0;
}