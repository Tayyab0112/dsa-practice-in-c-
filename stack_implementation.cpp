#include<iostream>
#include<stack>
using namespace std;

class Stack{
    // properties 
    public :
    int *arr ;
    int top;
    int size ;

    // behaviour 
    Stack(int size ){
        this ->size =  size ;
        arr = new int[size ];
        top = -1;
    }
    void push(int element ){
        if(size -top >1){
            top ++;
            arr[top] = element ;
        }
        else{
            cout<<"stack overflow "<<endl;
        }
    }
    void pop(){
        if (top >= 0 ){
            top --;
        }
        else {
            cout<<"stack underflow "<<endl;
        }
    }
    int peek(){
        if(top >= 0){
            return arr[top];
        }
        else{
            cout<<"the stack is empty"<<endl;
            return -1 ;

        }
    }
    bool empty(){
        if(top == -1 ){
            cout << " stack is empty"<<endl ;
            return true;
        }
        else{
            cout<<"the stack is non empty"<<endl;
            return false ;
        }
    }
};



int main(){
Stack st(5) ;
st.push(5);
st.push(13);
st.push(11);
st.pop();
st.pop();
st.pop();
cout<<st.peek()<<endl;
cout<<endl;
st.empty()   ;
    return 0;
}