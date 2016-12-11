//
//  AnagramDeletions.cpp
//  
//
//  Created by Laura Wieme on 12/11/16.
//  Solution for HackerRank
//
//

#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int number_needed(string a, string b) {
    int A[26],B[26],i;
    for(i=0 ; i< 26 ; i++)
    A[i] = B[i] = 0;
    for(i = 0 ; i< a.length() ; i++)
    A[(int)(a[i] - 'a')]++;
    for(i = 0 ; i< b.length() ; i++)
    B[(int)(b[i] - 'a')]++;
    int deletions = 0;
    for(i=0 ; i< 26 ; i++)
    {
        deletions = deletions + A[i] + B[i] - 2*min(A[i],B[i]);
    }
    return deletions;
}

int main(){
    string a;
    cin >> a;
    string b;
    cin >> b;
    cout << number_needed(a, b) << endl;
    return 0;
}


