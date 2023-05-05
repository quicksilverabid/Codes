#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main(){
    int sec= 0 , min = 0 , hour = 0;
    
    while (1){
        system("cls");
        printf ("%02d : %02d : %02d", hour, min ,sec);
        sec ++ ;
        if (sec==60){
            min++;
            sec=0;
        }
        if (min == 60){
            hour ++;
            min = 0;
        }
        if (hour ==24){
            hour = 0;
            min = 0;
            sec = 0;
        }
        sleep(1);
    }
}