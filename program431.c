#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
int main()
{
    char Name[30];
    char Arr[20] = {'\0'};
    char Brr[20] = {'\0'};
    int fd = 0;

    printf("Please enter the File Name that you want to Open:\n");
    scanf("%[^'\n']s", Name);

    fd = open(Name, O_RDONLY);

    lseek(fd, 5, 0);

    read(fd, Arr, 10);

    printf("Data From File is:%s\n", Arr);

    lseek(fd,5, SEEK_CUR);

    read(fd, Brr, 10);

    printf("Data From File is:%s\n", Brr);

    close(fd);
    return 0;
}
// SEEK_SET  Survatipasun            0
// SEEK_CUR  Atta jithe ahe tithun   1
// SEEK_END  shevatapasun            2