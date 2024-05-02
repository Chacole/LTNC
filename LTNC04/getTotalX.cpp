int getTotalX(vector<int> a, vector<int> b) {
    int l=a.size(),m=b.size(),n=0;
    for (int i=a[m-1];i<=b[0];i++){
        bool check1=false,check2=false;
        for (int j : a){
            if (i%j!=0) {check1=true;break;}
        }
        if (check1) continue;
        for (int j:b) {
            if (j%i!=0) {check2 =true; break;}
        }
        if (check2) continue;
        if (check1 ==false && check2 == false ) n++;
    }
    return n;
}
