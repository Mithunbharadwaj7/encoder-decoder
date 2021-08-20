#include "digital.h"
int decoder(int n)
{
    if(n==1)
    {
        int A,Y0,Y1;
        printf("Enter input value (binary values) : ");
        scanf("%d",&A);
        Y0=!A;
        Y1=A;
        printf("Y0=%d Y1=%d",Y0,Y1);
        return 1;
    }
    else if(n==2)
    {
        int A,B,Y0,Y1,Y2,Y3;
        printf("Enter two input values (binary values) : ");
        scanf("%d%d",&A,&B);
        Y0=(!A)&(!B);
        Y1=(!A)&B;
        Y2=A&(!B);
        Y3=A&B;
        printf("Y0=%d Y1=%d Y2=%d Y3=%d",Y0,Y1,Y2,Y3);
        return 1;
    }
    else if(n==3)
    {
        int A,B,C,Y0,Y1,Y2,Y3,Y4,Y5,Y6,Y7;
        printf("Enter three input values (binary values) : ");
        scanf("%d%d%d",&A,&B,&C);
        Y0=(!A)&(!B)&(!C);
        Y1=(!A)&(!B)&(C);
        Y2=(!A)&(B)&(!C);
        Y3=(!A)&(B)&(C);
        Y4=(A)&(!B)&(!C);
        Y5=(A)&(!B)&(C);
        Y6=(A)&(B)&(!C);
        Y7=(A)&(B)&(C);
        printf("Y0=%d  Y1=%d Y2=%d Y3=%d Y4=%d Y5=%d Y6=%d Y7=%d",Y0,Y1,Y2,Y3,Y4,Y5,Y6,Y7);
        return 1;
    }
    else
    {
        printf("You entered wrong choice\n");
        return 0;
    }
}