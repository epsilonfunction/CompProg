

#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;



int main () {

    int N,M;
    cin >> N >> M;

    vector<bool> firstbornarray(N, false);
    int idx = 0;

    int order; char gender;

    while (idx < M) {

        cin >> order >> gender;
        if ((firstbornarray[order - 1] == false) && (gender == 'M')) {
            cout << "Yes" << endl;
            firstbornarray[order - 1] = true;
            idx++;
        } else {
            cout << "No" << endl;
            idx ++;
        }

    }

    return 0;
}