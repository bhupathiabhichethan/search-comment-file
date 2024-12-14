#include <stdio.h>
#include <limits.h> // For INT_MAX
#define INF 100000
#define NUL -1

struct dist_vector {
    int dist;
    int next_hop;
};

int main() {
    int n;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    int i, j, k, changed = 0, t = 0;
    struct dist_vector a[n][n];

    // Initialize the routing table
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i == j) {
                a[i][j].dist = 0;
                a[i][j].next_hop = i;
            } else {
                a[i][j].dist = INF;
                a[i][j].next_hop = NUL;
            }
        }
    }

    // Input the initial routing tables
      for (i = 0; i< n; i++) {
        for (j = i + 1; j < n; j++) {
			scanf("%d", &a[i][j].dist);	
			   a[i][j].next_hop = j;			
        }
    }

    for (i = 0; i< n; i++) {
        for (j = 0; j < n; j++) {
            if (i == j) {
				a[i][j].dist = 0;
            } else if (j <i) {
				a[i][j].dist= a[j][i].dist;
  				a[i][j].next_hop = j;
            }
        }
    }

    // Make the distance matrix symmetric
    // for (i = 0; i < n; i++) {
    //     for (j = 0; j < n; j++) {
    //         if (a[i][j].dist != INF && i != j) {
    //             a[j][i].dist = a[i][j].dist;
             
    //         }
    //     }
    // }

    // Update until the distance vector routing converges
    do {
        changed = 0;
        printf("\n\nCurrent routing tables at time %d:\n", t);
        for (i = 0; i < n; i++) {
            printf("\nRouting table at node %c:\n", 'A' + i);
            for (j = 0; j < n; j++) {
                printf("\tTo node %c: dist = %d, next hop = %c\n", 'A' + j, a[i][j].dist, (a[i][j].next_hop == NUL) ? '_' : 'A' + a[i][j].next_hop);
            }
        }

        // Distance vector update
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                if (i != j) {
                    for (k = 0; k < n; k++) {
                        if (a[i][j].dist > a[i][k].dist + a[k][j].dist) {
                            a[i][j].dist = a[i][k].dist + a[k][j].dist;
                            a[i][j].next_hop = a[i][k].next_hop;
                            changed = 1;
                        }
                    }
                }
            }
        }
        t++;
    } while (changed != 0);

    // Print the final routing tables
    printf("\n\nThe FINAL ROUTING TABLES:\n");
    for (i = 0; i < n; i++) {
        printf("\nRouting table at node %c:\n", 'A' + i);
        for (j = 0; j < n; j++) {
            printf("\tTo node %c: dist = %d, next hop = %c\n", 'A' + j, a[i][j].dist, (a[i][j].next_hop == NUL) ? '-' : 'A' + a[i][j].next_hop);
        }
    }

    return 0;
}
