



/*****************************************/
/* Author  :  Abdullah Mohamed  soliman  */
/* Version :  V01                        */
/* Date    : 26 Dec 2021                 */
/*****************************************/

#include<stdio.h>
#include"typedef.h"
#include"Apis_interface.h"



void main ()
{
	
        uint32_t arr[5]={500,600,700,300,100};

        sint8_t res=0;
        res= binary_Search (arr ,5,500);	
	
	  if(res == -1)
	  {
		  printf("out of the range") ;
	  }
      else
	  {
		   printf("the element is int index=%d\n",res); 
	  }		  
}
