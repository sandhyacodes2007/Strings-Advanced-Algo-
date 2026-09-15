#include<bits/stdc++.h>
using namespace std;

string count_and_say(int n){
    if(n==1)return "1";
    // calculate  prev recursively  until you don't get 1
    string prev= count_and_say(n-1);
int l= prev.size();
    int cnt=1;
    string res="";
    //its a 0 indexing 
    for(int i=1; i<l; i++){
if(prev[i]==prev[i-1]){
    cnt++;
}
else{
res+=('0'+cnt);
res+=prev[i-1];
cnt=1;
}
    }
    //for the last digit
    res+=('0'+cnt);
    res+=prev[l-1];



    return res;
}
int main(){
    int n;cin>>n;

    cout<<count_and_say(n)<<endl;
}