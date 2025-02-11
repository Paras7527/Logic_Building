#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
int main()
{
    int fd = 0;
    char Fname[30];

    printf("Please enter the File name that you want to create:\n");
    scanf("%[^'\n']s", Fname);

    fd = creat(Fname, 0777);
    if (fd == -1)
    {
        printf("Unable to create File\n");
    }
    else
    {
        printf("File Succesfully Created\n");
    }
    return 0;
}