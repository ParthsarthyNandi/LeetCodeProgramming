#include <stdio.h>
#include <conio.h>
int main(){
    int largest, second_largest, i, n, ar[20];
    //clrscr();
    printf("Enter the size of array:");
    scanf("%d", &n);
    printf("Enter the array elements:");
    for(i=0; i<n; i++) 
    {
        scanf("%d",&ar[i]);
    }
    largest = ar[0];
    second_largest = ar[1];
    printf("Checking for the largest and second largest element");
    for (i=0; i<n; i++){
        if (ar[i]>largest){
            largest=ar[i];
        }
    }
    printf("%d",largest);
    for (i=0;i<n;i++){
        if (ar[i]!=largest){
            if (ar[i]>second_largest){
                second_largest = ar[i];
            }
        }
    }
    printf("\n %d",second_largest);
    return 0;
}