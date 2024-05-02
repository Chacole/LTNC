int palindromeIndex(string s) {
    int l=s.size();
    for (int i=0;i<l/2;i++){
        if (s[i]!=s[l-i-1]){
            if (s[i]==s[l-2-i]&&s[i+1]==s[l-3-i]) return l-i-1;
            else if (s[i+1]==s[l-i-1] && s[i+2]== s[l-i-2]) return i;
            else return i;
        }
    }
    return -1;
}
