#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

int main()
{
    int fd = 0;
    char Arr[] = "PRE PLACEMENT ACTIVITY";
    int Ret = 0;
    
    fd = open("Marvellous.txt",O_RDWR | O_APPEND );
    
    if(fd != -1)
    {
        printf("File is successfully opened with FD : %d\n",fd);;
    }

    Ret = write(fd,Arr,strlen(Arr));  // (Kashyat Lihayach,kay Lihayach,Kiti Lihayach )

    printf("%d bytes gets written in the file\n",Ret);



    close(fd);
    
    return 0;
}
