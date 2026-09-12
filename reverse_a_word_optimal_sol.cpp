string reverseWords(string s) {
    int n=s.size();
    reverse(s.begin(), s.end());
    int i=0,j=0,start=0,end=0;
    while(j<n){
        while(j<n && s[j]==' ') j++;
        if(j>=n) break;
        start=i;
        while(j<n && s[j]!=' '){
            s[i]=s[j];
            i++; j++;
        }
        reverse(s.begin()+start, s.begin()+i);
        s[i]=' ';
        i++;
    }
    s.resize(i>0 ? i-1 : 0);
    return s;
}