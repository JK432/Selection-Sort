#include <stdio.h>
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selectionsort(int ar[],int n){
  int i, j ,min;
  for( i=0;i<n-1;i++){
      min=i;
    for(j=i+1;j<n;j++){
      if(ar[j]<ar[min])
        min=j;
    }
    swap(&ar[min], &ar[i]);
    
  }
}

int main(){
  int ar[100],n;
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    scanf("%d",&ar[i]);}
  printf("Before Sorting: ");
  for(int i=0;i<n;i++){
    printf("%d ",ar[i]);
    }
    printf("\n");
  selectionsort(ar,n);

  printf("After Sorting: ");
 for(int i=0;i<n;i++){
    printf("%d ",ar[i]);
    }
  
  


  }
