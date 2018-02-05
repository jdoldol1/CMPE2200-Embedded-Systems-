/********************************************************************/
// HC12 Program:	YourProg - MiniExplanation
// Processor:		MC9S12XDP512
// Xtal Speed:		16 MHz
// Author:			John Doldol
// Date:			February 5, 2018

// Details: A more detailed explanation of the program is entered here
/********************************************************************/


#include <hidef.h>      		/* common defines and macros 		*/
#include "derivative.h"      	/* derivative-specific definitions 	*/
/********************************************************************/
//		Library includes
/********************************************************************/
#include "led_7seg.h"
#include "my_delays.h"


/********************************************************************/
//		Prototypes
/********************************************************************/


/********************************************************************/
//		Variables
/********************************************************************/
  unsigned char value = 0x00;
  int i = 0;
/********************************************************************/
//		Lookups
/********************************************************************/


void main(void)
{
// main entry point
_DISABLE_COP();


/********************************************************************/
// initializations
/********************************************************************/
 
  LEDS_7Seg_Init_C();
  
  for (;;)
	{   
	    /* 
		  Bot_8Out_C(0x44);
		  Delay_C(500);
		  
		  Top_8Out_C(0x33);
		  Delay_C(500);	
		  
		  
		  Top_16Out_C(0x6789);
		  Delay_C(500);  
		  
		  Bot_16Out_C(0xabcd);
		  Delay_C(500);	
		  */
		  Pos_Char_C(i++,value++);
		  Delay_C(500); 
		  
	}
}



/********************************************************************/
//		Functions
/********************************************************************/




/********************************************************************/
//		Interrupt Service Routines
/********************************************************************/

