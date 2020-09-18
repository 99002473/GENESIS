#include "addition.h"
#include "subtract.h"
#include "multiplication.h"
#include "division.h"
#include "average.h"
#include "percent.h"
#include "power.h"
#include "factorial.h"
#include "root.h"
#include "log.h"
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
int power(int);
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
    int a,b;
    int op;
    printf("Enter the numerands\n");
    scanf("%d %d",&a,&b);
    printf("Enter the option for calc\n");
    printf("Enter an operator (1, 2, 3, 4): ");
    scanf("%d", &op);
    int res;
    switch (op)
    {
      case 1:
        {      
                res = add(a,b);
                printf("%d", res);
                break;
        }
        case 2:
        {
                res = sub(a,b);
              printf("%d", res);
              break;
        }
        case 3:
        {
                      res = mul(a,b);
              printf("%d", res);
              break;
        }
        case 4:
        { 
              res = div(a,b);
              printf("%d", res);
              break;
        }
        default:
            printf("Error! operator is not correct");
    }
    return 0;
}
