// Calculate square of a number without using *, / and pow() - https://www.geeksforgeeks.org/calculate-square-of-a-number-without-using-and-pow/

#include<bits/stdc++.h>
using namespace std;

int special_square(int n) {
    if(n == 1 || n == 0) return n;
    
    int m = n/2;
    if(n&1) return (special_square(m) << 2) + (m << 2) + 1;
    else return (special_square(m) << 2);
}

signed main() {
    int n;
    cin>>n;
    cout<<special_square(n)<<endl;
    return 0;
}
