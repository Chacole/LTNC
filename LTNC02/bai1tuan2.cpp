int findDigits(int n) {
   int count = 0;
   int origin = n;
   while (n){
       int a = n % 10;
       if ( a != 0 && origin % a == 0){
           count ++;
       }
       n /= 10;
   }
   return count;
}
