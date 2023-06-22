#include <iostream>
using namespace std;

void getunique(int arr[], int a){
    int ans = 0;
    for(int i = 0; i<a; i++){
        ans = ans^arr[i];
    }
    cout<<"the unique element is "<<ans<<endl;
}

int main(){
int arr[7] = {1,2,3,4,3,2,1};
getunique(arr, 7);
return 0; 
}