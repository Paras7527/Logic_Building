#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{
    char Name[30];
    char Arr[10] = {'\0'};
    int fd = 0;

    printf("Please enter the File Name that you want to Open:\n");
    scanf("%[^'\n']s", Name);

    fd = open(Name, O_RDONLY);

    read(fd, Arr, 10);
    printf("%s", Arr);

    read(fd, Arr, 10);
    printf("%s", Arr);

    read(fd, Arr, 16);
    printf("%s", Arr);

    close(fd);

    return 0;
}