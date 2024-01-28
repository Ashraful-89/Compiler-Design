#include<bits/stdc++.h>
using namespace std;
bool isVowel(char x) {
    x = tolower(x);
    if(x == 'a' or x == 'e' or x == 'i' or x == 'o' or x == 'u')
    {
        return true;
    }
    else return false;
}
int main() {

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    vector<string> input ;
    string temp;
    while(cin >> temp) {
        input.push_back(temp);
    }

    vector<char> vowels,consonants;
    vector<string> vowelWord, consonantWord;

    for(int i = 0; i < input.size(); i++) {
        if(isVowel(input[i][0])) {
            vowelWord.push_back(input[i]);
        }
        else if(isalpha(input[i][0])){
            consonantWord.push_back(input[i]);
        }

        for(int j = 0; j < input[i].size(); j++) {
            if(isVowel(input[i][j])){
                vowels.push_back(input[i][j]);
            }
            else if(isalpha(input[i][j])) {
                consonants.push_back(input[i][j]);
            }
        }

    }

    cout << "Vowel are : " << vowels.size() << endl;
    for(int i = 0; i < vowels.size(); i++) {
        if(i == vowels.size() - 1) {
            cout << vowels[i] << " ";
            continue;
        }
        cout << vowels[i] << ", ";
    }
    cout << endl << endl;

    cout << "Vowel are : " << consonants.size() << endl;
    for(int i = 0; i < consonants.size(); i++) {
        if(i == consonants.size() - 1) {
            cout << consonants[i] << " ";
            continue;
        }
        cout << consonants[i] << ", ";
    }
    cout << endl << endl;
    cout << "The Staring word of vowel are :"  << vowelWord.size() << endl;

    for(int i = 0; i < vowelWord.size(); i++) {
        cout << vowelWord[i] << " ";
    }

    cout << endl << endl;
    cout << "The Staring word of vowel are :"  << consonantWord.size() << endl;

    cout << endl <<" Consonant Word are : " << endl;
    for(int i = 0; i < consonantWord.size(); i++) {
        cout << consonantWord[i] << " ";
    }
    return 0;
}
