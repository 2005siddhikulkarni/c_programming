#include "Header.h"
#include<assert.h> // for testing purpose

int main()
{
    assert(Addition(10,11) == 22);
    assert(Addition(-10,20) == 10);
    assert(Addition(-10,-20) == -30);



    return EXIT_SUCCESS;
}