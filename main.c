#include <stdio.h>
int main(){
 float base;
 float height;
 float Area;
 
 printf("Input value of base : ");
 scanf("%f", &base);
 
 printf("Input value of height : ");
 scanf("%f", &height);
      
 printf("Area of a Triangle is %.2f ", 0.5 * base * height);
 
 return 0;
}