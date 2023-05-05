#include<stdio.h>
#include<math.h>
void sq ();
void circ ();
void rect ();
int main ()
{
    char ask ;
    printf ("Which area do you want (square = s || circle = c || rectangle = r) : \n");
    scanf ("%c",&ask);
    if (ask == 's'){
        sq ();
    }
    else if (ask == 'c'){
       circ ();
    }
    else if (ask == 'r'){
       rect ();
    }
    else {
        printf ("Wrong input!!!");
    }

}
void sq(){
    float a , square;
    printf ("Enter Hand : \n");
    scanf ("%f",&a);
    square = pow (a,2);
    printf ("Area of Square : %.2f\n",square);
}
void circ (){
    float a , circle;
    printf ("Enter Radius : \n");
    scanf ("%f",&a);
    circle = 3.14159 * pow (a,2) ;
    printf ("Area of Circle is : %.2f\n",circle);
}
void rect(){
    float a , b , rectangle;
    printf ("Enter Length : \n");
    scanf ("%f",&a);
    printf ("Enter Width : \n");
    scanf ("%f",&b);
    rectangle = a * b;
    printf ("Area of rectangle is : %.2f",rectangle);
}