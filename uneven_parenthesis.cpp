#include <bits/stdc++.h> 
#include<stack>
int findMinimumCost(string str) {
  // Write your code here
  // odd part removal

  if(str.length()%2 == 1){
    return -1;
  }

  //stack initialize
  stack<char>s;

// for loop for traverseal
  for(int i = 0; i<str.length(); i++){
    char ch = str[i];

    if(ch == '{'){
      s.push(ch);
    }
    else{
      if(!s.empty() && s.top() == '{'){
        s.pop();
      }
      else{
        s.push(ch);
      }
    }
    // now the stack contains invalid expressions


}int a = 0;
 int b = 0;
 while(!s.empty()){
   if(s.top() == '{'){
     b++;
   }
   else{
     a++;
   }
   s.pop();
 }
 
int ans = (a+1)/2 + (b+1)/2;
 return ans;
  }

