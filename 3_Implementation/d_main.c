#include<stdio.h>
#include<stdlib.h>
int main()
{

    int ch,n1,n2;
    while (1){
        printf("Choose the Serial number of logical circuit\n");
        printf(" 1.Decoder\n");
        printf(" 2.Encoder\n");
        scanf("%d",&ch);
        switch(ch){
        case 1:
            printf("Choose the Serial number of decoder\n");
            printf(" 1. 1:2 Decoder \n ");
            printf(" 2. 2:4 Decoder \n ");
            printf(" 3. 3:8 Decoder \n ");
            scanf("%d",&n1);
            decoder(n1);
        break;
        case 2:
            printf("Choose the Serial number of decoder \n");
            printf(" 1. 2:1 encoder \n");
            printf(" 2. 4:2 encoder \n");
            printf(" 3. 8:3 encoder \n");
            scanf("%d",&n2);
            encoder(n2);
        break;
        default:
            printf("Enter the valid choice");
        break;
        }
    }
    return 0;
}
