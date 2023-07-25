#include<iostream>
using namespace std;
// void
int power(int a, int b){
    // b is power
    // a is base
    // base case
    if(b == 0){
        return 1;
    }

    if(b==1){
        return a;
    }

    // recursive call
    int ans = power(a,b/2);

    if(b%2 == 0){
        return ans*ans;
    }
    else{
        return a*ans*ans;
    }

};
int main(){
    int a,b;
    cin>>a;
    cin>>b;

    cout<<"power is "<<power(a,b);
    
    return 0;
}