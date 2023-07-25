#include<iostream>
using namespace std;

bool check( string& s, int i, int j){
    // base case
    if(i>j){
        return true;
    }
    if(s[i]!=s[j]){
        return false;
        i++;
        j--;
    }
    else{
    return check(s,i+1, j-1);
    }
};

int main(){
string s = "ayya" ;
    
    bool ans = check(s,0,s.length() -1);
    if(ans){
        cout<<"the string was a palindrome"<<endl;
    }
    else{
        cout<<"the string was not a palindrome"<<endl;
    }

    return 0;
}