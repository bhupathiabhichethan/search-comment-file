#include <stdio.h>

int main() {
	// your code goes here
int i,j;
for(i=0;i<4;i++){
    for(j=1;j<4-i;j++){
       printf(" ");
    }
    for(int k=1;k<=(2*i+1);k++){
        printf("*");
    }

    printf("\n");
}
}

