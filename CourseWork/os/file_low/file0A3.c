#include<stdio.h>
#include<fcntl.h>

main()
{
int fd,i,j=0,count=0;
char c=' ';
fd=open("file.txt",O_RDONLY);
while(c!='\n')
{
i=lseek(fd,j,SEEK_SET);
read(fd,&c,1);
printf("%c",c);
j++;
//count++;
}
//printf("%d",count-1);
}

