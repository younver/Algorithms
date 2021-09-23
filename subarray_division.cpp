#include <bits/stdc++.h>

using namespace std;

int n, chocolate[100], d, m, sum[105], answer;

int main(){
    // Initialization
    answer = 0;
    sum[0] = 0;
    
    scanf("%d", &n);
    
    for(int i=0; i<n; i++){
        scanf("%d", chocolate +i);
    }
    
    scanf("%d%d", &d, &m);
    

    // Algorithm
    for(int i=0; i<n; i++) sum[i+1] = sum[i] + chocolate[i];
    for(int i=0; i<=n-m; i++) if((sum[i+m]-sum[i])==d) answer++;
    
    
    printf("%d", answer);
    
    
    return 0;
}