#include <stdio.h>

int main() 
{
    printf("runnig...\n");
#ifdef _MY_PRECOMP
    printf("my_precomp...\n");
#endif
}
