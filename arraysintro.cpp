#include <iostream>
using namespace std;

void printarr(int arr[], int size){
for (int i = 0; i < size; i++)
{
    cout<<arr[i]<<endl;
}
    cout<<"done with printing"<<endl;
}

int main(){
int arr[15] = {2,3};
printarr(arr,15);
int sizeofarr = sizeof(arr)/sizeof(int);
cout<<sizeofarr<<endl;
cout<<"everything is fine";
return 0; 
}