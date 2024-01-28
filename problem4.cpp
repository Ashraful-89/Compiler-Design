#include<bits/stdc++.h>
using namespace std;
bool isIntVariable(string str) {
    bool mark = true;
    if((tolower(str[0]) < 'i' or tolower(str[0]) > 'n')) mark = false;
    else {
        for(int i = 1; i < str.length(); i++) {
            if(((tolower(str[i]) >= 'a' and tolower(str[i] <= 'z')) or (str[i] >= '0' and str[i] <= '9'))) {
                    mark = true;
                    continue;
            }
            else {
                mark = false;
                break;
            }
        }
    }
    return mark;
}
bool isShortIntNumber(string str) {
    int length = str.length();
    bool mark = true;
    if(length > 4 or !(str[0] >= '1' and str[0] <= '9')) {
        mark = false;
    }
    else {
        for(int i = i; i < length; i++) {
            if(str[i] >= 0 and str[i] <= 9) {
                mark = true;
                continue;
            }
            else{
                mark = false;
                break;
            }
        }
    }
    return mark;
}

bool isLongIntNumber(string str) {
    int length = str.length();
    bool mark = true;
    if(!(str[0] >= '1' and str[0] <= '9')) {
        mark = false;
    }
    else {
        for(int i = i; i < length; i++) {
            if(str[i] >= 0 and str[i] <= 9) {
                mark = true;
                continue;
            }
            else{
                mark = false;
                break;
            }
        }
    }
    return mark;
}

int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    string input;
    getline(cin , input);

    if(isIntVariable(input)) {
        cout << "Integer Variable " << endl;
    }
    else if(isShortIntNumber(input)) {
        cout << "ShortInt Number" << endl;

    }
    else if(isLongIntNumber(input)) {
        cout << "Long Int Number " << endl;
    }
    else cout << "Invalid Variable";

    return 0;
}
