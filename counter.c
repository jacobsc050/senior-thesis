
#include "project.h"
#include "stdio.h"

volatile uint8 flag = 0;
    CY_ISR(isr_1_Interrupt2)
        {
        flag = 1;
        PWM_1_ReadStatusRegister();
        }

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */
    
   
    PWM_1_Start();
    Comp_1_Start();
    Comp_2_Start();
    Counter_1_Start();
    Counter_2_Start();
    Counter_3_Start();
    VDAC8_1_Start();
    UART_1_Start();
    isr_1_StartEx(isr_1_Interrupt2);
    
    
    uint32 Reading1;
    
    char output1[20];
   
    UART_1_PutString("Hello");
    
        for(;;)
    {
        if(flag == 1)
        {
            flag = 0;
            Reading1 = Counter_1_ReadCapture();
            sprintf(output1, "%lu\n\r",Reading1); 
            UART_1_PutString(output1);
           
        }else
        {
         
        }   
    }

}
