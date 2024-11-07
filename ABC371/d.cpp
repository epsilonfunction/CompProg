
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int binarysearch (vector<int> arr, int val) {

    int l = 0;
    int r = arr.size() - 1;
    int m;

    while (/* condition */ l <= r) {
        /* code */

        m = l + (r-l) / 2; /* Inherent floor division because it is int*/
        if (arr[m] == val) {
            return m;
        } else if (arr[m] > val) {
            r = m - 1;
        } else {
            l = m + 1;
        }
    };

    // if (arr[l] < val) {
    //     return l - 1;
    // } else {
    //     return l;
    // }

    return l;
    
};

int main () {

    int N, Q, idxL, idxR, L, R;

    cin >> N;

    vector<int> loc(N);
    vector<int> pop(N);


    for (int i = 0; i < N; i ++) {
        cin >> loc[i];
    }

    int dummy;

    for (int i = 0; i < N; i ++) {
        cin >> dummy;
        if (i == 0) {
            pop[i] = dummy;
        } else {
            pop[i] = dummy + pop[i-1];
        }
    }

    // for (int i = 0; i < N; i ++) {
    //     cout << loc[i] << " " << pop[i] << endl;
    // }

    cin >> Q;

    for (int i = 0; i < Q; i++) {
        cin >> L >> R;

        idxL = binarysearch(loc,L);
        idxR = binarysearch(loc,R);

        if (loc[idxR] == R) {
            idxR += 1;
        };
        int rowsum;
        // signed int rowsum = 0;
        // for (int j = idxL; j < idxR; j ++) {
        //     rowsum += pop[j];
        //     // cout << pop[j];
        // };

        if (idxL >= idxR) {
            rowsum = 0;
        } else {
            rowsum = pop[idxR] - pop[idxL];
        }


        // cout << rowsum;
        cout << "LeftIndex: " << idxL << " RightIndex: " << idxR << " Sum: " << rowsum << endl;

    }


    return 0;



}

