#include <bits/stdc++.h>

using namespace std;


string isValid(string s) {
    if(s.size() ==1 ) return "YES";
    unordered_map<char,int> mp;
    for(auto x : s) mp[x]++;
    vector<int> freq;
    for(auto x : mp) freq.push_back(x.second);
    sort(freq.begin(),freq.end());
    
    int first = freq[0],second=freq[1];
    int last = freq[freq.size() - 1];
    int secondLast = freq[freq.size() - 2];
    
    if(first == last) return "YES";
    if(first==1 && second == last) return "YES";
    if(first == secondLast && last == secondLast+1) return "YES";
    return "NO";
    
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = isValid(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
