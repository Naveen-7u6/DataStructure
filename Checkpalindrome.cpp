/*
Qs - GG - https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1
*/
int isPlaindrome(string S){
        string temp = S;
        int l = S.size();

        for(int i = 0 ; i < l ; i++){
            temp[i] = S[--l];
         }
       int a = 0 , b = 1 ;
       if (temp == S){
         return b;
      }else{
         return a;
      }
