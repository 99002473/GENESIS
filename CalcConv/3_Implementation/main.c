#include <stdio.h>
#include "addition.h"
#include "subtract.h"
#include "multiplication.h"
#include "division.h"
#include "average.h"
#include "percent.h"
#include "power.h"
#include "factorial.h"
#include "root.h"
#include "logarithm.h"
#include "sin.h"
#include "cos.h"
#include "tan.h"
#include "sec.h"
#include "cosec.h"
#include "cot.h"

int add(int, int);
int sub(int, int);
int mul(int, int);
int div(int, int);
int avg(int, int);
int power(int, int);
int per(int);
int factorial(int);
int logval(int);
int cosval(int);
int sinval(int);
int tanval(int);
int secval(int);
int cosecval(int);
int cotval(int);

int main()
{
    int ch,op1,op2,res;
    printf("Enter the operation you want to perform\n");
    printf("\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Average\n6. Power\n7. Root\n8. Percent\n9. Root\n10. Percent\n11. Factoial\n12. Cos\n13. Sin\n14. Tan\n15. Cosec\n16. Sec\n17. Cot\n18. Log\n19. Exit\n");
    scanf("%d",&ch);
    switch (ch)
    {
        case 1:
           printf("enter the numbers\n");
           scanf("%d %d",&op1,&op2);
           res=add(op1,op2);
           break;
        case 2:
           printf("enter the numbers\n");
           scanf("%d %d",&op1,&op2);
           res=sub(op1,op2);
           break;
        case 3:
            printf("enter the numbers\n");
            scanf("%d %d",&op1,&op2);
            res=mul(op1,op2);
            break;
        case 4:
             printf("enter the numbers\n");
             scanf("%d %d",&op1,&op2);
             res=div(op1,op2);
             break;   
        case 5:
             printf("enter the numbers\n");
             scanf("%d %d",&op1,&op2);
             res=avg(op1,op2);
             break;
        case 6:
             printf("enter the numbers\n");
             scanf("%d %d",&op1,&op2);
             res=power(op1,op2);
             break;   
        case 7:
             printf("enter the number\n");
             scanf("%d",&op1);
             res=per(op1);
             break;   
        case 8:
             printf("enter the number\n");
             scanf("%d",&op1);
             res=root(op1);
             break;   
        case 9:
            printf("enter the numbers\n");
             scanf("%d %d",&op1,&op2);
             res=avg(op1,op2);
             break;   
        case 10:
            printf("enter the number\n");
             scanf("%d",&op1);
             res=factorial(op1);
             break;    
        case 11:
            printf("enter the number\n");
             scanf("%d",&op1);
             res=root(op1);
             break;   
        case 12:
            printf("enter the number\n");
             scanf("%d",&op1);
             res=cosval(op1);
             break;   
        case 13:
            printf("enter the number\n");
             scanf("%d",&op1);
             res=sinval(op1);
             break;   
        case 14:
            printf("enter the number\n");
             scanf("%d",&op1);
             res=tanval(op1);
             break;    
        case 15:
            printf("enter the number\n");
             scanf("%d",&op1);
             res=cosecval(op1);
             break;   
        case 16:     
             printf("enter the number\n");
             scanf("%d",&op1);
             res=secval(op1);
             break;
        case 17:
             printf("enter the number\n");
             scanf("%d",&op1);
             res=cotval(op1);
             break;
        case 18:
             printf("enter the number\n");
             scanf("%d",&op1);
             res=logval(op1);
             break;
        case 19:   
            break;   
        default:
            break;
    }

}
