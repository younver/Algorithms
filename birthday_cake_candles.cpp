/*
 * Complete the 'birthdayCakeCandles' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY candles as parameter.
 */

int birthdayCakeCandles(vector<int> candles) {
    int n = candles.size(), max = candles[0], max_candle_amount=1;

    for(int i=1; i<n; i++){
        if(candles[i] > max) 
            max = candles[i];
        
        else if(candles[i] == max)
            max_candle_amount++;
    }
    return max_candle_amount;
}