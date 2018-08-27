#include <stdio.h>
#include <stdlib.h>
 #include <ctype.h>
#include <string.h>

 
int main(int argc,  char *argv[])
{
char text[60];
char text2[60];
char ch;
int j = strlen(argv[1]);
int i = 0;
if(argc != 2){
return 1;
}
else{
while(ch != '\n'){
ch = getchar();
text[i] = ch;
i++;
}
text[i]='\0';


for(int y = 0 ; y < i ; y++){
int k = y%j;
if(isalpha(text[y])){
if(isupper(text[y])){
text2[y]=(int)text[y]-64;
text2[y]=(text2[y]+((int)argv[1][k]-64))%26;
text[y]= (char)(text2[y]+64);
}

else{
text2[y]=(int)text[y]-96;
text2[y]=(text2[y]+((int)argv[1][k]-96))%26;
text[y]= (char)(text2[y]+96);
}

}
//printf("%d\n", text2[y]);
//printf("%c\n", text[y]);
}
printf("%s\n", text);

}
return 0;   
}
