/**

This is a simple solution to the left rotation problem. It's not the most efficient and it fails on Test Case 8 of 
Hackerrank due to timeout. For a more efficient solution check left-rotation-efficient.cpp

**/


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

void rotateLeftOnce(int* arr, int n)
{
    int first = arr[0];
    for(int i=0; i<n-1; i++)
    {
        arr[i] = arr[i+1];
    }
    arr[n-1] = first;
}

void rotate(int* arr, int n, int d)
{
    for(int i=0; i<(d % n); i++)
    {
        rotateLeftOnce(arr, n);    
    }
}

void readArr(int* arr, int n)
{
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
}


void printArr(int* arr, int n)
{
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";    
    }
    cout << endl;
}

int main() {
    int n, d;
    cin >> n;
    cin >> d;
    int* arr = new int[n];
        readArr(arr, n);
    rotate(arr, n, d);
    printArr(arr, n);
    delete arr;
    return 0;
}
