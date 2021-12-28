#include <stdio.h>

struct book
{
    char name[20];
    int price;
};

int main(){
    typedef char fahim;

    fahim ch;
    ch = 'F';

    printf("%c\n\n",ch);

    typedef struct book Toy;
    Toy t = {"ball",200};
    
    printf("%s\n",t.name);
    printf("%d\n\n",t.price);

}