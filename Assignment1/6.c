#include<unistd.h>
int main()
{
	char buff[200];
	read(0,buff,10);
	write(1,buff,10);
	return 0;
}


