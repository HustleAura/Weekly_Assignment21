// Majority Element - https://practice.geeksforgeeks.org/problems/majority-element-1587115620/1#

int majorityElement(int a[], int n) {
        int count = 0, curr = a[0];
        for(int i=0;i<n;i++) {
            if(a[i] == curr) count++;
            else count--;
            
            if(count < 0) {
                count = 1;
                curr = a[i];
            }
        }
        
        count = 0;
        for(int i=0;i<n;i++) if(a[i] == curr) count++;
        if(count > n/2) return curr;
        else return -1;
    }
