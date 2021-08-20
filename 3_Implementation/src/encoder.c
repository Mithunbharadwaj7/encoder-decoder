#include "digital.h"
int encoder(int n)
{
    if(n==1)
    {
        int A,B,Y;
        printf("Enter inputs (binary values 0 or 1) : ");
        scanf("%d%d",&A,&B);
        Y=(!A)|B;
        printf("Y=%d\n",Y);
        return 1;
    }
    else if(n==2)
    {
        int Y0,Y1,X0,X1,X2,X3;
        printf("Enter 4 input values (binary values 0 or 1) : ");
        scanf("%d%d%d%d",&X0,&X1,&X2,&X3);
        Y0=X3|X1;
        Y1=(X3)|X2;
        printf("Y0=%d Y1=%d\n",Y0,Y1);
        return 1;
    }
    else if(n==3)
    {
        int Y0,Y1,Y2,X0,X1,X2,X3,X4,X5,X6,X7;
        printf("Enter eight input values (binary values 0 or 1) : ");
        scanf("%d%d%d%d%d%d%d%d",&X0,&X1,&X2,&X3,&X4,&X5,&X6,&X7);
        Y0=X1|X3|X5|X7;
        Y1=X2|X3|X6|X7;
        Y2=X4|X5|X6|X7;
        printf("Y0=%d Y1=%d Y2=%d\n",Y0,Y1,Y2);
        return 1;
    }
    else
    {
        printf("You entered wrong choice\n");
        return 0;
    }
}