#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
int main()
{
    char Name[30];

    printf("Please enter the File Name that you want to Delete:\n");
    scanf("%[^'\n']s", Name);

    unlink(Name);
    
    return 0;
}