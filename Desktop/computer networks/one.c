//dijkstra's shortrest path with path:
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define INFINITY 1000
#define MAX 10

typedef struct {
    int length;
    int pre;
    char label;
} state;

void shortest_path(int s, int d, int dist[MAX][MAX], int n, int path[]) {
    state stat[n];
    int i, k = s, j, min;

    for (i = 0; i< n; i++) {
        stat[i].length = INFINITY;
        stat[i].pre = -1;
        stat[i].label = 't';
    }
    stat[k].length = 0;

    do {
        for (i = 0; i< n; i++) {
            if (stat[i].label == 't' &&dist[k][i] != 0) {
                if (stat[i].length> stat[k].length + dist[k][i]) {
                    stat[i].length = stat[k].length + dist[k][i];
                    stat[i].pre = k;
                }
            }
        }
        stat[k].label = 'p';

        min = INFINITY;
        for (i = 0; i< n; i++) {
            if (stat[i].label == 't' && stat[i].length < min) {
                min = stat[i].length;
                k = i;
            }
        }
    } while (k != d);

//     if (min == INFINITY) {
// printf("No path exists between %d and %d.\n", s, d);
//         return;
//     }

    k = d;
    i = 0;
    while (k != s) {
        path[i] = k;
        k = stat[k].pre;
        i++;
    }
    path[i] = s;

printf("\nThe shortest path from %d to %d :", s, d);
    for (j = i; j >= 0; j--) {
printf("%d", path[j]);
        if (j != 0)
printf(" --> ");
    }
printf("\n");
}

int main() {
    int n, i, j;
printf("Enter the number of nodes: ");
scanf("%d", &n);

    int dist[n][n], path[n], k, p;
printf("Enter the upper triangular matrix (use 0 for no connection):\n");

    for (i = 0; i< n; i++) {
        for (j = i + 1; j < n; j++) {
scanf("%d", &dist[i][j]);
        }
    }

    for (i = 0; i< n; i++) {
        for (j = 0; j < n; j++) {
            if (i == j) {
dist[i][j] = 0;
            } else if (j <i) {
dist[i][j] = dist[j][i];
            }
        }
    }

printf("\nThe matrix is:\n");
    for (i = 0; i< n; i++) {
        for (j = 0; j < n; j++) {
printf("%d ", dist[i][j]);
        }
printf("\n");
    }

printf("Enter the source and destination: ");
scanf("%d %d", &k, &p);

shortest_path(k, p, dist, n, path);

    return 0;
}