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
};
    

int main(){

    heap h;
    h.insertval(50);
    h.insertval(55);
    h.insertval(53);
    h.insertval(52);
    h.insertval(54);
    h.print();
    
    
    return 0;
}