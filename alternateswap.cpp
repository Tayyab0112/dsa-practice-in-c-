#include <iostream>
using namespace std;

void alternateswap(int arr[], int n){
    for (int i = 0; i < n; i+=2)
    {
        if(i+1<n){
            swap(arr[i], arr[i+1]);
        }
    }
}
void printarray(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<< " ";
    }cout<<endl;
    
}

int main(){
// int size;
// cin>>size;
int arr[6] = {1,2,3,4,5,6};
cout<<"before swap"<<endl;
printarray(arr,6);
alternateswap(arr,6);
printarray(arr,6);
return 0; 
}