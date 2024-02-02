#include <bits/stdc++.h>
using namespace std;

char singleQoute ='\'';
char doubleQoute ='\"';


bool iskeyword(string str)
{
    vector<string> keywords = {
        "asm", "auto", "break", "case", "catch", "char", "class",
        "const", "continue", "default", "delete", "do", "double",
        "else", "extern", "float", "for", "friend", "goto", "if",
        "inline", "int", "long", "new", "operator", "private",
        "public", "typedef", "return", "short", "signed",
        "sizeof", "static", "struct", "switch", "template",
        "throw", "try", "union", "unsigned", "virtual", "void",
        "volatile", "while"};

    sort(keywords.begin(),keywords.end());
    if(binary_search(keywords.begin(),keywords.end(),str)){
        return true;
    }
    return false;
}
bool isOperator(string str) {
    vector<string> operators = {
        "+","-","*","/","%","^","++","--","+=","-=","*=","/=","==","=","!=","<",">",">>","<<",">=","<=","%=","||","%%","%"
    };
    sort(operators.begin(),operators.end());
    if(binary_search(operators.begin(),operators.end(), str)) {
        return true;
    }
    else {
        return false;
    }

}
bool isIdentifier(string str) {
    if(isalpha(str[0]) || (str[0] == '_')) {
        for(int i =  1; i < str.length(); i++ ) {
            if(!(isalpha(str[i]) || isdigit(str[i]) || (str[i] == '_'))){
                return false;
            }
        }
        return true;
    }
    else {
        return false;
    }
}
bool isConstant(string str) {
    if(str[0] == doubleQoute and str[str.length()-1] == doubleQoute) return true;
    else if(str[0] == singleQoute and str[str.length()-1] == singleQoute and str.length() == 3) return true;
    else if(isdigit(str[0]) || str[0] == '.') {
        int pointCount = 0;
        for(int i = 1; i < str.length(); i++) {
            if(str[i] == '.') {
                pointCount++;
                continue;
            }
            if(!isdigit(str[i])) {
                return false;
            }
            
        }
        if(pointCount <=  1) {
            return true;
        }
        else {
            return false;
        }

    }
    return false;
}   

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    string input;
    getline(cin, input);
    vector<string> str;

    string word = "";
    for(auto litter : input) {
        if(litter == ' '){
             str.push_back(word);
             word = "";
        }
        else
            word +=litter;
    }
    str.push_back(word);

    cout << "ALl input are :" << endl;
    for(auto x : str) {
        cout << x << " : ";
        if(iskeyword(x)) {
            cout << "Keyword" << endl;
        }
        else if(isOperator(x)) {
            cout << "Operator" << endl;
        }
        else if(isIdentifier(x)) {
            cout << "Identifier" << endl;
        }
        else if(isConstant(x)) {
            cout << "Constant" << endl;
        }
        else {
            cout << "Invalid" << endl;
        }
        
    }
    

    








    ////taking input from the keyboard and to check individual in problem no 8
    // string str;
    // while(true)
    // {
    //    cout << "Enter the Expression how to check : " << endl;
    //    cin >> str;
    //    if(str == "1") break;
    //    else {
    //         if(iskeyword(str)){
    //             cout << "Keyword" << endl;
    //         }
    //         else cout << "Invalid" << endl;
    //    }
    // }
    return 0;
}
