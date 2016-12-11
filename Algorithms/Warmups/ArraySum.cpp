//
//  ArraySum.cpp
//  
//
//  Created by Laura Wieme on 12/11/16.
//  Solution for HackerRank
//
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int sumElements(vector<int> arr)
{
    int sum = 0;
    for(int arr_i = 0;arr_i < arr.size();arr_i++){
        sum += arr[arr_i];
    }
    return sum;
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
        cin >> arr[arr_i];
    }
    int sum = sumElements(arr);
    cout << sum;
    return 0;
}
