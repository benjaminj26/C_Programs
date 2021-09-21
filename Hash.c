/*
    Program to encode a given string
    Author : Benjamin Joseph
    Date : 11-09-2021
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main()
{
    char hash[]=
    {
        '#','u','i','g','l','t','<','o','d','?','S','k','y','r','s','/','a','z','c','p','x','v',',',
        'j','f','n','q','e','Z','w','m','>','b','h','`','5','H','1','9','2','~','A','7','4','8','3','0','6','.',
        '_','%','^','-','*','=','$','@','#','+','&','!','K',
        'Y','L','C','W','R','J','G','N','X','D','B','V','O','Q','E','I','F','U','P','T','\0'
    };
    char letters[]=
    {
        ' ','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q',
        'r','s','t','u','v','w','x','y','z','0','1','2','3','4','5','6','7','8','9',
        '!','@','#','$','%','^','&','&','*','/','?','>','~','`','<',',','.',
        'A','B','C','D','E','F','G','H','I','J','K','L','M','N',
        'O','P','Q','R','S','T','U','V','W','X','Y','Z','\0'
    };
    size_t buff = 1;
    char *str=(char*)malloc(buff*sizeof(char));
    printf("Input a string: ");
    getline(&str,&buff,stdin);
    str[strlen(str)-1]='\0';
    size_t size = strlen(str);
    char encrypted[size];
    for(int i=0;i<size;++i)
    {
        for(int j=0;j<strlen(letters);++j)
        {
            if(str[i]==letters[j])
                encrypted[i]=hash[j];
        }
    }
    free(str);
    encrypted[size]='\0';
    
    printf("\nThe encrypted version of the string you entered is: ");
    fputs(encrypted,stdout);
    printf("\n");
    return 0;
}