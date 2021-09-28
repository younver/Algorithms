#include <vector>
#include <iostream>
using namespace std;

int main() {
    int row_count, task_count, data_size, current_value, 
        task_row, task_index;
    
    // Assign first input as the amount of data rows and second 
    // input for amount tasks
    cin >> row_count >> task_count;
    
    // Array array, general data
    vector<vector<int>> general_data;
    
    // For each row
    for(int i=0; i < row_count; i++){
        // Assign first char as data_size
        cin >> data_size;
        
        // Integer array, temporary data
        vector<int> temp_data;
        
        // For each element of data
        for(int j=0; j < data_size; j++){
            cin >> current_value;
            
            // Appending each value in input data to our temporary data
            temp_data.push_back(current_value);
        }
        
        // Append temporary datas to general data
        general_data.push_back(temp_data);
    }
    
    // For each task
    for(int l=0; l < task_count; l++){
        cin >> task_row >> task_index;
        cout << general_data[task_row][task_index] << endl;
    }
    
    return 0;
}
