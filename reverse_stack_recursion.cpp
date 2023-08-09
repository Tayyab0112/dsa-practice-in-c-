#include <stack>
using namespace std;

void insertatBottom(stack<int> &s, int element ){
    // base case
    if(s.empty()){
        s.push(element);
        return ;
    }

    int num  = s.top();
    s.pop();

    // recrusive call ;
    insertatBottom(s, element  );

    s.push(num);

}


void reverseStack(stack<int> &stack) {
    
    // base case
    if(stack.empty()){
    return;
    }

    // keep aside top element
    int num = stack.top();
    stack.pop();

    // recursive call;
    reverseStack(stack);
    insertatBottom(stack,num);
    // Write your code here
}