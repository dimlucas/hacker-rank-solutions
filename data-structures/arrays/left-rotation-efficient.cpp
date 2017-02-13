#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


void readAndRotate(int* arr, int n, int d)
{
    for(int i=0; i<n; i++)
    {
        cin >> arr[ (n+i-d) % n ];
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
    readAndRotate(arr, n, d);
    printArr(arr, n);
    delete arr;
    return 0;
}
