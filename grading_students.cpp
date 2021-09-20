#include <bits/stdc++.h>

using namespace std;

int n, i;

int main()
{
    scanf("%d", &n);

    for(int j=0;j<n;j++){
        cin >> i;
        printf("%d\n", (i<38 || i%5<3) ? i : i+(5-i%5));
    }
    return 0;
}