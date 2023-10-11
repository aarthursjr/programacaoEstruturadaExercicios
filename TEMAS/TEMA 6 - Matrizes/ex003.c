#include <stdio.h>

int main()
{
    int M[3][2] = {2, 3, 8, 6, 4, 1};
      /*         '0  '1  
        M = '0  2   3
            '1  8   6
            '2  4   1
    */
    printf("A componente M[0,1] = %d\n", M[0][1]); 
    printf("A componente M[2,1] = %d\n", M[2][1]); 
    return 0;
}