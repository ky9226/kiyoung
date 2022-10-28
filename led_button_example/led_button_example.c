#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>

int main(int argc, char **argv)
{
	char buff;
	char tmp;
	char prev ='r';
	
	int dev = open("/dev/my_gpio",O_RDWR);
	
	if(dev==-1)
	{
		printf("Opening was not possible!\n");
		return -1;
	}
	
	printf("Opening was successfull!\n");
	
	while(1)
	{
		read(dev,&buff,1);
		prev=tmp;
		tmp=buff;
		write(dev,&tmp,1);
		
		if(prev!=tmp)
			printf("led is %c\n",tmp);
	}
	
	close(dev);
	return 0;
	
}


