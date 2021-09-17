/*
 * Complete the 'staircase' function below.
 *
 * The function accepts INTEGER n as parameter.
 */

void staircase(int n) {
    for(int i=1; i<=n;i++)
        cout << string((n-i),' ') << string((i),'#') << endl;
}