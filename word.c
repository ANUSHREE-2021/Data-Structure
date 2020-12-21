#include<stdio.h>
#include<string.h>
main()
{

    int i,count=1,x;
    char str[100];
    printf("enter a sentence\n");
    gets(str);
    x=strlen(str);
    for(i=0;i<x;i++)
    {
        if(str[i]==' ')
        {
            count++;
        }
    }
    printf("No of words in the sentence are: %d\n",count);
}
