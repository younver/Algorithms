#include <bits/stdc++.h>

using namespace std;

int n, answer[2];

int main(){
    cin >> n;
    
    int scores[n];
    for (int i=0; i<n; i++) {
        cin >> scores[i];
    }
    
    int max=scores[0], min=scores[0];
    for(int i=1; i<n; i++){
        
        if(scores[i]>max){
            max = scores[i];
            answer[0]++;
        }
        else if(scores[i]<min){
            min = scores[i];
            answer[1]++;
        }
    }
    
    
    printf("%d %d ", answer[0], answer[1]);
    return 0;
}
