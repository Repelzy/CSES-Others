#include <iostream>
using namespace std;

const int MAX_N = 1000;

int grid[MAX_N][MAX_N];  
int row_num;
int col_num;
bool visited[MAX_N][MAX_N]; 
int curr_size = 0;  

void floodfill(int r, int c, int color){
    if ((r < 0 || r >= row_num || c < 0 || c >= col_num) || 
    grid[r][c] != color || visited[r][c]){
        return;
    }
    visited[r][c] = true;
    floodfill(r, c + 1, color);
    floodfill(r, c - 1, color);
    floodfill(r - 1, c, color);
    floodfill(r + 1, c, color);    
}



int main(){
    cin >> row_num >> col_num;
    for (int i = 0; i < row_num; i++) {
        for (int j = 0; j < col_num; j++) {
            char ch;
            cin >> ch;
            grid[i][j] = ch;
        }
    }

    int room_num = 0;
    for (int i = 0; i < row_num; i++) {
        for (int j = 0; j < col_num; j++) {
            if (grid[i][j] == '.' && !visited[i][j]) {
                floodfill(i, j, grid[i][j]);
                room_num++;
            }
        }
    }
    cout << room_num << endl;
}

