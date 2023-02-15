#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void binarySearch(int a[], int key,int n){
    int lo = 0, hi = n - 1;
    int mid;
    while (hi - lo > 1) {
        int mid = (hi + lo) / 2;
        if (a[mid] < key) {
            lo = mid + 1;
        }
        else {
            hi = mid;
        }
    }
    if (a[lo] == key) {
        cout << "Found"
             << " At Index " << lo << endl;
    }
    else if (a[hi] == key) {
        cout << "Found"
             << " At Index " << hi << endl;
    }
    else {
        cout << "Not Found" << endl;
    }
}
int main()
{
    int v[] = { 1, 3, 4, 5, 6 };
    binarySearch(v, 1, 6);
    binarySearch(v, 4, 6);
    return 0;
}