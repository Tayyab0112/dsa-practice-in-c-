#include<iostream>
using namespace std;
int main(){
int arr[5] = {1,2,3,4,5};
char ch[10] = {"abcbdbebd"};
// charactrer array ends with a null character

cout<<arr<<endl;
cout<<ch<<endl;

// for integer and char array cout is differently implemented;
// arr -> represent first address
// ch -> represent whole content in the array

char *c = &ch[0];
cout<<*c<<endl;
cout<<c<<endl;
cout<<&c<<endl;

char temp = 'z';
char*ptr  = & temp;
cout<<ptr<<endl;
char *C = "ancd";// yeh ndhi krna h

    return 0;
}