#include <iostream>
using namespace std;


void findFrequency(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] == -1) continue;  

        int freq = 1;  

        
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] == arr[i]) {
                freq++;
                arr[j] = -1;  
            }
        }

        //cout << arr[i] << ": " << freq << " times\n";
        
        sum = sum + freq ;
        
    }
    cout<< sum<<endl;
    
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << "Frequency of elements in the array:\n";
    findFrequency(arr, n);

    return 0;
}
