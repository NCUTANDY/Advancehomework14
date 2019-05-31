#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int main(void)
{
char str[]="I $am 5a$ go68od#@$ st-ude[nt].";
char newstr[50];

int num,num1 =0;
int length=strlen(str);

 for(num=0;num<length;num++)
 {
 	if(isalpha(str[num])||isspace(str[num])){
 		newstr[num1]=str[num];
 		num1++;
 	}
 }

 puts(newstr);
system("PAUSE");
return 0;	
}
