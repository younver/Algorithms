#include <bits/stdc++.h>

using namespace std;

int n1, n2, answer;

int main(){
    scanf("%d %d", &n1, &n2);
    answer = 0;
    int array1[n1], array2[n2];
    
    for(int i=0; i<n1; i++){
        scanf("%d ", &array1[i]);
    }    
    
    for(int i=0; i<n2; i++){
        scanf("%d ", &array2[i]);
    }
    
    for(int x=1; x<=100; x++){
        bool flag=1;
        
        for(int i=0; i<n1; i++) if(x%array1[i]!=0) flag=0;
        for(int i=0; i<n2; i++) if(array2[i]%x!=0) flag=0;
        
        if(flag) answer++;
    }
    
    printf("%d", answer);
    return 0;
}
