//
//  RecursiveFibonacci.cpp
//  
//
//  Created by Laura Wieme on 12/11/16.
//  Solution for HackerRank
//
//

#include <iostream>

using namespace std;

int fibonacci(int n) {
    // Complete the function.
    int result = 0;
    if(n == 0)
    return 0;
    else if(n == 1)
    return 1;
    else {
        result = fibonacci(n-1) + fibonacci(n-2);
    }
    return result;
}
int main() {
    int n;
    cin >> n;
    cout << fibonacci(n);
    return 0;
}
