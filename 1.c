#include <stdio.h>

int main(){
    int z,o,t;
    scanf("%d %d %d", &z, &o, &t);
    int a;
    double cr;
    cr=(double)(z+o+t)/3;
    if ((cr>4.5) && (cr<=5))
        a=5;
    if ((cr>3.5) && (cr<4.5))
        a=4;
    if ((cr>2.5) && (cr<3.5))
        a=3;    
    if (cr<2.5)
        a=2;
    switch(a){
        case 5: printf("exellent student\n"); break;
        case 4: printf("good student\n"); break;
        case 3: printf("normal student\n"); break;
        case 2: printf("bad student\n"); break;
        default: printf("error");
    }
    return 0;
}