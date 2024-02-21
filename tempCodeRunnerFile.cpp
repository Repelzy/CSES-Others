void dfs(int v, int p) {
// 	for (int to : adj[v]) {
// 		if (to != p) {
// 			dfs(to, v);
// 			dp[v][0] += max(dp[to][0], dp[to][1]);
// 		}
// 	}
// 	for (int to : adj[v]) {
// 		if (to != p) {
// 			dp[v][1] = max(dp[v][1], dp[to][0] + 1 + dp[v][0] -
// 			                             max(dp[to][0], dp[to][1]));
// 		}
// 	}
// }