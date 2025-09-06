#include<iostream>
#include<cstdlib> // For rand() and srand()
#include<ctime>   // For time() to seed the random generator and measure execution time
using namespace std;

int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // Pivot element (choose the last element as pivot)
    int i = low - 1;       // Index of the smaller element

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++; // Increment index of the smaller element
            swap(arr[i], arr[j]); // Swap arr[i] and arr[j]
        }
    }
    swap(arr[i + 1], arr[high]); // Move pivot to the correct position
    return i + 1; // Return the partitioning index
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high); // Partitioning index

        // Recursively sort elements before and after partition
        quickSort(arr, low, pi - 1);  // Sort elements before partition
        quickSort(arr, pi + 1, high); // Sort elements after partition
    }
}

void userDefinedInput(int arr[], int n) {
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

void randomInput(int arr[], int n) {
    srand(time(0)); // Seed for random number generation
    cout << "Generating random array: ";
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100; // Generate random values between 0 and 99
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[1000]; // Assuming a max size of 100
    int n;        // Size of the array
    int choice;

    cout << "Choose input method:\n";
    cout << "1. User-defined input\n";
    cout << "2. Random values\n";
    cout << "3. Input from file\n";
    cout << "Enter your choice (1/2/3): ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Enter the size of the array: ";
            cin >> n;
            userDefinedInput(arr, n);
            break;
        case 2:
            cout << "Enter the size of the array: ";
            cin >> n;
            randomInput(arr, n);
            break;
        default:
            cout << "Invalid choice. Exiting program.";
            return 1;
    }

    cout << "Array before sorting: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    clock_t start, end;
    start = clock(); // Start timer

    quickSort(arr, 0, n - 1);

    end = clock(); // Stop timer
    double time_taken = double(end - start) / CLOCKS_PER_SEC; // Calculate elapsed time

    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Execution time: " << time_taken << " seconds" << endl;

    return 0;
}
