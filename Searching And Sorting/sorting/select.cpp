#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <time.h>

using namespace std;

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        int minIndex = i;
        for (int j = i+1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

void displayArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void userInput(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

void randomInput(int arr[], int n) {
    srand(time(0));
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100;
    }
    displayArray(arr, n);
}

bool fileInput(int arr[], int &n, const string &filename) {
    ifstream file(filename);
    if (!file) {
        return false;
    }
    n = 0;
    while (file >> arr[n]) {
        n++;
    }
    file.close();
    displayArray(arr, n);
    return true;
}

int main() {
    int arr[100], n = 0;
    int choice;
    clock_t start, end;
    double cpu_time_used;
    
    cout << "Choose input method:\n";
    cout << "1. User Input\n";
    cout << "2. Random Input\n";
    cout << "3. File Input\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice) {
        case 1: {
            cout << "Enter the number of elements: ";
            cin >> n;
            userInput(arr, n);
            break;
        }
        case 2: {
            cout << "Enter the number of elements: ";
            cin >> n;
            randomInput(arr, n);
            break;
        }
        case 3: {
            string filename;
            cout << "Enter the file name: ";
            cin >> filename;
            if (!fileInput(arr, n, filename)) {
                return 1;
            }
            break;
        }
        default:
            return 1;
    }

    start = clock();  // Start time

    selectionSort(arr, n);

    end = clock();  // End time
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;

    cout << "Sorted array: ";
    displayArray(arr, n);

    cout << "Time taken to sort: " << cpu_time_used << " seconds" << endl;

    return 0;
}
