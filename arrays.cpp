#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter N: ";
    cin >> n;

    int arr[100];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int sumPozit = 0;
    int numberNeg = 0;
    int min = arr[0], max = arr[0];
    int minIndex = 0, maxIndex = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            sumPozit += arr[i];
        }
        if (arr[i] < 0) {
            numberNeg++;
        }
        if (arr[i] < min) {
            min = arr[i];
            minIndex = i;
        }
        if (arr[i] > max) {
            max = arr[i];
            maxIndex = i;
        }
    }

    cout << "Sum of positives: " << sumPozit << endl;
    cout << "Count of negatives: " << numberNeg << endl;
    cout << "Min: " << min << " (index " << minIndex << ")" << endl;
    cout << "Max: " << max << " (index " << maxIndex << ")" << endl;

    cout << "Multiples of 3 (reverse): ";
    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] % 3 == 0) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;

    return 0;
}