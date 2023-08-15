// Insert elemnt into an array that is in ascending order
# include <stdio.h>
# include <conio.h>
clrscr();
int main(){
    int i, j, n, num, ar[20];
    printf("\n Enter the size of the array you want:");
    scanf("%d",&n);
    printf("\n Enter the array in ascending order:");
    for (i=0; i<n; i++){
        scanf("%d",&ar[i]);
    }
    printf("Enter the number to be inserted:");
    scanf("%d",&num);
    for ( i = 0; i < n; i++)
    {
        if (ar[i]>num){
            for ( j = n-1; j >= i; j--)
            {
                ar[j+1]=ar[j];
            }
            ar[i]=num;
            break;  
        }
        }
    }
    n=n+1;
    for (i=0;i<n;i++){
        printf("%d",&ar[i]);
    }
    //getch();
    return 0;
    
}