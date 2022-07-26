#include <bits/stdc++.h>

using namespace std;

string pangrams(string s) {
    bool letters[26];
    for(int i = 0; i < 26; i++){
        letters[i] = false;
    }
    
    for(int i = 0; i < s.size(); i++){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            letters[s[i] - 'A'] = true;
        }
        else if(s[i] >= 'a' && s[i] <= 'z'){
            letters[s[i] - 'a'] = true;
        }
    }
    
    for(int i = 0; i < 26; i++){
        if(!letters[i]) return "not pangram";
    }
    
    return "pangram";
}



int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = pangrams(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
