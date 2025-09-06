#include <iostream>
#include <fstream>
#include <ctime>
#include <cstdlib>

using namespace std;

void findMaxMin(int arr[], int low, int high, int &max, int &min) {
    if (low == high) {
        max = min = arr[low];
        return;
    }

    if (high == low + 1) {
        max = (arr[low] > arr[high]) ? arr[low] : arr[high];
        min = (arr[low] < arr[high]) ? arr[low] : arr[high];
        return;
    }

    int mid = (low + high) / 2;
    int left_max, left_min, right_max, right_min;

    findMaxMin(arr, low, mid, left_max, left_min);
    findMaxMin(arr, mid + 1, high, right_max, right_min);

    max = (left_max > right_max) ? left_max : right_max;
    min = (left_min < right_min) ? left_min : right_min;
}

void randomInput(int arr[], int &n) {
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    srand(time(0));
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 1000;
    }

    cout << "Random array generated: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void fileInput(int arr[], int &n) {
    ifstream inputFile("input.txt");
    if (!inputFile) {
        cerr << "Error opening file!" << endl;
        exit(1);
    }

    inputFile >> n;
    for (int i = 0; i < n; i++) {
        inputFile >> arr[i];
    }
    inputFile.close();

    cout << "Array read from file: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void findMaxMinWithTiming(int arr[], int n, int &max, int &min) {
    clock_t start, end;
    double cpu_time_used;

    start = clock();
    findMaxMin(arr, 0, n - 1, max, min);
    end = clock();

    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;

    cout << "Maximum element: " << max << endl;
    cout << "Minimum element: " << min << endl;
    cout << "Execution time: " << cpu_time_used << " seconds" << endl;
}

int main() {
    int choice;
    int arr[1000], n;
    int max, min;

    cout << "Choose input method:\n";
    cout << "1. Random Input\n";
    cout << "2. File Input\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            randomInput(arr, n);
            break;
        case 2:
            fileInput(arr, n);
            break;
        default:
            cout << "Invalid choice!" << endl;
            return 0;
    }

    findMaxMinWithTiming(arr, n, max, min);

    return 0;
}
