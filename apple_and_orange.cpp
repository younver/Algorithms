#include <bits/stdc++.h>

using namespace std;

int s,t,a,b,m,n,x;
int apples, oranges;

int main(){
    
    scanf("%d %d\n%d %d\n%d %d\n", &s, &t, &a, &b, &m, &n);
    
    for(int i=0; i<m; i++){
        scanf("%d",&x);
        if(x+a>=s && x+a<=t) apples++;
    }
    for(int i=0; i<n; i++){
        scanf("%d",&x);
        if(x+b>=s && x+b<=t) oranges++;
    }
    
    printf("%d\n%d", apples, oranges);
    return 0;
}
