#include <iostream>
using namespace std;

bool getelement (int arr[], int n, int key){
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == key){
            return 1;
        }
    }
        return 0;
}

int main(){

int arr[10] = {1,2,3,4,5,6,7,8,9,10};

int key;
cout<<"enter the element you want to search";
cin>>key;



bool found = getelement(arr,10,key);

if(found ){
    cout<<"found the element"<<endl;
}
else{
    cout<<"the element is not present"<<endl;
}

return 0; 
}