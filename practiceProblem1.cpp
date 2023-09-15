#include<bits/stdc++.h>
using namespace std;

bool checkotherChar(char x) {
    string s = "-.,:;?";
    bool mark = false;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == x){
            mark = true;
            break;
        }
    }
    return mark;
}


int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    string input;
    getline(cin,input);
    cout << input << endl;
    int word = 0, digit = 0, letter = 0, other = 0;
    char space  = ' ';
    vector < char > letters , digits, others;

    for(int i = 0; i < input.size(); i++) {

        if(input[i] == space) {
            word++;
        }
        else if(checkotherChar(input[i])) {
            other++;
            others.push_back(input[i]);
        }
        else if(isdigit(input[i])) {
            digit++;
            digits.push_back(input[i]);
        }
        else {
            letter++;
            letters.push_back(input[i]);
        }
    }
    cout << ++word << " " << letter << " " << digit << " " << other  << endl;
    cout << "All the letter are : ";
    for(int i = 0; i < letters.size(); i++) {
        if(i == letters.size() - 1) {
            cout << letters[i] << " . " << endl;
            continue; 
        }
        else {
            cout << letters[i] << " , ";
        }
    }

    cout << "\nAll the Digit are : ";
    for(int i = 0; i < digits.size(); i++) {
        if(i == digits.size() - 1) {
            cout << digits[i] << " . " << endl;
            continue; 
        }
        else {
            cout << digits[i] << " , ";
        }
    }
    cout << "\nAll the Other characters are : ";
    for(int i = 0; i < others.size(); i++) {
        if(i == others.size() - 1) {
            cout << others[i] << "  " << endl;
            continue; 
        }
        else {
            cout << others[i] << " , ";
        }
    }
    return 0;
}