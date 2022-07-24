#include <bits/stdc++.h>

using namespace std;


string timeConversion(string s) {

string hours = s.substr(0,2);
string min=s.substr(3,2);
string sec=s.substr(6,2);
string time=s.substr(8,2);
if(time=="AM")
{
    if(hours=="12")
    {
            hours="00";  
    }
}
else 
{
    if(hours!="12"){
    int a=stoi(hours);
        a+=12;
        hours=to_string(a);
    }
}
return hours+":"+min+":"+sec;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
