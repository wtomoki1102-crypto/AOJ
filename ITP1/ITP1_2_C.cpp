#include<stdio.h>

int main(){
  
  int a,b,c;
  scanf("%d%d%d",&a,&b,&c);

  if(a>b){
    int t=0;
    t=a;
    a=b;
    b=t;
  }

  if(b>c){
    int t=0;
    t=b;
    b=c;
    c=t;
  }

  if(a>c){
    int t=0;
    t=a;
    a=c;
    c=t;
  }

  if(a>b){
    int t=0;
    t=a;
    a=b;
    b=t;
  }

  printf("%d %d %d\n",a,b,c);

  return 0;  
}
