#include<stdio.h>
struct _fraction()
{
  int num,den;
};
typedef struct _fraction Fraction;
{
  fraction f;
  printf("enter one Fraction(NUM DEN):/n");
  scanf("%d%d",&f.num,&f.den);
  return f;
}

Fraction smallest-fraction(Fraction f1, Fraction f2, Fraction f3)
{

  float a=(float)f1.num/f1.den;
  float b=(float)f2.num/f2.den;
  float c=(float)f3.num/f3.den;

  if(a<b && a<c)
  {
    return f1;
  }
   else if(b<c)
   {
     return f2;
   }
  else
   {
     return f3;
   }
   
}  

void output(Fraction f1,Fraction f2,Fraction f3,Fraction smallest)
{
  printf(The smallest number of %d/%d,%d/%d"a)
}