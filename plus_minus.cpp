void plusMinus(vector<int> arr) {
    int n = arr.size();
    float pluses=0, zeros=0, minuses;
    
    for(int i=0; i < n; i++){
        if (arr[i]>0) pluses++;
        else if(arr[i]==0) zeros++;
    }
    
    pluses/=n;
    zeros/=n;
    minuses = 1 - (pluses+zeros);
    
    cout << pluses << "\n" << minuses << "\n" << zeros;
}
