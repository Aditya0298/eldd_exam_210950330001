#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>

int main()
{
    char Ubuff[100];
    char Kbuff[]="this data is written from user to kernel";
    int fd;
    fd = open("/dev/MyCharDevice",O_RDWR);
    if(fd<0)
    {
        perror("device is not accessible\n %d\n",errno);
        return(-1);
    }
    printf("device accessed successfully from user space\n");
    read(fd,Ubuff,sizeof(Ubuff));
    printf("reading data in user buff through kernel\n ");
    printf("Data read ---%s\n",Ubuff);
    write(fd,Kbuff,sizeof(Kbuff));
    printf(" writing from user---%s \n ",Kbuff);

    return close(fd);

}