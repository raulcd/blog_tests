#include<stdio.h>

int main()
{
int size = 0;
int new_allocation = 0;
for (int i = 0; i<1000; i++) {
    size +=1;
    printf("Current size is: %d\n", size);
    printf("Grow shifted size by 3 bits : %d\n",size >> 3);
    printf("Small constant: %d\n", (size < 9 ? 3:6));
    if (new_allocation < size){
        new_allocation = size + (size >> 3) + (size < 9 ? 3: 6);
        printf("New allocation ocurrs, size of allocation: %d\n", new_allocation);
    }
}

return(0);
}