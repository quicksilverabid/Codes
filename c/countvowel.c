#include<stdio.h>
void countvowel (char arr[]);
int main(){
    char arr[100];
    fgets(arr,100,stdin);
    countvowel(arr);

    return 0;
}
void countvowel (char arr[]){
    int count = 0 ;
    for (int i=0; arr[i]!='\0';i++){
        if (arr[i]=='a' || 
            arr[i]=='e' || 
            arr[i]=='i' ||
            arr[i]=='o' ||
            arr[i]=='u' ){
            count++;
        }
    }
    printf("%d",count);
}