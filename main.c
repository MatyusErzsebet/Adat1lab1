#include <stdio.h>
void kiir(int);
int main() {
    int x=0, y[100][50]={0};
    x++;
    y[0][0]=1;
    if(x<9){
        x++;
    }
    kiir(x);
    return 0;
    //komment
}
void kiir(int x)
{
    x++;
    printf( "%d", x);
}