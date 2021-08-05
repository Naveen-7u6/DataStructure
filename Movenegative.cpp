
/*

Qs - GG - https://practice.geeksforgeeks.org/problems/move-all-negative-elements-to-end/0

*/

int temp[n];
 
    // Traversal array and store +ve element in
    // temp array
    int j = 0; // index of temp
    for (int i = 0; i < n ; i++)
        if (arr[i] >= 0 )
            temp[j++] = arr[i];
 
    
 
    // Store -ve element in temp array
    for (int i = 0 ; i < n ; i++)
        if (arr[i] < 0)
            temp[j++] = arr[i];
 
    // Copy contents of temp[] to arr[]
    memcpy(arr, temp, sizeof(temp));
        // Your code goes here
