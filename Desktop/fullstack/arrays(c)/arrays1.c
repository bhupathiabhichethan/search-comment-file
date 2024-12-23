//printing matrix and some operations on single matrix:
#include<stdio.h>
int main(){
    int i,j;
    int a[100][100];
    int n,sum=0;
    printf("enter the size:");
    scanf("%d",&n);
    printf("enter the  elements of matrix: ");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("the matrix is.....\n ");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
  //addition of all elements in a matrix:
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
          sum=sum+a[i][j];
        }
        printf("\n");
    }
    printf("addition of all elements is %d\n",sum);
    //transpose of a matrix:
    printf("transpose matrix of above matrix is:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d\t",a[j][i]);
            }
            printf("\n");
    } 
    //sum of elements in a row:
    for(i=0;i<n;i++){
        sum=0;
        for(j=0;j<n-i;j++){
            sum=sum+a[i][j];
        }
        printf("sum of elements of %d row is %d\n",i,sum);
    }
    //sum of elements in a column:
    for(i=0;i<n;i++){
        sum=0;
        for(j=0;j<n-i;j++){
            sum=sum+a[j][i];
        }
        printf("sum of elements of %d column is %d\n",i,sum);
    }
    
}