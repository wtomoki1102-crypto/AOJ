#include<stdio.h>

int main(){
  int H,W;

  while(1){
    
    scanf("%d%d",&H,&W);
    if(H==0&&W==0){
      break;
    }
    
    for(int k=0;k<H;k++){
      
      for(int i=0;i<W;i++){
        printf("#");
      }
      printf("\n");    
       
    }
      printf("\n");  
  }

  return 0;
}
