#include <stdio.h>

 

int main()

{

    float altitude = 100.0;

    int count = 10;

    float v;

    v = altitude;

    for(int n=0;n<count;n++)

    {

        v = v/2;

    }

    printf("��%d�θ߶�=%f\n", count, v);
 

    return 0;

}