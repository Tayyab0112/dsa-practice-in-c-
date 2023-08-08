#include <bits/stdc++.h> 
#include<stack>
using namespace std;
void solve(stack<int>& myStack, int x){
    // solve using recursion
    // base case
    if(myStack.empty()){
        myStack.push(x);
        return ;
    }

    int num = myStack.top();
    myStack.pop(); 

    // recursive call 
    solve(myStack, x);
    myStack.push(num);

}
stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    solve(myStack,  x);
    return myStack ;
    // Write your code here.
}
