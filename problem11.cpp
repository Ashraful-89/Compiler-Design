#include<bits/stdc++.h>
using namespace std;
bool isOperator(char x) {
    if(x == '+' || x == '-' || x == '*' || x == '/') return true;
    else return false;
}
int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    vector<string> syntaxTree (30,"                                        ");
    string expression ;
    cin >> expression;


    int row = 0, col = 2;
    for(int i = 0; i < expression.size(); i++) {
        
        if(isOperator(expression[i])) {
            syntaxTree[row][col] = expression[i];
            syntaxTree[row+1][col-1] = '/';
            syntaxTree[row+1][col+1] = '\\';
            syntaxTree[row+2][col-2] = expression[i-1];
            row +=2;
            col +=2;
        }
    }
    syntaxTree[row][col]=expression.back();
    cout << "Syntax Tree of this expression " << expression << " . " << endl;
    for(auto str : syntaxTree) {
        cout << str << endl;
    }
    return 0;
}
