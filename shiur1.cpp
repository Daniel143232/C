#include <stdio.h>

int main()
{
 float zela1,zela2,shetach,heikef;                      //the second task
 printf("print the first zela: ");
 scanf("%f",&zela1);
 printf("print the second zela: ");
 scanf("%f",&zela2);
   shetach = zela1*zela2;
   printf("the shetach is : %f \n" ,shetach);
   heikef = zela1*2+zela2*2;
   printf("the heikef is : %f \n" ,heikef);
   
}

#include <stdio.h>
#include <math.h>

int main()
{
float R,P,S;                                        //third task
const float Pie = 3.14;
printf("the radius of the circle is :" );
scanf("%f", &R);
S= Pie*pow(R,2);
printf("the Sethach of the circle is %f :\n",S);
P= 2*Pie*R;
printf("the heikef of the circle is %f :\n",P);
}

#include <stdio.h>

int main()
{                                              //forth task
 float temp,parneheat;
 printf("the temperature is : ");
 scanf("%f" ,&temp);
 parneheat =(temp *1.8)+32;
 printf("the parneheat is %f :", parneheat);    
}

#include <stdio.h>

int main()
{
float zela1,zela2,zela3,S,P;              //fifth task
printf("the first zela is: ");    
scanf("%f",&zela1);
printf("the second zela is: ");    
scanf("%f",&zela2);
printf("the third zela is: ");    
scanf("%f",&zela3);

S=(zela1+zela2+zela3)/2;
printf("the setach of the triangle is : %f ", S);
}






