/*
 * Complete the 'miniMaxSum' function below.
 *
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

void miniMaxSum(vector<int> arr) {
    int64_t max = arr[0], min = arr[0], sum=0;

    // Input shape => Five positive integers 
    for(int i=0; i<5; i++)
    {
        sum+=arr[i];
        if(arr[i] > max) max = arr[i];
        if(arr[i] < min) min = arr[i];
    }
    cout << (sum-max) << ' ' << (sum-min);
}
