#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
    int fd = 0;

    fd = open("Marvellous.txt",O_RDWR);

    if(fd != 0)
    {
        printf("File is successfully opened with FD : %d\n",fd);;
    }

    close(fd);

    return 0;
}

// O_RDONLY : READ
// O_WRONLY : WRITE
// O_RDWR : READ + WRITE