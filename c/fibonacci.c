#include<stdio.h>
int main(){
   int num ,curr=0 , prev=1 , str;
   printf("Enter Limit : ");
   scanf("%d", &num);
   for (int i = 1; i<=num ; i++){
      printf ("%d\n",curr);
      str = curr+prev;
      curr = prev;
      prev = str;
   }

    return 0;
}