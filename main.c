#include <stdio.h>
int main(void) {
    int lato1;
    int lato2;
    int lato3;
    printf("il primo lato e' : ");
    scanf("%d",&lato1);
    printf("il secondo lato e' : ");
    scanf("%d",&lato2);
    printf("il terzo lato e' : ");
    scanf("%d",&lato3);
    if (lato1==lato2)
        if (lato2==lato3)
            printf("il triangolo e' un triangolo equilatero\n");
        else
            printf("il triangolo e' isoscele\n");
    else if (lato1==lato3)
        printf("il triangolo e' un triangolo isoscele\n");
    else if (lato2==lato3)
        printf("il triangolo e' un triangolo iscoscele\n");
    else
        printf("il triangolo e' un triangolo scaleno\n");
}
