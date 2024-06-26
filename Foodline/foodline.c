/*
After many years of continuous warfare, the country of Collea was left in shambles. This has caused food shortages and famines all across the country. In an attempt to distribute the little food that was produced and prevent food hoarding, the Collean government limited the amount of food that any one person can buy. Soon, Collean citizens are forced to wait in long lines in order to obtain the food they needed. There are currently N such food lines in the city of Lachtin, the i th of which has a i people in it. M people are going to enter one of the lines in the next hour, where they each enter the shortest line they see. Since Phreia plans to enter the line, she wants to know the length of the line that each person decides to join.
Constraints

1 ≤ N ≤ 100
1 ≤ a i ≤ 100 for i in 1 , 2 , … , N
1 ≤ M ≤ 100
Input Specification

The first line contains two positive integers, N and M .
The second line contains N positive integers, a 1 , a 2 , … , a N .
Output Specification

Print M lines, the i th of which being the length of the line that the i th person joined.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_LINES 100

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
