#include <bits/stdc++.h>

using namespace std;

int n, k, ar[100], answer;

int main(){
    // Initialization
    answer=0;
    scanf("%d%d", &n, &k);
    for(int i=0; i<n; i++) scanf("%d", ar + i);
    
    
    // Algorithm
    for(int i=0; i<n-1; i++) 
        for(int j=i+1; j<n; j++) 
            if((ar[i]+ar[j])%k==0) 
                answer++;

    
    
    printf("%d", answer);
    
    
    return 0;   
}
