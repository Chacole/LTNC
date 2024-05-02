string caesarCipher(string s, int k) {
    int l=s.size();
    for(int i=0;i<l;i++){
        int n=k;
        if(65 <=s[i] && s[i] <=90){
            if (k>26) n=k%26;
            if (s[i]+n>90) s[i]=s[i]-26;
            s[i]=s[i]+n;
        }
        else if(97 <=s[i] && s[i]<=122){
            if (k>26) n=k%26;
            if (s[i]+n>122) s[i]=s[i]-26;
            s[i]=s[i]+n;
        }
    }
    return s;
}
