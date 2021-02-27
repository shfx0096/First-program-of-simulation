#include<stdio.h>
main()
{
    int n,i,sum,ia[500],a[500];
    a[1]=0;
    printf("Enter the number of customer: ");
    scanf("%d",&n);
    printf("Enter the Inter arrival time: ");
    for(i=1;i<=n;i++){
        scanf("%d",&ia[i]);
    }
    for(i=2;i<=n;i++){
        a[i]=ia[i]+a[i-1];
    }
    printf("Arrival time: ");
    for(i=1;i<=n;i++){
        printf("%d ",a[i]);
    }

}
