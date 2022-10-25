#include <bits/stdc++.h>
#include<iostream>

using namespace std;

// Fills prefix sum array using serial implementation

void scan(int out[], int in[])

{
    out[0] = in[0];

    int n = 8;

    // Adding present element with previous element

    for (int i = 1; i < n; i++){

        out[i] = out[i - 1] + in[i];

    }

}

int main()

{

    int arr[] = {2, 1, 4, 0, 3, 7, 6, 3};

    int n = sizeof(arr) / sizeof(arr[0]);

    int prefixSum[n];

    scan(prefixSum, arr);

    for (int i = 0; i < n; i++){

        cout << prefixSum[i] << " ";

    }

}
