string hackerrankInString(string s) {
    string a="hackerrank";
    int l=s.size(),l2=a.size(),n=0,m;
    for (int i=0;i<l2;i++){
        bool check=true;
        for (int j=n;j<l;j++){
            if (a[i]==s[j]) {n=j+1;break;}
            else if (a[i]!=s[j]&&j==l-1) check=false;
        }
        if (check==false) return "NO";
        m=i;
        if (n>=l) break;
    }
    if(m<l2-1) return "NO";
    return "YES";
}
