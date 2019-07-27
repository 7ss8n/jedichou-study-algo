/////////////////////////////////////////////////////////
// File: ACM_L001.cc
// Description title: 抽签
// Description detail:
//   你的朋友提议玩一个游戏：将写有数值的n个纸片放入口袋中，
//   你可以从口袋中抽取4次纸片，每次记下纸片上的数字后都将
//   其放回口袋中。如果这4个数字的和是m，就是你赢，否则就是
//   你的朋友赢。你挑战了好几回，结果一次也没有赢过，于是
//   怒而撕破口袋，去除所有纸片，检查自己是否真的有赢的可能性。
//   请你编写一个程序，判断当纸片上所写的数字是k1,k2,k3,...
//   时，是否存在抽取4次和为m的方案。如果存在，输出YES；否
//   则输出No。
// Limitation:
//   1 <= n <= 50
//   1 <= m <= 10^8
//   1 <= k(i) <= 10^8
// Case 1
//   n = 3
//   m = 10
//   k = (1, 3, 5)
//   output: Yes {1,1,3,5}
// Case 2
//   n = 3
//   m = 9
//   k = (1, 3, 5)
//   output: No
/////////////////////////////////////////////////////////

#include <cstdio>

const int MAX_N = 50;

int main() {
	int n, m, k[MAX_N];

	// get parameters
	scanf("%d %d", &n, &m);
	for (int i=0; i < n; i++) {
		scanf("%d", &k[i]);
	}

	// process result
	bool f = false;

	// process. (Jedi: ugly style)
	for (int a = 0; a < n; a++) {
		for (int b = 0; b < n; b++) {
			for (int c = 0; c < n; c++) {
				for (int d = 0; d < n; d++) {
					if ((k[a] + k[b] + k[c] + k[d]) == m) {
						f = true;
					}
				}
			}
		}
	}

	// output result
	if (f) puts("Yes");
	else puts("No");

	return 0;
}
