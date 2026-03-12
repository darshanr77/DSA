#include<iostream>
#include<stack>
#include<string>
using namespace std;

bool validparenthesis(string str){

    stack<char> s;

    for(int i = 0; i < str.size(); i++){

        char ch = str[i];

        // opening brackets
        if(ch == '(' || ch == '[' || ch == '{'){
            s.push(ch);
        }
        else{

            if(s.empty()){
                return false;
            }

            char top = s.top();

            if((top == '(' && ch == ')') ||
               (top == '[' && ch == ']') ||
               (top == '{' && ch == '}')){
                s.pop();
            }
            else{
                return false;
            }
        }
    }

    return true;
}

int main(){

    string str = "({{[]}})";

    if(validparenthesis(str))
        cout<<"Valid Parenthesis\n";
    else
        cout<<"Invalid Parenthesis\n";

    return 0;
}