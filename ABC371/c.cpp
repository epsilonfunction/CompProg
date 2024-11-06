
#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

int main () {

    int N, Mg, Mh, v1, v2, u, v;
    
    cin >> N;
    vector<vector<int>> cost(N, vector<int>(N, 0));
    vector<vector<int>> G_conn(N, vector<int>(N, 0));
    vector<vector<int>> H_conn(N, vector<int>(N, 0));

    cin >> Mg;
    for (int i = 0; i < Mg; i++) {
        cin >> v1 >> v2;
        u = max(v1,v2);
        v = min(v1,v2);
        G_conn[u][v] = 1;
    }

    cin >> Mh;
    for (int i = 0; i < Mg; i++) {
        cin >> v1 >> v2;
        u = max(v1,v2);
        v = min(v1,v2);
        H_conn[u][v] = 1;
    }

    int yen;
    for (int i = 0; i < N; i++) {
        for (int j = i+1; j < N; j++) {

            cin >> yen;
            cost[j][i] = yen;
        }
    }

    int total_cost;

    for (int i = 0; i < N; i++) {
        for (int j = i+1; j < N; j++) {

            cin >> yen;
            cost[j][i] = yen;
        }
    }


}

