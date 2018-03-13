#include <stdio.h>
char l;
char aa[10];
int i = 0,bool=1;
void match(char t){
  if(l == t){
    l = aa[++i];
    //l = getchar();
  }
  else{
    printf("error");
    bool = 0;
  }
}
void E_(){
  if(l=='+')
  {
    match('+');
    match('i');
    E_();
  }
  else
    return;
}
void E(){
  l = aa[i];
  if(l == 'i')
  {
    match('i');
    E_();
  }
}
int main(void) {
  printf("Entre the input\n");
  gets(aa);
  E();
  //getch();
  if(l=='$'&& bool)
  {
	printf("parsing sucess\n");
  }
  getch();
  return 0;
}