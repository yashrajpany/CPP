#include<constream.h>
#include<string.h>

void modif(char s[]){
int a=strlen(s);
for(int i=0; i<strlen(s); i++){
int asc = int(s[i]);
s[i] = char(asc+a);
a--;
}
cout<<s;
}


void main(){
clrscr();
char str[]= "ajma";
modif(str);
getch();
}