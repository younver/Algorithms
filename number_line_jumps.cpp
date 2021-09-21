#include <bits/stdc++.h>

using namespace std;

int x1,x2,v1,v2;
string answer;

/*
Explaining (x2 - x1) % (v1 - v2) == 0

4 6 8 10 12  <- K2
0 3 6  9 12  <- K1
4 3 2  1  0  <- Difference
1 1  1  1   <- Rate
 
10 12 14 16 18  <- K2
3  7 11 15 19  <- K1
7  5  3  1 -1  <- Difference
2  2  2  2    <- Rate
*/

int main(){
    answer = "NO";
    scanf("%d %d %d %d", &x1, &v1, &x2, &v2);
    
    // Since x1<=x2 given in Constraints
    if(v1>v2 && (x2-x1)%(v1-v2)==0) answer="YES";
    
    cout << answer;
    return 0;
}