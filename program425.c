#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
int main()
{
    int fd = 0;
    char Name[30];
    int iRet = 0;
    char Arr[50] = {'\0'};

    printf("Please enter the File Name that you want to Open:\n");
    scanf("%[^'\n']s", Name);

    fd = open(Name, O_RDWR);
    if (fd == -1)
    {
        printf("Unable to Open File\n");
    }
    else
    {
        printf("File Succesfully Opened with FD: %d\n", fd);
        iRet = read(fd, Arr, 5);
        printf("%d bytes gets succefully read from the file\n", iRet);

        printf("Data from the file is:%s\n",Arr);
        close(fd);
    }

    return 0;
}