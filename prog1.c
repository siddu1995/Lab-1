#include "types.h"
#include "stat.h"
#include "user.h"
int main(int argc, char *argv[])
{
int i,k;
if(stride(100)==0)
sleep(5);

const int loop=43000;
for(i=0;i<loop;i++)
{
asm("nop");
for(k=0;k<loop;k++)
asm("nop");
}
printf(1,"Program 1 ended\n");
exit();
}   
