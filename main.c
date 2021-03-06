/*
  ******************************************************************************
  * File Name          : main.c
  * Description        : Main program body
  ******************************************************************************
  *
  * COPYRIGHT(c) 2016 STMicroelectronics
  *
  * Redistribution and use in source and binary forms, with or without modification,
  * are permitted provided that the following conditions are met:
  *   1. Redistributions of source code must retain the above copyright notice,
  *      this list of conditions and the following disclaimer.
  *   2. Redistributions in binary form must reproduce the above copyright notice,
  *      this list of conditions and the following disclaimer in the documentation
  *      and/or other materials provided with the distribution.
  *   3. Neither the name of STMicroelectronics nor the names of its contributors
  *      may be used to endorse or promote products derived from this software
  *      without specific prior written permission.
  *
  * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
  * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
  * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
  * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
  * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
  * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
  * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
  * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************
  */
/* Includes ------------------------------------------------------------------*/
#include "stm32f3xx_hal.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>



/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
void Error_Handler(void);
static void MX_GPIO_Init(void);


/** \brief  Random number generator:
   creates a number sequence between 0  and 15 (16 numbers)*/
int main(void)
{

  

  /** \details   HAL_Init(): Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /**  SystemClock_Config():Configure the system clock */
  SystemClock_Config();

  /** MX_GPIO_Init(): Initialize all configured peripherals */
  MX_GPIO_Init();

 

  /** while(1): Infinite loop to excecute if user button is pressed */

  while (1)
  {
	 
  
  if (HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_0)) {	                     // checks if PA0 is set
		
	 HAL_GPIO_WritePin(GPIOE, GPIO_PIN_15, GPIO_PIN_RESET);    // switch off LED
	 HAL_GPIO_WritePin(GPIOE, GPIO_PIN_14, GPIO_PIN_RESET);    // switch off LED
	 HAL_GPIO_WritePin(GPIOE, GPIO_PIN_13, GPIO_PIN_RESET);    // switch off LED
	 HAL_GPIO_WritePin(GPIOE, GPIO_PIN_12, GPIO_PIN_RESET);    // switch off LED
	 HAL_GPIO_WritePin(GPIOE, GPIO_PIN_11, GPIO_PIN_RESET);    // switch off LED
	 HAL_GPIO_WritePin(GPIOE, GPIO_PIN_10, GPIO_PIN_RESET);    // switch off LED
	 HAL_GPIO_WritePin(GPIOE, GPIO_PIN_9, GPIO_PIN_RESET);     // switch off LED
	 HAL_GPIO_WritePin(GPIOE, GPIO_PIN_8, GPIO_PIN_RESET);     // switch off LED
	
  
  /** switch/case: switches on LEDs depending on the random number when the user button is pressed
   */
  int i  = rand()%15;
		
  switch (i){
		case 0:
			   HAL_Delay(250);
			   HAL_GPIO_WritePin(GPIOE, GPIO_PIN_15, GPIO_PIN_SET);      // switch on LED
	       break;	
	  case 1:
			   HAL_Delay(250);
			   HAL_GPIO_WritePin(GPIOE, GPIO_PIN_12, GPIO_PIN_SET);      // switch on LED
	       break;	
	  case 2:
			   HAL_Delay(250);
		     HAL_GPIO_WritePin(GPIOE, GPIO_PIN_15, GPIO_PIN_SET);
			   HAL_GPIO_WritePin(GPIOE, GPIO_PIN_14, GPIO_PIN_SET);      // switch on LED
	       break;	
	  case 3:
			   HAL_Delay(250);
		     HAL_GPIO_WritePin(GPIOE, GPIO_PIN_12, GPIO_PIN_SET);
			   HAL_GPIO_WritePin(GPIOE, GPIO_PIN_8, GPIO_PIN_SET);      // switch on LED
	       break;
	  case 4:
			   HAL_Delay(250);
		     HAL_GPIO_WritePin(GPIOE, GPIO_PIN_15, GPIO_PIN_SET);
			   HAL_GPIO_WritePin(GPIOE, GPIO_PIN_14, GPIO_PIN_SET);
			   HAL_GPIO_WritePin(GPIOE, GPIO_PIN_13, GPIO_PIN_SET);      // switch on LED
	       break;	
	  case 5:
			   HAL_Delay(250);
		     HAL_GPIO_WritePin(GPIOE, GPIO_PIN_11, GPIO_PIN_SET);
			   HAL_GPIO_WritePin(GPIOE, GPIO_PIN_10, GPIO_PIN_SET);
			   HAL_GPIO_WritePin(GPIOE, GPIO_PIN_8, GPIO_PIN_SET);      // switch on LED
	       break;	
	  case 6:
			   HAL_Delay(250);
		     HAL_GPIO_WritePin(GPIOE, GPIO_PIN_15, GPIO_PIN_SET);
			   HAL_GPIO_WritePin(GPIOE, GPIO_PIN_14, GPIO_PIN_SET);
			   HAL_GPIO_WritePin(GPIOE, GPIO_PIN_13, GPIO_PIN_SET);
			   HAL_GPIO_WritePin(GPIOE, GPIO_PIN_12, GPIO_PIN_SET);      // switch on LED
	       break;	
	  case 7:
			   HAL_Delay(250);
		     HAL_GPIO_WritePin(GPIOE, GPIO_PIN_15, GPIO_PIN_SET);
			   HAL_GPIO_WritePin(GPIOE, GPIO_PIN_13, GPIO_PIN_SET);
			   HAL_GPIO_WritePin(GPIOE, GPIO_PIN_11, GPIO_PIN_SET);
			   HAL_GPIO_WritePin(GPIOE, GPIO_PIN_9, GPIO_PIN_SET);      // switch on LED
	       break;	
	  case 8:
			   HAL_Delay(250);
		     HAL_GPIO_WritePin(GPIOE, GPIO_PIN_15, GPIO_PIN_SET);
			   HAL_GPIO_WritePin(GPIOE, GPIO_PIN_14, GPIO_PIN_SET);
			   HAL_GPIO_WritePin(GPIOE, GPIO_PIN_13, GPIO_PIN_SET);
			   HAL_GPIO_WritePin(GPIOE, GPIO_PIN_12, GPIO_PIN_SET); 
			   HAL_GPIO_WritePin(GPIOE, GPIO_PIN_11, GPIO_PIN_SET);      // switch on LED
	       break;	
	  case 9:
			   HAL_Delay(250);
		     HAL_GPIO_WritePin(GPIOE, GPIO_PIN_15, GPIO_PIN_SET);
			   HAL_GPIO_WritePin(GPIOE, GPIO_PIN_14, GPIO_PIN_SET);
			   HAL_GPIO_WritePin(GPIOE, GPIO_PIN_10, GPIO_PIN_SET);
			   HAL_GPIO_WritePin(GPIOE, GPIO_PIN_9, GPIO_PIN_SET); 
			   HAL_GPIO_WritePin(GPIOE, GPIO_PIN_8, GPIO_PIN_SET);      // switch on LED
	       break;	
	  case 10:
			   HAL_Delay(250);
		     HAL_GPIO_WritePin(GPIOE, GPIO_PIN_15, GPIO_PIN_SET);
			   HAL_GPIO_WritePin(GPIOE, GPIO_PIN_14, GPIO_PIN_SET);
			   HAL_GPIO_WritePin(GPIOE, GPIO_PIN_13, GPIO_PIN_SET);
			   HAL_GPIO_WritePin(GPIOE, GPIO_PIN_12, GPIO_PIN_SET); 
			   HAL_GPIO_WritePin(GPIOE, GPIO_PIN_11, GPIO_PIN_SET);      
			   HAL_GPIO_WritePin(GPIOE, GPIO_PIN_10, GPIO_PIN_SET);      // switch on LED
	       break;	
	  case 11:
			   HAL_Delay(250);
		     HAL_GPIO_WritePin(GPIOE, GPIO_PIN_15, GPIO_PIN_SET);
			   HAL_GPIO_WritePin(GPIOE, GPIO_PIN_13, GPIO_PIN_SET);
			   HAL_GPIO_WritePin(GPIOE, GPIO_PIN_11, GPIO_PIN_SET);
			   HAL_GPIO_WritePin(GPIOE, GPIO_PIN_10, GPIO_PIN_SET); 
			   HAL_GPIO_WritePin(GPIOE, GPIO_PIN_9, GPIO_PIN_SET);      
			   HAL_GPIO_WritePin(GPIOE, GPIO_PIN_8, GPIO_PIN_SET);      // switch on LED
	       break;	
	  case 12:
			   HAL_Delay(250);
		     HAL_GPIO_WritePin(GPIOE, GPIO_PIN_15, GPIO_PIN_SET);
			   HAL_GPIO_WritePin(GPIOE, GPIO_PIN_14, GPIO_PIN_SET);
			   HAL_GPIO_WritePin(GPIOE, GPIO_PIN_13, GPIO_PIN_SET);
			   HAL_GPIO_WritePin(GPIOE, GPIO_PIN_12, GPIO_PIN_SET); 
			   HAL_GPIO_WritePin(GPIOE, GPIO_PIN_11, GPIO_PIN_SET);      
			   HAL_GPIO_WritePin(GPIOE, GPIO_PIN_10, GPIO_PIN_SET);
			   HAL_GPIO_WritePin(GPIOE, GPIO_PIN_9, GPIO_PIN_SET);      // switch on LED
	       break;	
	  case 13:
			   HAL_Delay(250);
		     HAL_GPIO_WritePin(GPIOE, GPIO_PIN_15, GPIO_PIN_SET);
			   HAL_GPIO_WritePin(GPIOE, GPIO_PIN_14, GPIO_PIN_SET);
			   HAL_GPIO_WritePin(GPIOE, GPIO_PIN_13, GPIO_PIN_SET);
			   HAL_GPIO_WritePin(GPIOE, GPIO_PIN_12, GPIO_PIN_SET); 
			   HAL_GPIO_WritePin(GPIOE, GPIO_PIN_10, GPIO_PIN_SET);      
			   HAL_GPIO_WritePin(GPIOE, GPIO_PIN_9, GPIO_PIN_SET);
			   HAL_GPIO_WritePin(GPIOE, GPIO_PIN_8, GPIO_PIN_SET);      // switch on LED
	       break;	
	  case 14:
			   HAL_Delay(250);
		     HAL_GPIO_WritePin(GPIOE, GPIO_PIN_15, GPIO_PIN_SET);
			   HAL_GPIO_WritePin(GPIOE, GPIO_PIN_14, GPIO_PIN_SET);
			   HAL_GPIO_WritePin(GPIOE, GPIO_PIN_13, GPIO_PIN_SET);
			   HAL_GPIO_WritePin(GPIOE, GPIO_PIN_12, GPIO_PIN_SET); 
			   HAL_GPIO_WritePin(GPIOE, GPIO_PIN_11, GPIO_PIN_SET);      
			   HAL_GPIO_WritePin(GPIOE, GPIO_PIN_10, GPIO_PIN_SET);
			   HAL_GPIO_WritePin(GPIOE, GPIO_PIN_9, GPIO_PIN_SET); 
			   HAL_GPIO_WritePin(GPIOE, GPIO_PIN_8, GPIO_PIN_SET);      // switch on LED
	       break;	
	    }		  
    } 
  /* USER CODE BEGIN 3 */

  }
  /* USER CODE END 3 */

}

