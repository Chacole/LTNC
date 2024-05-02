void staircase(int n) {
   for (int i = 0; i < n; i ++){
     for (int space = n - i - 1; space != 0; space --){
       cout << " ";
     }
     for (int tabs = 0; tabs <= i; tabs ++){
       cout << "#";
     }
     cout << endl;
   }
}
