#include<stdio.h>
#include<stdlib.h>

int main(){
  
  char str[8];

  printf("Who are you?\n");
  scanf("%s",str);

  printf("hello %s\n",str);
  
  int i,sum=0,num;
  printf("Rouling dice...\n");
  for(int i=0;i<2;i++)
    {
      num=rand();
      num%=6;
      num++;

      printf("Dice %d  %d \n", i+1,num);
      sum+=num;

    }
printf("Total value  %d \n",sum);
  
  if(sum>7)
    {
      printf("%s win!!\n",str);
    }

  else
    {
      printf("%s lose\n",str);
    }
  return 0;
}
