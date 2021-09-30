#include<stdio.h>
#include<stdlib.h>

void input(int *a,int n){
    for(int i=0;i<n;i++){
        printf("element %d ",i);
        scanf("%d",&a[i]);
    }
}

void display(int *a,int n){
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}

void selectionSort(int *a,int n){
    int min,c;
    for(int i=0;i<n-1;i++){
        min=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[min]){
                min=j;
            }
        }
        c=a[i];
        a[i]=a[min];
        a[min]=c;
    }
}

int main(){
    int *a,n;
    printf("Enter the number ");
    scanf("%d",&n);

    a=(int *)malloc(n*sizeof(int));
    input(a,n);
    display(a,n);
    selectionSort(a,n);
    display(a,n);
}
