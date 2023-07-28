#include<iostream>
using namespace std;
int main(){
int arr[10] = {2,4,6} ;
cout<<"address of the fist block is"<<arr<<endl;
// which is same to 
cout<<"address of the fist block is"<<&arr[0]<<endl;
cout<<*arr<<endl;
cout<<*arr +1<<endl;
for (int i = 0; i < 10; i++)
{
    cout<<*arr +1<<endl;
}


    
    return 0;
}