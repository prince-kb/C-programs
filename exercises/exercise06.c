//not working
#include <stdio.h>
#include <string.h>
// <good>    This is an example of html sentence <|YY>
void aalu(char *bhel){
    int a=0;
    int b=0;
for(int i = 0;i<strlen(bhel);i++){
    if (bhel[i] = '<')
    {
        a = 1;
        continue;
    }
    else if( bhel[i] = '>'){
        a = 0;
        continue;
    }
    if(a == 0){
        bhel[b] = bhel[i];
        b++;
    }
    bhel[b]='\0';
}
}
int main()
{
    char bhel[] = "<good>    This is an example of html sentence <|YY>";
    aalu(bhel);
    printf("The best format is ||%s||\n",bhel);
    return 0;
}
