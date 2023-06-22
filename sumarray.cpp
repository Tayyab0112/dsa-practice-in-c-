#include <iostream>
using namespace std;

int getsum(int arr[], int n){
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main(){
int arr[60];
int size;
cin>>size;
for (int i = 0; i < size; i++)
{
    cin>>arr[i];
}

cout<<"the sum of the entered given elements are"<<getsum(arr,size)<<endl;

return 0; 
}