#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



string caesarCipher(string s, int k) {
    

    
    for(int i =0;i<s.size();i++){
        
        if(s[i] > 'z' || s[i] < 'A' || (s[i] > 'Z' && s[i] < 'a')) 
            continue;
        if(s[i] + (k%26) > 'z' || (s[i] + (k%26) > 'Z' && s[i] <= 'Z')){
            
            s[i] = s[i]-26 + (k%26);
            
        }
        else{
            s[i]+=k%26;
        }
    }
       
        
    return s;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string s;
    getline(cin, s);

    string k_temp;
    getline(cin, k_temp);

    int k = stoi(ltrim(rtrim(k_temp)));

    string result = caesarCipher(s, k);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
