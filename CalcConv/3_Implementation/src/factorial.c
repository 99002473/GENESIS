#include "factorial.h"
#include <stdio.h>

int factorial(int a)
 {
    int fact;
    {
        
        for (int i = 1; i <= a; ++i) 
        {
            fact *= i;
        }

    }

return fact;

}