#include <stdio.h>
#include <string.h>

struct tric
{
    int aalu;
    float bh;
    char glu;
};
typedef struct tric tc;

int main()
{
    struct tric n1 = {2, 4.66,'J'};
    struct tric n2;
    n2.aalu = 4;
    n2.bh = 5.879;
    n2.glu = '@';
    printf("%0.3f\n", n1.bh);
    printf("%d\n", n2.aalu);
    printf("%c\n",n1.glu);
    printf("%c\n",n2.glu);
    tc n3={99,7.784,'L'};
    printf("%c",n3.glu);
    return 0;
}