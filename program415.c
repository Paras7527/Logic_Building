#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{
    int fd = 0;

    fd = creat("Marvellous.txt", 0777);
    if(fd==-1)
    {
        printf("Unable to create File\n");
    }
    else
    {
        printf("File Succesfully Created\n");
    }
    return 0;
}