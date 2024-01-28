#include<bits/stdc++.h>
using namespace std;

bool charVariable(string str) {
    bool mark = true;
    int length = str.length();
    if(length < 4) {
        mark = false;
    }
    if(str[0] != 'c' or str[1] != 'h' or str[2] != '_' or (!(((tolower(str[3]) >= 'a') and tolower(str[3]) <= 'z') or (str[3] >= '0' and str[3] <= '9')))) {
        mark = false;
    }
    else {
        for(int i = 4; i < length; i++) {
           if(!(((tolower(str[i]) >= 'a') and (tolower(str[i]) <= 'z')) or (str[i] >= '0' and str[3] <= '9')))
           {
            mark = false;
           }
        }
    }
    return mark;
}

bool isBinaryVariable(string str) {
    bool mark = true;
    int length = str.length();
    if(length < 4) {
        mark = false;
    }
    if(str[0] != 'b' or str[1] != 'n' or str[2] != '_' or (!(((tolower(str[3]) >= 'a') and tolower(str[3]) <= 'z') or (str[3] >= '0' and str[3] <= '9')))) {
        mark = false;
    }
    else {
        for(int i = 4; i < length; i++) {
           if(!(((tolower(str[i]) >= 'a') and (tolower(str[i]) <= 'z')) or (str[i] >= '0' and str[3] <= '9')))
           {
            mark = false;
           }
        }
    }
    return mark;

}

bool isBinaryNumber(string str) {
    bool mark = true;
    int length = str.length();
    if(length < 2 ) mark = false;
    if(str[0] != '0' and (str[1] != '0' or str[1] != '1')) {
        mark = false;
        // cout << mark << endl;
    }
    else {
        for(int i = 2; i < length; i++) {
        if((str[i] != '0' and str[i] != '1')) {
            mark = false;
            break;
        }
    }
    }
   
    return mark;
}
int main() {
    freopen("input.txt", "r" , stdin);
    freopen("output.txt","w",stdout);

    int t;
    cin >> t;
    
    while(t--) {


        string input;
        cin >> input;
        if(charVariable(input)) {
            cout << "Character Variable" << endl;
        }
        else if(isBinaryVariable(input)) {
            cout << "Binary Variable" << endl;
        }
        else if(isBinaryNumber(input)) {
            cout << "Binary Number" << endl;
        }
        else {
            cout << "Invalid Variable" << endl;
        }

    }
    return 0;
}
