#include<stdio.h>
typedef struct address
{
   int house;    
   int block;
   char city [100];
   char state [100];

}add;
void print (struct address add);

int main(){
    add p[5];
    //person 1
    printf ("Enter house of person 1 : ");
    scanf("%d",&p[0].house);
    printf ("Enter block of person 1 : ");
    scanf("%d",&p[0].block);
    printf ("Enter city of person 1 : ");
    scanf("%s",&p[0].city);
    printf ("Enter state of person 1 : ");
    scanf("%s",&p[0].state);
    //person 2
    printf ("Enter house of person 2 : ");
    scanf("%d",&p[1].house);
    printf ("Enter block of person 2 : ");
    scanf("%d",&p[1].block);
    printf ("Enter city of person 2 : ");
    scanf("%s",&p[1].city);
    printf ("Enter state of person 2 : ");
    scanf("%s",&p[1].state);
    //person 3
    printf ("Enter house of person 3 : ");
    scanf("%d",&p[2].house);
    printf ("Enter block of person 3 : ");
    scanf("%d",&p[2].block);
    printf ("Enter city of person 3 : ");
    scanf("%s",&p[2].city);
    printf ("Enter state of person 3 : ");
    scanf("%s",&p[2].state);
    //person 4
    printf ("Enter house of person 4 : ");
    scanf("%d",&p[3].house);
    printf ("Enter block of person 4 : ");
    scanf("%d",&p[3].block);
    printf ("Enter city of person 4 : ");
    scanf("%s",&p[3].city);
    printf ("Enter state of person 4 : ");
    scanf("%s",&p[3].state);
    //person 5
    printf ("Enter house of person 5 : ");
    scanf("%d",&p[4].house);
    printf ("Enter block of person 5 : ");
    scanf("%d",&p[4].block);
    printf ("Enter city of person 5 : ");
    scanf("%s",&p[4].city);
    printf ("Enter state of person 5 : ");
    scanf("%s",&p[4].state);

    
    print(p[0]);
    print(p[1]);
    print(p[2]);
    print(p[3]);
    print(p[4]);
    


    return 0;
}
void print (struct address add){
    for (int i =1 ; i<6; i++){
    printf("Address for person %d : %d %d %s %s\n",i, add.house,add.block,add.city,add.state);
     }
     
}