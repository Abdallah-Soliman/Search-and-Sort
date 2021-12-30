
/*****************************************/
/* Author  :  Abdullah Mohamed  soliman  */
/* Version :  V01                        */
/* Date    : 26 Dec 2021                 */
/*****************************************/

#include<stdio.h>
#include"typedef.h"






                     /*private Sort function*/
void selction_sort (uint32_t *ptr ,uint8_t size)
{
	uint32_t au32_temp=0;
	for(uint32_t au32_itration=0;au32_itration<size;au32_itration++)
	{
		for(uint32_t j=0;j<size-1;j++)
		{
			
			if(ptr[j] >ptr[j+1])
			{
			 au32_temp=ptr[j];
			 ptr[j]=ptr[j+1];
			 ptr[j+1]=au32_temp;
			}
         		
		}
		
	}
	
	
		for(uint32_t au32_itration=0;au32_itration<size;au32_itration++)
	    {
		printf("%d\n",ptr[au32_itration]);
		
	    }
	
	
	
}



                     /*Binary search 
					   return -1   if out of range   */

sint8_t binary_Search (uint32_t *arr ,uint8_t size ,uint32_t number)
{
	uint32_t error_state =0;
	
	if(size<=255)
	{
		for(sint32_t iner_itration =0 ;iner_itration<size-1;iner_itration++)
		{
			if(arr[iner_itration]<arr[iner_itration+1])
			{
					/*Don't do any thing*/
				
			}
			else
			{
				error_state =1;
				break ;
			}
			
		}
		if(error_state)
		{
			selction_sort(arr,size);
		}
		else{/*donot do any thing*/}
		
			
	sint32_t au32_low=0;
	sint32_t au32_h=size-1;
	sint8_t mid=0;
	mid = (au32_low+au32_h)/2;
	
	while(au32_low<au32_h)
	{
		if(number>arr[mid])
		{
			au32_low=mid+1;
			
		}
		else if(number<arr[mid])
		{
			
			au32_h=mid-1;
		}
		else
		{
          return mid;
		}
		mid =(au32_low+au32_h)/2;
	}
	
	}
	else
	{
	  return -1;
	}
	
	
}
























