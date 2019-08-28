#include <bits/stdc++.h>

using namespace std;

long distances[401][401];
int graph[401][401];

void floyd_warshall(int N) {
    for (int i = 1; i <= N; ++i) {
        for (int j = 1; j <= N; ++j) {
            distances[i][j] = graph[i][j];
        }
    }
    for (int k = 1; k <= N; ++k) {
        for (int i = 1; i <= N; ++i) {
            for (int j = 1; j <= N; ++j) {
                if (distances[i][j] > distances[i][k] + distances[k][j]) {
                    distances[i][j] = distances[i][k] + distances[k][j];
                }
            }
        }
    }
}

vector <int> floyd(int n, vector<vector<int>> edges, vector<vector<int>> queries) {
    // Complete this function
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            graph[i][j] = i == j ? 0 : INT_MAX;
        }
    }
    for (auto i = 0u; i < edges.size(); ++i) {
        graph[edges[i][0]][edges[i][1]] = edges[i][2];
    }

    floyd_warshall(n);

    vector<int> result(queries.size());
    for (auto i = 0u; i < queries.size(); ++i) {
        int d = distances[queries[i][0]][queries[i][1]];
        result[i] = d == INT_MAX ? -1 : d;
    }
    return result;
}

int main() {
    int n;
    int m;
    cin >> n >> m;
    vector< vector<int> > edges(m,vector<int>(3));
    for (int edges_i = 0; edges_i < m; edges_i++) {
       for(int edges_j = 0; edges_j < 3; edges_j++){
          cin >> edges[edges_i][edges_j];
       }
    }
    int q;
    cin >> q;
    vector< vector<int> > queries(q,vector<int>(2));
    for (int queries_i = 0; queries_i < q; queries_i++) {
       for (int queries_j = 0; queries_j < 2; queries_j++) {
          cin >> queries[queries_i][queries_j];
       }
    }
    vector <int> result = floyd(n, edges, queries);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? "\n" : "");
    }
    cout << endl;


    return 0;
}
