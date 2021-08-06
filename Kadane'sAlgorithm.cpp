/*

Qs - GG - https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1

*/

 int maxSubarraySum(int arr[], int n){
        int mad = 0 , msf = INT_MIN;

        for(int i = 0 ; i < n ; i++){
            mad = mad + arr[i];
            if(mad < arr[i]){ mad = arr[i];}

            if(mad > msf ){msf = mad ;}
            //cout << msf << endl;
      }
        return msf;
    }
