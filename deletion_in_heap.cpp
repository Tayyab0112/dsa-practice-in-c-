#include<iostream>
using namespace std;


class heap{
    public :
    int arr[100];
    int size  = 0;

heap(){
    arr[0] = -1;
    size = 0;
}
void insertval(int val){
    size = size +1;
    int index = size;
    arr[index ] = val ;

    while(index >1){
        int parent = index /2;

        if(arr[parent]<arr[index]){
            swap(arr[parent], arr[index]);
                index = parent;
            }
        else{
            return ;
        }
        }
    }
void print(){
    for (int i = 1; i <= size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}

void deletefromheap(){
if (size == 0){
    cout<<"the heap is empty"<<endl;
    return ;
}

arr[1] = arr[size];
size --;

    // take root node to its correct position

int i = 1;
while(i<size){
    int rightindex = 2* i +1;
    int leftindex = 2*i;

    if(leftindex < size && arr[i]<arr[leftindex]){
        swap(arr[i], arr[leftindex]);
        i = leftindex ;
    }
    else if(rightindex < size && arr[i]<arr[rightindex]){
        swap(arr[i], arr[rightindex]);
        i = rightindex ;
    }
}
}
};
    

int main(){

    heap h;
    h.insertval(50);
    h.insertval(55);
    h.insertval(53);
    h.insertval(52);
    h.insertval(54);
    h.print();
    h.deletefromheap();
    h.print();
    
    
    return 0;
}