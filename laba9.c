#include  <stdio.h>

#include <stdlib.h>

int main(void){ 
    
    
    int k;

  struct mashina {
            char marka[20];
            int price_rub;
            char color[20];
            int year;}
*ptr1, tachka[3]= {{ "volvo",197011, "red", 1970},
{ "porsche",222260, "black", 1999},
{"jiguli",20000, "irjavyi", 1992}};

 ptr1= malloc(3*sizeof (struct mashina));
for (k=0; k<3;  k=k+1)  {ptr1[k]=tachka[k];
printf("mashina = %s\t%d\t%s\t%d\n", ptr1[k].marka, ptr1[k].price_rub , ptr1[k].color ,
ptr1[k]. year);   }  free (ptr1);

   
}
