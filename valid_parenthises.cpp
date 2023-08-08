#include<string>
#include<stack>
using namespace std;

bool isValidParenthesis(string exp)
{
    stack<char>s;
    for(int i = 0; i<exp.length(); i++){
            char ch = exp[i];

            //if opening bracket
            //if closing bracket check top then pop

            if(ch == '['||ch == '('|| ch == '{'){
                s.push(ch);
            }
            else{
                // it means closing brakcet
                if(!s.empty()){
                    char top =  s.top();
                    if((ch == ')'&& top == '(')||
                    (ch == '}' && top == '{')||
                    (ch == ']'&& top == '[')){
                        s.pop();
                    }
                    else {
                        return false;
                    }
                }
                else{
                    return false ;
                }

            }
    }
    if(s.empty()){
        return true ;
    }
    else{
        return false ;
    }
}