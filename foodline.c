#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_LINES 100

// Create a helper function to find the shortest line
int shortest_line_index(int lines[], int n) {
	int shortest = 0;
	for (int j = 1; j < n; ++j) {
		if (lines[j] < lines[shortest]) {
			shortest = j;
		}
	}
	return shortest;
}

void solve(int lines[], int n, int m) {
	int shortest;
	for (int i = 0; i < m; ++i) {
		shortest = shortest_line_index(lines, n);
		printf("%d\n", lines[shortest]);
		lines[shortest]++;
	}
}

int main() {
	int lines[MAX_LINES];
	int n, m, i;
	scanf("%d%d", &n, &m);
	for (i = 0; i < n; ++i) {
		scanf("%d", &lines[i]);
	}
	solve(lines, n, m);
	return 0;
}
