#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
#include<cstdio>
#include<cstring>
using namespace std;

// Function to swap two elements
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

// Partitioning the array on the basis of pivot element
int partition(int array[], int low, int high)
{
    int pivot = array[high];
    int i = low - 1;

    for (int j = low; j < high; j++)
    {
        if (array[j] <= pivot)
        {
            i++;
            swap(array[i], array[j]);
        }
    }
    swap(array[i + 1], array[high]);
    return i + 1;
}

// Recursive function to perform quicksort
void quickSort(int array[], int low, int high)
{
    if (low < high)
    {
        int pivot = partition(array, low, high);
        quickSort(array, low, pivot - 1);
        quickSort(array, pivot + 1, high);
    }
}

// Function to print an array
void printArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

// Test the code
int main()
{
    int array[] = {64, 25, 12, 22, 11};
    int size = sizeof(array) / sizeof(array[0]);
    cout << "Original array: ";
    printArray(array, size);

    quickSort(array, 0, size - 1);
    cout << "Sorted array: ";
    printArray(array, size);
    return 0;
}
