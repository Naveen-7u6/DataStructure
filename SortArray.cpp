/*


Qs - GG - https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1


*/    

    int l = 0;
    int h = n - 1;
    int m = 0;
 
    
    while (m <= h) {
        switch (a[m]) {
 
        // If the element is 0
        case 0:
            swap(a[l++], a[m++]);
            break;
 
        // If the element is 1 .
        case 1:
            m++;
            break;
 
        // If the element is 2
        case 2:
            swap(a[m], a[h--]);
            break;
        }
    }
      
        
