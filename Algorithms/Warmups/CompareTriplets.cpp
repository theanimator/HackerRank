//
//  CompareTriplets.cpp
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

void calculateScores(vector<int> a,vector<int> b)
{
    int scoreA = 0;
    int scoreB = 0;
    for(int arr_i = 0;arr_i < a.size();arr_i++){
        if (a[arr_i] > b[arr_i])
        ++scoreA;
        else if((a[arr_i] < b[arr_i]))
        ++scoreB;
    }
    cout << scoreA << " " << scoreB;
}

int main(){
    vector<int> a(3);
    vector<int> b(3);
    int a0;
    int a1;
    int a2;
    cin >> a0 >> a1 >> a2;
    a[0] = a0;
    a[1] = a1;
    a[2] = a2;
    int b0;
    int b1;
    int b2;
    cin >> b0 >> b1 >> b2;
    b[0] = b0;
    b[1] = b1;
    b[2] = b2;
    calculateScores(a,b);
    return 0;
}
