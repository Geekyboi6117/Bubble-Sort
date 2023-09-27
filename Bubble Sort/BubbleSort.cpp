#include "BubbleSort.h"


//tricky logic . 90% help from chatgpt but now i got it.

void BubbleSort1::sort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) { // because after each loop one element is sorted so we itereate it to size-1
        for (int j = 0; j < size - i - 1; j++) {// dont know why (chatgpt says because we are comparing arr[j] with arr[j+1] dont get it
            if (arr[j] > arr[j + 1]) { // this checks if 1st element is greater them 2nd if them replace them
                int temp = arr[j];// simple just we did 1n 1st semester fibonacci sequence . temp ma dalo or temp ki valuse sa replace kar do 
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
