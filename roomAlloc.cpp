#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	vector<pair<pair<int, int> , int> > tour(n);
	for(int i = 0; i < n; i++){
		cin >> tour[i].first.first >> tour[i].first.second;
		tour[i].second = i;
	}
	sort(tour.begin(), tour.end());
	vector<int>roomAllo(n, -1);
	int room = 1;
	priority_queue<pair<int,int>, vector<pair<int,int> >, greater<pair<int,int> > > rooms;
	for(int i = 0; i < n; i++){
		if(rooms.empty()){
			roomAllo[tour[i].second] = room++;
			rooms.push(make_pair(tour[i].first.second, room -1));
		}
		else{
			if(rooms.top().first < tour[i].first.first){
				roomAllo[tour[i].second] = rooms.top().second;
				pair<int, int> y = rooms.top();
				rooms.pop();
				rooms.push(make_pair(tour[i].first.second, y.second));
			}
			else{
				roomAllo[tour[i].second] = room++;
				rooms.push(make_pair(tour[i].first.second, room-1));
			}			
		}
	}
	cout << room -1 << endl;
	for(int i = 0; i < n; i++) cout << roomAllo[i] << " ";
	
	return 0;
}
