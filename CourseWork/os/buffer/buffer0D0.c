#include<stdio.h>
#include<fcntl.h>
main()
{
printf("A");
fflush(stdout);
fork();
printf("B");
}
