#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
int main()
{
    int fd = 0;
    char Name[30];

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
        int iRet = write(fd, "abcdefghijklmnop", 10);
        printf("%d bytes gets succefully written into the file\n", iRet);
        close(fd);
    }

    return 0;
}