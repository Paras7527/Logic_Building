#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#define FILESIZE 1024

int main()
{
    char Name[30];
    char Arr[FILESIZE] = {'\0'};
    int fd = 0;
    int iRet = 0;
    int iSum = 0;

    printf("Please enter the File Name that you want to Open:\n");
    scanf("%[^'\n']s", Name);

    fd = open(Name, O_RDONLY);

    printf("Data from file is:\n");
    while ((iRet = read(fd, Arr, FILESIZE)) != 0)
    {
        iSum = iSum + iRet;
    }
    printf("File size is:%d\n",iSum);
    close(fd);

    return 0;
}