#include<stdio.h>
#include<unistd.h>

int main (void)
{
     char t1;

    t1 = 34;
    write(1,"teste"&t1,1);
    write(1,"teste"&t1,1);
    write(1,"teste"&t1,1);
    

    return 0;
}