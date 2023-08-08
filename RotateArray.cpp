//https://www.codingninjas.com/studio/problems/rotate-array_1230543



#include <iostream>
#include <deque>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    deque<int> arr(N);
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    
    int k;
    cin >> k;
    
    deque<int> newDeque;
    
    // Rotate the elements by moving the last k elements to the front of newDeque
    for (int i =k; i < N; i++) {
       newDeque.push_back(arr[i]);
    }
    
    // Move the remaining elements to the back of newDeque
    for (int i = 0; i < k; i++) {
        newDeque.push_back(arr[i]);
    }

    // Print the contents of the rotated array
    for (int i = 0; i < N; i++) {
        cout << newDeque[i] << " ";
    }
    
    return 0;
}
