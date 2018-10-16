#include "func.h"
#include "func2.h"
#include<stdio.h>

void preprocess()
{
    printf("do some preprocessing \n");
}

void postprocessing()
{
    printf("do some postprocessing \n");
}


int main(void)
{
   preprocess();
   foo1();
   foo2();

   postprocessing();

 
}
