#include<iostream>
#include<string>
#include<stack>

using namespace std;

bool isvalid(string s){
     stack<char>st;

     for(char x : s){
        if(x == '[' || x == '{' || x=='('){
            st.push(x);
        }
        else{
            if(st.empty())return false;
            char top = st.top();
            st.pop();

            if((x == '}' && top!='{')||
            (x == ']' && top!='[')||
            (x == ')' && top!='(')){
                return false;
            }
        }

    }
    return st.empty();
}


int main(){
    string s = "()";
    if(isvalid(s)){
        cout<<"okkk";
    }
    else{
        cout<<"fuk";
    }
}

