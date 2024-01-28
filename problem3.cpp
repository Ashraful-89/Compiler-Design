#include<bits/stdc++.h>
using namespace std;

map<char , string> dept =  {
    {'C' , "Computer Science And Engneering"}
};
map<char, string> year = {
    {'1',"1st Year"},
    {'2',"2nd Year"},
    {'3',"3rd Year"},
    {'4',"4th Year"}
};
map<char, string> semester = {
    {'1',"1st Semester"},
    {'2',"2nd  Semester"}
};

map <char , string> courseName = {
    {'1',"Software Engineering"},
    {'2',"DBMS"},
    {'3',"Web Engineering"},
    {'4',"Compiler Design"},
    {'5',"Engineering Ethics and Environment Protection"},
    {'6',"Communication Engineering"}
};

map <char , string> courseType = {
    {'1',"Theory"},
    {'2',"Lab"}
};
int main() {

    freopen("input.txt" ,"r" ,stdin);
    freopen("output.txt" , "w" , stdout);
    string input;
    getline(cin,input);
    cout << input<< endl;
    cout << dept[input[0]] << ", ";
    cout << year[input[4]] << ", ";
    cout << semester[input[5]] << ", ";
    cout << courseName[input[6]] << ", ";
    cout << courseType[input[7]] << ".";
    return 0;
}

