#include "func.h"
#include "func2.h"

void turbo_on()
{
   printf("turbo on \n");
}

void turbo_off()
{
    printf("turbo off \n");
}

int main(void)
{

   turbo_on();

   foo1();
   foo2();

   turbo_off();

 
}
