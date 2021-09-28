#include <bits/stdc++.h>

int n, x, sum[5];

int main(){
    // Initialization
    scanf("%d", &n);
    
    // Algorithm #1
    for(int i=0; i<n; i++){
        std::cin >> x;
        sum[x-1]++;
    }
    
    // Algorithm #2
    // Since we have nothing to do with n
    n = 1;
    for(int i=1; i<5; i++)
        if(sum[i] > sum[n-1])
            n = i+1;
    
    
    printf("%d", n);
    return 0;
}
