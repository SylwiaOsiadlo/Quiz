#include <stdio.h>
#include <stdlib.h>


int i;


int main()
{
scanf("%d",&i);

do
{

         if(i==6){
         puts("szesc\n");
    }

         if(i==5){
         puts("piec\n");
    }

         if(i==4){
         puts("cztery\n");
    }

         if(i==3){
         puts("trzy\n");
    }

       if(i==2){
         puts("dwa\n");
    }

      if(i==1){
         puts("jeden\n");
    }

    if(i==0){
         printf("zero!!!\n");
         break;
    }

}while(i--);



    return 0;
}
