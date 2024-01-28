#include<bits/stdc++.h>
using namespace std;

bool isFloatVariable(string str) {
    bool mark = true;

    if(!(tolower(str[0]) >= 'a' and tolower(str[0]) <= 'h') or (tolower(str[0]) <= 'o' and tolower(str[0]) >= 'z')) {
        mark = false;
    }
    int length = str.length();
    for(int i = 1; i < length; i++) {
        if(!((tolower(str[i]) >= 'a' and tolower(str[i]) <= 'z') or (str[i] >= '0' and str[i] <= '9'))) {
            mark = false;
            break;
        }
        else {
            mark = true;
            continue;
        }
    }
    return mark;
}

bool isFloatNumber(string str) {
    int count = 0;
    int position = -1;
    bool mark = true;
    int length = str.length();
    for(int i = 0;  i < length ; i++) {
        if(str[i] == '.') {
            count++;
            position = i;
        }
    }
    if(count != 1) {
        mark = false;
    }
    if(position == 0) {
        mark = false;
    }
    if(position != (length-3)) {
        mark = false;
    }
    if(position == 1) {
        if(!(str[0] >= '0' and str[0] <= '9')) {
            mark = false;
        }
    }
    else {
        if(!(str[0] >= '0' and str[0] <= '9')) {
            mark = false;
        }
        for(int i = 1; i < position; i++) {
            if(!(str[i] >= '0' and str[i] <= '9')) {
            mark = false;
        }
        
    }
    }
    for(int i = position + 1 ; i < length; i++) {
        if(!(str[i] >= '0' and str[i] <= '9')) {
            mark = false;
        }
    }
    return mark;

}

bool isDoubleNumber(string str) {
    int count = 0;
    int position = -1;
    bool mark = true;
    int length = str.length();
    // cout << length << endl;
    for(int i = 0;  i < length ; i++) {
        if(str[i] == '.') {
            count++;
            position = i;
        }
    }
    // cout << count << endl;
    // cout << position << endl;
    if(count != 1) {
        mark = false;
    }
    if(position == 0) {
        mark = false;
    }
    if(position == 1) {
        if(!(str[0] >= '0' and str[0] <= '9')) {
            mark = false;
        }
    }
    else {
        if(!(str[0] >= '0' and str[0] <= '9')) {
            mark = false;
        }
        for(int i = 1; i < position; i++) {
            if(!(str[i] >= '0' and str[i] <= '9')) {
            mark = false;
        }
        
    }
    }
    for(int i = position + 1 ; i < length; i++) {
        if(!(str[i] >= '0' and str[i] <= '9')) {
            mark = false;
        }
    }
    return mark;

}


int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt","w",stdout);

    string input;
    getline(cin,input);

    if(isFloatVariable(input)) {
        cout << "Float Variable " << endl;
    }
    else if(isFloatNumber(input)) {
        cout << "Float number" << endl;
    }
    else if(isDoubleNumber(input)) {
        cout << "Double Number" << endl;
    }
    else {
        cout << "Invalid Variable" << endl;
    }


   return 0;
}
