/*
 * Complete the 'miniMaxSum' function below.
 *
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

void miniMaxSum(vector<int> arr) {
    int64_t max = arr[i], min = arr[i], sum=arr[i];

    // Input shape => Five positive integers 
    for(int i=1; i<5; i++)
    {
        sum+=arr[i];
        if(arr[i] > max) max = arr[i];
        if(arr[i] < min) min = arr[i];
    }
    cout << (sum-max) << ' ' << (sum-min);
}
