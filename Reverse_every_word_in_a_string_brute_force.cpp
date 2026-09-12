#include<bits/stdc++.h>
using namespace std;
string reverse(string s){

    int n= s.size();
    vector<string> ans;
    int i=0;
while(i<n){
    while(i<n &&s[i]==' ')i++;
    if(i>n)break;
    int start=i;
    while(i<n && s[i]!=' ')i++;
int end= i-1;
 ans.push_back(s.substr(start, end-start+1));
}
string res=" ";
for(int i= ans.size()-1; i>=0; i--){
    res +=ans[i];
    if(i!=0)res.push_back(' ');

}
return res;

}
int main(){
    string s;
    cin>>s;
    string k= reverse(s);
    cout<<k<<endl;
}