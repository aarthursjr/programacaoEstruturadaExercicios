#include <stdio.h>
int main ()
{
    int count;
    for (count=4; count%10 !=0;count=count+4) 
        printf ("%d ",count);

}