#include<iostream>
using namespace std;
int main(){
int num = 5;
cout<<num<<endl;

// num = *ptr
int *ptr = &num;
cout<<*ptr<<endl;// * is dereference operator

// &num = ptr
cout<<&num<<endl;
cout<<ptr<<endl;


double d = 2.4;
double *ptr2 = &d;   


cout<<"the size is"<<sizeof(num)<<endl;
cout<<"the size is"<<sizeof(&d)<<&d<<endl;
cout<<"the size is"<<sizeof(*ptr)<<endl;
    return 0;
}