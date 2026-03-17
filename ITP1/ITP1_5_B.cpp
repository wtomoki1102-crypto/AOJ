#include<stdio.h>

int main(){
  int H,W;

  while(1){
    
    scanf("%d%d",&H,&W);

    if(H==0&&W==0){
      break;
    }

    for(int i=0;i<H;i++){

      if(i==0||i==H-1){
        
        for(int k=0;k<W;k++){
        printf("#");
        }

      }

      else{
        printf("#");
        for(int t=0;t<W-2;t++){
          printf(".");
        }
        printf("#");        
      }
      printf("\n");

    }

    printf("\n");
  }
  return 0;
}