/** System Clock Configuration*/
void SystemClock_Config(void)
{

  RCC_OscInitTypeDef RCC_OscInitStruct;
  RCC_ClkInitTypeDef RCC_ClkInitStruct;

  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = 16;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }

  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSI;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;
  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0) != HAL_OK)
  {
    Error_Handler();
  }

  HAL_SYSTICK_Config(HAL_RCC_GetHCLKFreq()/1000);

  HAL_SYSTICK_CLKSourceConfig(SYSTICK_CLKSOURCE_HCLK);

  /* SysTick_IRQn interrupt configuration */
  HAL_NVIC_SetPriority(SysTick_IRQn, 0, 0);
}

/** Configure pins as 
        * Analog 
        * Input 
        * Output
        * EVENT_OUT
        * EXTI
*/
static void MX_GPIO_Init(void)
{

  GPIO_InitTypeDef GPIO_InitStruct;

  /** GPIO Ports Clock Enable */
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOE_CLK_ENABLE();
  __HAL_RCC_GPIOD_CLK_ENABLE();

  /**Configure GPIO pin : PA0 */
  GPIO_InitStruct.Pin = GPIO_PIN_0;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /**Configure GPIO pins : PE8 PE9 PE10 PE11 
                           PE12 PE13 PE14 PE15 */
  GPIO_InitStruct.Pin = GPIO_PIN_8|GPIO_PIN_9|GPIO_PIN_10|GPIO_PIN_11 
                          |GPIO_PIN_12|GPIO_PIN_13|GPIO_PIN_14|GPIO_PIN_15;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOE, &GPIO_InitStruct);

  /**Configure GPIO pins : PD8 PD9 PD10 PD11 
                           PD12 PD13 PD14 PD15 */
  GPIO_InitStruct.Pin = GPIO_PIN_8|GPIO_PIN_9|GPIO_PIN_10|GPIO_PIN_11 
                          |GPIO_PIN_12|GPIO_PIN_13|GPIO_PIN_14|GPIO_PIN_15;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOD, &GPIO_InitStruct);

  /**Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOE, GPIO_PIN_8|GPIO_PIN_9|GPIO_PIN_10|GPIO_PIN_11 
                          |GPIO_PIN_12|GPIO_PIN_13|GPIO_PIN_14|GPIO_PIN_15, GPIO_PIN_RESET);

  /**Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOD, GPIO_PIN_8|GPIO_PIN_9|GPIO_PIN_10|GPIO_PIN_11 
                          |GPIO_PIN_12|GPIO_PIN_13|GPIO_PIN_14|GPIO_PIN_15, GPIO_PIN_RESET);

}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @param  None
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler */
  /* User can add his own implementation to report the HAL error return state */
  while(1) 
  {
  }
  /* USER CODE END Error_Handler */ 
}

#ifdef USE_FULL_ASSERT

/**
   * @brief Reports the name of the source file and the source line number
   * where the assert_param error has occurred.
   * @param file: pointer to the source file name
   * @param line: assert_param error line source number
   * @retval None
   */
void assert_failed(uint8_t* file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
    ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */

}

#endif

/**
  * @}
  */ 

/**
  * @}
*/ 

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
