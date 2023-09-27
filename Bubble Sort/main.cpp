#include <iostream>
#include <iostream>
#include "BubbleSort.h"
using namespace std;

int main() {
    const int maxSize = 100;
    int size;
    int arr[maxSize];

    cout << "Enter the size of the array (up to " << maxSize << "): ";
    cin >> size;


    //check 
    if (size <= 0 || size > maxSize) { 
        cout << "Invalid array size. Please enter a positive number up to " << maxSize << "." << endl;
        return 1;
    }

  
    //input 
    std::cout << "Enter " << size << " integers:\n";
    for (int i = 0; i < size; i++) {
        cout << "Enter " << i + 1 << "Value :\n";
        std::cin >> arr[i];
    }

    //output
    std::cout << " The sorted array is  array: ";
    for (int i = 0; i < size; i++)
        std::cout << arr[i] << " ";


    BubbleSort1 Sorter; //Make object of class BubbleSorter1
    Sorter.sort(arr, size);

    return 0;
}