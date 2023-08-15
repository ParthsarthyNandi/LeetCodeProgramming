# include <stdio.h>
int main(){
    int nums[10], i, j, n, target;
    printf("Enter the n:");
    scanf("%d",&n);
    printf("Entter the aarray:");
    for(i=0;i<n;i++){
        scanf("%d",&nums[i]);
    }
    printf("Enter target:");
    scanf("%d",&target);
    for (i=0;i<n;i++){
        for (j=i+1;j<n;j++){
            if (target == nums[i]+nums[j]){
                printf("\n %d,%d",nums[i],nums[j]);
            }
        }
    }
    return 0;
}