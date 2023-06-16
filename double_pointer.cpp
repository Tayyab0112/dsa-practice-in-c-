#include <iostream>
using namespace std;

int main(){
int i= 5;
int *ptr = &i;
int **ptr2 = &ptr;
cout<<endl<<"sab sahi chl rha hai"<<endl;

cout<<ptr<<endl;
cout<<*ptr2<<endl;
cout<<ptr2<<endl;
cout<<&ptr2<<endl;
cout<<*ptr<<endl;
cout<<**ptr2<<endl;

cout<<&i<<endl;
cout<<ptr<<endl;
cout<<*ptr2<<endl;

return 0; 
}