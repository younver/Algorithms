/*
 * Complete the 'diagonalDifference' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts 2D_INTEGER_ARRAY arr as parameter.
 */

int diagonalDifference(vector<vector<int>> arr) {
    int n = arr.size()-1, result=0;

    for (int i=0; i <= n; i++){
        result += arr[i][i] - arr[i][n-i];
    }
    return abs(r);
}
