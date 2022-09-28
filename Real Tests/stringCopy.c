#include <stdio.h>

void myStrcpy (char x[], char y[]) {
    int i = 0;
    while ((x[i]=y[i])!='\0')
        i += 1;
}

int main()
{
    char x[6]={'a','b','d','o','r','e',};
    char y[6]={'s','a','b','i','n','e',};
    myStrcpy(x,y);
   

    return 0;
}