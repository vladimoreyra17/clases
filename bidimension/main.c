#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>
#include<string.h>
void mifuncion(char nombre[][18], int fila);
int main()
{

  char nombre[3][18]={"Josel","maria","meRcedes"};
  mifuncion( nombre,3);


    return 0;
}
void mifuncion(char vec[][18],int filas)
{
    for(int i=0; i<filas; i++)
    {
        strlwr(vec[i]);
        vec[i][0]=toupper(vec[i][0]);
        printf("%s \n",vec[i]);
    }

}
