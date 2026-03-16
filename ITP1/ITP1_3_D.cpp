#include<stdio.h>

int main(){
  
  int a,b,c,i=0,kazu=0;

  scanf("%d%d%d",&a,&b,&c);

  for(i=a;i<b+1;i++){

    if(c%i==0){
      kazu++;
    }
  }

  printf("%d\n",kazu);
  return 0;
  
}
