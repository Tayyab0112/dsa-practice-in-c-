#include<iostream>
using namespace std;
void bsort(int* arr, int n){
    // base case
    if(n==0||n==1){
        return ;
    }

for(int i = 0; i<n+1; i++){
    if(arr[i]>arr[i+1]){
        swap(arr[i],arr[i+1]);
    }
}
return bsort(arr, n-1);

}



int main(){
int arr[5] = {2,5,9,1,7};
bsort(arr, 5);
    cout<<"the sorted array is " ;
for (int i = 0; i < 5; i++)
{
    cout<<arr[i]<<" ";
}
 
    
    return 0;
}