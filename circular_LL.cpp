#include<iostream>
using namespace std;

class node{
public :
int data;
node*next;

// constructor
node(int data){
    this ->data = data;
    this ->next =  NULL;
}
//destructor
~node(){
    int value = this ->data;
    if(this ->next != NULL){
        delete next;
        next = NULL;
    }
    cout<<"memeory is free with data"<<endl;
}// in circular linked list we need only tail not head
};
void insertnode(node *& tail, int element,int d ){
    // assuming that the element is present in the list
    if(tail = NULL){
        node*newnode = new node(d);
        tail = newnode;
        newnode ->next =  newnode;

    }
    else {
        node*curr = tail;
        while(curr ->data !=  element) {
            curr = curr ->next;
        }
        //element found
        node*temp = new node(d);
        temp ->next =  curr->next;
        curr ->next = temp ;
            }

}

void print(node*&tail){
    node*temp =  tail;
do
{
    cout<<tail ->data<<" ";
    tail = tail->next ;
} while (tail != temp);
}
int main(){
 
node*tail = NULL;
insertnode(tail,5,3)    ;
print(tail);
    return 0;
}