#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

int main()
{
    int fd = 0;
    char Arr[20];
    int Ret = 0;
    
    fd = open("Marvellous.txt",O_RDWR );
    

    Ret = read(fd,Arr,10);  // (Kashyat Baghayach,kay Baghayach,Kiti Baghayach )

    printf("%d bytes gets read in the file\n",Ret);
    printf("Data is :%s \n",Arr);

    close(fd);
    
    return 0;
}
