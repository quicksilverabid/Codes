#include <stdio.h>

int main(void) {
  int num, i;
  printf("Enter a positive integer: ");
  scanf("%d", &num);

  for (i = 2; i <= num / 2; i++) {
    if (num % i == 0) {
      printf("%d is not a prime number.\n", num);
      return 0;
    }
  }
  printf("%d is a prime number.\n", num);
  return 0;
}



// #include <stdio.h>
// int main(){
//     int n , i , increase = 0 ;
//     printf("Enter number : ");
//     scanf("%d",&n);
//     for (i=1;i<=n;i++){
//         if (n%i==0){
//             increase ++;
//         }
//     }
//     if (increase == 2){
//         printf("Prime");
//     }
//     else{
//         printf("Not prime");
//     }
//     return 0 ;
// }

