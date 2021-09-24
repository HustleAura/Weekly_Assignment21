// Valid Palindrome II - https://leetcode.com/problems/valid-palindrome-ii/submissions/

bool validPalindrome(string s) {
        int st = -1,end = -1, n = s.size(),l = 0, r = n-1;
        while(l <= r) {
            if(s[l++] != s[r--]) {
                st = l - 1;
                end = r + 1;
                break;
            }
        }
        
        if(st == -1) return true;
        
        int count = 0;
        l = st;
        r = end;
        while(l <= r) {
            if(s[l] == s[r]) r--;
            else count++;
            
            l++;
        }
        
        if(count == 1) return true;
        count = 0; l = st; r = end;
        while(l <= r) {
            if(s[l] == s[r]) l++;
            else count++;

            r--;
        }
        
        return count == 1;
    }
