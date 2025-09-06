#include<iostream>
#include<fstream>
#include<cstdlib> // For rand() and srand()
#include<ctime>   // For time() to seed the random generator and measure execution time
using namespace std;

// Merge function
void merge(int arr[], int s, int e, int mid) {
    int n1 = mid - s + 1;
    int n2 = e - mid;

    int a[n1], b[n2];

    for (int i = 0; i < n1; i++) {
        a[i] = arr[s + i];
    }
    for (int i = 0; i < n2; i++) {
        b[i] = arr[mid + 1 + i];
    }

    int i = 0, j = 0, k = s;
    while (i < n1 && j < n2) {
        if (a[i] < b[j]) {
            arr[k++] = a[i++];
        } else {
            arr[k++] = b[j++];
        }
    }

    while (i < n1) {
        arr[k++] = a[i++];
    }

    while (j < n2) {
        arr[k++] = b[j++];
    }
}

// Merge Sort function
void mergeSort(int arr[], int s, int e) {
    if (s < e) {
        int mid = s + (e - s) / 2;
        mergeSort(arr, s, mid);      // Sort first half
        mergeSort(arr, mid + 1, e);  // Sort second half
        merge(arr, s, e, mid);       // Merge sorted halves
    }
}

// Function for user-defined input
void userDefinedInput(int arr[], int n) {
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

// Function for random input
void randomInput(int arr[], int n) {
    srand(time(0)); // Seed for random number generation
    cout << "Generating random array: ";
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100; // Generate random values between 0 and 99
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Function to input array values from a file
void fileInput(int arr[], int &n) {
    ifstream file("input.txt");
    if (!file) {
        cout << "Error: Could not open file." << endl;
        return;
    }
    
    int i = 0;
    while (file >> arr[i] && i < n) {
        i++;
    }
    n = i; // Update the size of the array based on file content
    file.close();
    cout << "Array loaded from file: ";
    for (int i = 0; i < n; i++) {
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
        case 3:
            cout << "Enter the maximum size of the array: ";
            cin >> n;
            fileInput(arr, n);
            break;
        default:
            cout << "Invalid choice. Exiting program.";
            return 1;
    }

    // Display the array before sorting
    cout << "Array before sorting: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Measure the time of the merge sort execution
    clock_t start, end;
    start = clock(); // Start timer

    // Perform merge sort
    mergeSort(arr, 0, n - 1);

    end = clock(); // Stop timer
    double time_taken = double(end - start) / CLOCKS_PER_SEC; // Calculate elapsed time

    // Display the sorted array
    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Display execution time
    cout << "Execution time: " << time_taken << " seconds" << endl;

    return 0;
}
