/*

*/
#include <stdio.h>

int main(){
  int cnt,var=0;
  for(cnt=0;cnt<100;cnt++){
    if(cnt%5)
     continue;
    printf("%d ",cnt);
    if(cnt==90){
      cnt/=var;      
    }
  }     
}

