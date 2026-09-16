#include<bits/stdc++.h>
using namespace std;

        vector <int> search(string pat, string txt) {
         int m= pat.length();
         int n= txt.length();

         //prime for rabin carp algorithm
         int p=7; int  mod= 101;
  int hashpat=0; int hashtext=0;
int pright=1;int pleft=1;
for(int i=0; i<m; i++){
    hashpat+=((pat[i]-'a'+1)*pright)%mod;
    hashtext+= ((txt[i]-'a'+1)*pright)%mod;
    pright= (pright *p)%mod;
}


vector<int>ans;

for(int i=0; i<=n-m; i++){
    if(hashpat==hashtext){
        if(txt.substr(i,m)==pat)
        ans.push_back(i);
    }

    hashtext= (hashtext-((txt[i]-'a'+1)*pleft)%mod  + mod)%mod;

    hashtext= (hashtext+ ((txt[i+m]-'a'+1)*pright)% mod)%mod;

    hashpat= (hashpat*p)%mod;
    pleft= (pleft*p)%mod;
    pright= (pright*p)%mod;
}

         return ans;
}
int main(){
    string txt;
    cin>>txt;
    string pat;
    cin>>pat;

vector<int>res= search(pat, txt);

for(auto & it: res){
    cout<<it<<endl;
}
}