#include <stdio.h>
int main() {
    int a=667777;
    int count=0;
    while(a){
        a=a/10;
        count++;
    }
     printf("%d" ,count);

    return 0;
}