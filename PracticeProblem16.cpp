#include <bits/stdc++.h>
using namespace std;

int precedence(char x) {
  if(x == '^') return 3;
  else if(x == '*' or x == '/') return 2;
  else if( x == '+' or x == '-') return 1;
  else return -1;
}

void infixToPostfix(string infix) {
  
  stack <char> st;
  string postfix = "";
  
  for(int i = 0; infix[i] ; i++) {
    char x = infix[i];
    
    if((x >= 'a' and x <= 'z') or (x >= 'A' and x <= 'Z'))
         postfix += x;
    else if( x == '(') {
      st.push(x);
    }
    else if( x == ')') {
         while(st.top() != '(') {
           postfix += st.top();
           st.pop();
         }
         st.pop();
    }
    
    else {
         while(!st.empty() and precedence(x) <= precedence(st.top())) {
            postfix += st.top();
            st.pop();
         }
         st.push(x);
      
    }
  }

   while(!st.empty()) {
      postfix += st.top();
      st.pop();
      }
   cout << "The postfix is : "  << postfix << endl;
}
int main() 
{  
    
    string infix ="(A-B)*(D/E)";
     // AB - DE/*
    cout << "Infix is : " << infix << endl;
    infixToPostfix(infix);
    return 0;
}
