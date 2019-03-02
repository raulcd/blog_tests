#include<stdio.h>

int main()
{
int size = 0;
int new_allocation = 0;
for (int i = 0; i<10000; i++) {
    size +=1;
    if (new_allocation < size){
        printf("Growing ratio: %f\n", (float)(size >> 3)/(float)size);
        new_allocation = size + (size >> 3) + (size < 9 ? 3: 6);
        printf("New allocation: %d\n", new_allocation);
    }
}

return(0);
}