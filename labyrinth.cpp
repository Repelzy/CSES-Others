#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mp make_pair
#define pb push_back
typedef pair<int,int> ii;

const int M = 1e3;
int n,m;
char mat[M][M];
bool vis[M][M];
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0 , -1};
ii start, en;
ii parent[M][M];


bool isok(int xx, int yy){
	if(xx >= 0 && yy >= 0 && xx < n && yy < m && !vis[xx][yy] && mat[xx][yy] != '#'){
		return true;
	}
	return false;
}


void bfs(){
    queue<ii> q;
    q.push(start);
    vis[start.first][start.second] = true;
    while(!q.empty()){
        ii u = q.front();
        q.pop();
        // for directions
        for(int i = 0; i < 4; i++){
            int xx = u.first + dx[i];
            int yy = u.second + dy[i];
            if(isok(xx, yy)){
                vis[xx][yy] = true;
                parent[xx][yy] = u;
                q.push({xx, yy});
            }
        }
    }
}


string get_path(){
	string s = "";
	ii cur = en;
	while(cur != start){
		ii p = parent[cur.first][cur.second];
		if(p.first == cur.first + 1){
			s += 'U';
		}
		else if(p.first == cur.first - 1){
			s += 'D';
		}
		else if(p.second == cur.second - 1){
			s += 'R';
		}
		else if(p.second == cur.second + 1){
			s += 'L';
		}
		cur = p;	
	}
	reverse (s.begin(), s.end());
	return s;
}


int main(){
	IOS;
	cin >> n >> m;
	memset(vis, false, sizeof(vis));
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> mat[i][j];
			if(mat[i][j] == 'A'){
				start = {i,j};
			}
			if(mat[i][j] == 'B'){
				en = {i,j};
			}
		}
	}	
	bfs();
	if(!vis[en.first][en.second]){
		cout << "NO";
	}
	else{
		string path = get_path();
		cout << "YES\n";
		cout << path.size() << "\n";
		cout << path;
	}
	return 0;
}
