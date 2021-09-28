#include <bits/stdc++.h>

using namespace std;

// Since alphabet has 26 letters
// And word contains no more than 10 letters. 
int alphabet[26];
char word[10];

int main() {
    // Run this if you have no idea about array addresses
    //printf("%p\n%p\n%p\n", alphabet, alphabet+1, &alphabet[1]);
    for (int i = 0; i < 26; i++) {
        scanf("%d", alphabet + i);
    }
    
    scanf("%s", word);
    int height=0, width=0;
    
    // While we can talk about word[i]
    for(int i=0; word[i]; i++){
        width++;
        // Comparing ASCII values of height and new letter's height equivalent
        height = max(height, alphabet[word[i] - 'a']);
    }
    
    // 'a' => 97 in ASCII. For more information, mess with this code:
    //printf("%d\n", alphabet['a']);
    printf("%d\n", height*width);
    return 0;
}
