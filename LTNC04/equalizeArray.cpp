int equalizeArray(vector<int> arr) {
    int j=arr.size(),n=1000000;
    for (int i=0;i<j;i++){
        int sum=0;
        for(int k=0;k<j;k++){
            if(arr[i]==arr[k]) sum++; 
        }
        n=min(n,j-sum);
    }
    return n;
}
