#include <bits/stdc++.h>
using namespace std;

const int N = 8;

bool reserved[N][N];
vector<bool> rows_taken(N);
vector<bool> diag1(2 * N - 1);
vector<bool> diag2(2 * N - 1);

int valid = 0;

void search(int c = 0) {
    if (c == N) {
        valid++;
        return;
    }
    for (int i = 0; i < N; i++) {
        bool row_op = !rows_taken[i];
        bool diag_op = !diag1[i + c] && !diag2[i - c + N - 1];
        if (!reserved[i][c] && diag_op && row_op) {
            rows_taken[i] = diag1[i + c] = diag2[i - c + N - 1] = true;
            search(c + 1);
            rows_taken[i] = diag1[i + c] = diag2[i - c + N - 1] = false;
        }
    }
}

int main() {
    for (int i = 0; i < N; i++) {
        string row;
        cin >> row;
        for (int c = 0; c < N; c++) {
            reserved[i][c] = row[c] == '*';
        }
    }
    search();
    cout << valid << endl;

    return 0;
}

