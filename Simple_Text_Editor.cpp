#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


int main() {
      string S ="";
      stack<string>last;
      int q,t;
      cin>>q;
      for(int i=0;i<q;i++){
          cin>>t;
          if(t==1){
              last.push(S);
              string w;
              cin>>w;
              S=S+w;
          }
          else if(t==2){
              
              last.push(S);
              int k;
              cin>>k;
              S.resize(S.size()-k);
          }
          
          else if(t==3){
              int k;
              cin>>k;
              cout<<S[k-1]<<"\n";
          }
          else if(t==4){
              S=last.top();
              last.pop();
          }
      }
    return 0;
}
