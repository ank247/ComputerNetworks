
#include<stdio.h>
#include<fcntl.h>

main()
{
int fd,i,j=0,count=0;
char c=' ';
fd=open("file0A1.c",O_RDONLY);
while(c!='\n')
{
i=lseek(fd,j,SEEK_SET);
read(fd,&c,1);
//printf("%d %c",i,c);
j++;
count++;
}
printf("%d",count-1);
}

