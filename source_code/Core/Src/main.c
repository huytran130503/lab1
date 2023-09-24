/* USER CODE BEGIN Header */
/**
  ****************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ****************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ****************************************************************************
  */
/* USER CODE END Header */
/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */
/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/

/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  /* USER CODE BEGIN 2 */

  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  // GLOBAL VARIABLE

  int OneSecond=10; // set duration of one second (100 = 1 real second)
  int CurrSecond=0; // current second in the minute
  int CurrMinute=0; // current minute in the hour
  int CurrHour=0; // current hour in 12-hour period
  int LastSecond=59;
  int LastMinute=59;
  int LastHour=11;
  ////////////////////////////////////////////////
  void OnP_0(){
	  HAL_GPIO_WritePin (P_0_GPIO_Port, P_0_Pin, GPIO_PIN_RESET);
  }
  void OnP_1(){
	  HAL_GPIO_WritePin (P_1_GPIO_Port, P_1_Pin, GPIO_PIN_RESET);
  }
  void OnP_2(){
	  HAL_GPIO_WritePin (P_2_GPIO_Port, P_2_Pin, GPIO_PIN_RESET);
  }
  void OnP_3(){
	  HAL_GPIO_WritePin (P_3_GPIO_Port, P_3_Pin, GPIO_PIN_RESET);
  }
  void OnP_4(){
	  HAL_GPIO_WritePin (P_4_GPIO_Port, P_4_Pin, GPIO_PIN_RESET);
  }
  void OnP_5(){
	  HAL_GPIO_WritePin (P_5_GPIO_Port, P_5_Pin, GPIO_PIN_RESET);
  }
  void OnP_6(){
	  HAL_GPIO_WritePin (P_6_GPIO_Port, P_6_Pin, GPIO_PIN_RESET);
  }
  void OnP_7(){
	  HAL_GPIO_WritePin (P_7_GPIO_Port, P_7_Pin, GPIO_PIN_RESET);
  }
  void OnP_8(){
	  HAL_GPIO_WritePin (P_8_GPIO_Port, P_8_Pin, GPIO_PIN_RESET);
  }
  void OnP_9(){
	  HAL_GPIO_WritePin (P_9_GPIO_Port, P_9_Pin, GPIO_PIN_RESET);
  }
  void OnP_10(){
	  HAL_GPIO_WritePin (P_10_GPIO_Port, P_10_Pin, GPIO_PIN_RESET);
  }
  void OnP_11(){
	  HAL_GPIO_WritePin (P_11_GPIO_Port, P_11_Pin, GPIO_PIN_RESET);
  }
  ////////////////////////////////////////////////
  void OffP_0(){
  	  HAL_GPIO_WritePin (P_0_GPIO_Port, P_0_Pin, GPIO_PIN_SET);
    }
    void OffP_1(){
  	  HAL_GPIO_WritePin (P_1_GPIO_Port, P_1_Pin, GPIO_PIN_SET);
    }
    void OffP_2(){
  	  HAL_GPIO_WritePin (P_2_GPIO_Port, P_2_Pin, GPIO_PIN_SET);
    }
    void OffP_3(){
  	  HAL_GPIO_WritePin (P_3_GPIO_Port, P_3_Pin, GPIO_PIN_SET);
    }
    void OffP_4(){
  	  HAL_GPIO_WritePin (P_4_GPIO_Port, P_4_Pin, GPIO_PIN_SET);
    }
    void OffP_5(){
  	  HAL_GPIO_WritePin (P_5_GPIO_Port, P_5_Pin, GPIO_PIN_SET);
    }
    void OffP_6(){
  	  HAL_GPIO_WritePin (P_6_GPIO_Port, P_6_Pin, GPIO_PIN_SET);
    }
    void OffP_7(){
  	  HAL_GPIO_WritePin (P_7_GPIO_Port, P_7_Pin, GPIO_PIN_SET);
    }
    void OffP_8(){
  	  HAL_GPIO_WritePin (P_8_GPIO_Port, P_8_Pin, GPIO_PIN_SET);
    }
    void OffP_9(){
  	  HAL_GPIO_WritePin (P_9_GPIO_Port, P_9_Pin, GPIO_PIN_SET);
    }
    void OffP_10(){
  	  HAL_GPIO_WritePin (P_10_GPIO_Port, P_10_Pin, GPIO_PIN_SET);
    }
    void OffP_11(){
  	  HAL_GPIO_WritePin (P_11_GPIO_Port, P_11_Pin, GPIO_PIN_SET);
    }
    ////////////////////////////////////////////////
    void clearAllClock(){
        OffP_0();
        OffP_1();
        OffP_2();
        OffP_3();
        OffP_4();
        OffP_5();
        OffP_6();
        OffP_7();
        OffP_8();
        OffP_9();
        OffP_10();
        OffP_11();
    }
    ////////////////////////////////////////////////
    void setNumberOnClock(int i){
    	switch(i){
    	case 0:
    		OnP_0();
    		break;
    	case 1:
    		OnP_1();
    		break;
    	case 2:
    		OnP_2();
    		break;
    	case 3:
    		OnP_3();
    		break;
    	case 4:
    		OnP_4();
    		break;
    	case 5:
    		OnP_5();
    		break;
    	case 6:
    		OnP_6();
    		break;
    	case 7:
    		OnP_7();
    		break;
    	case 8:
    		OnP_8();
    		break;
    	case 9:
    		OnP_9();
    		break;
    	case 10:
    		OnP_10();
    		break;
    	case 11:
    		OnP_11();
    		break;
    	default:
    		OnP_0();
    	}
    }
    void clearNumberOnClock(int i){
    	switch(i){
    	case 0:
    		OffP_0();
    		break;
    	case 1:
    		OffP_1();
    		break;
    	case 2:
    		OffP_2();
    		break;
    	case 3:
    		OffP_3();
    		break;
    	case 4:
    		OffP_4();
    		break;
    	case 5:
    		OffP_5();
    		break;
    	case 6:
    		OffP_6();
    		break;
    	case 7:
    		OffP_7();
    		break;
    	case 8:
    		OffP_8();
    		break;
    	case 9:
    		OffP_9();
    		break;
    	case 10:
    		OffP_10();
    		break;
    	case 11:
    		OffP_11();
    		break;
    	default:
    		OffP_0();
    	}
    }

    ////////////////////////////////////////////////
    int timer1_counter = 0;
    int timer1_flag = 0;

    void setTimer1(int duration){
    	timer1_counter = duration;
    	timer1_flag = 0;
    }
    void timerRun(){
    	if(timer1_counter > 0){
    		timer1_counter--;
    		if(timer1_counter <= 0){
    			timer1_flag = 1;
    		}
    	}
    }
    ////////////////////////////////////////////////
    int OnSecond(){
    	if(timer1_flag==1){
    		CurrSecond++;
    		return 1;
    	}
    	return 0;
    }
    int CheckMinute(){
    	if(CurrSecond>=60){
    		CurrSecond=0;
    		CurrMinute++;
    		return 1;
    	}
    	return 0;
    }
    int CheckHour(){
		if(CurrMinute>=60){
			CurrMinute=0;
			CurrHour++;
			return 1;
		}
		return 0;
    }
    int CheckResetTime(){
		if(CurrHour>=12){
			CurrHour=0;
			return 1;
		}
		return 0;
    }
    ////////////////////////////////////////////////
    clearAllClock();
    setTimer1(OneSecond);
    setNumberOnClock(0);
  while (1)
  {
	  // LAB1 EX7
	  HAL_Delay(10);
	  timerRun();
	  if(timer1_flag==1){
		  LastSecond=CurrSecond;
		  LastMinute=CurrMinute;
		  LastHour=CurrHour;
		  OnSecond();// check to add 1 to CurrSecond
		  CheckMinute(); // check to add 1 to CurrMinute and update CurrSecond
		  CheckHour(); // check to add 1 to CurrHour and update CurrMinute
		  CheckResetTime(); // update CurrHour
		  if(LastSecond/5!=CurrSecond/5){
			  clearAllClock();
			  setNumberOnClock(CurrSecond/5);
			  setNumberOnClock(CurrMinute/5);
			  setNumberOnClock(CurrHour);
		  }
		  setTimer1(OneSecond);
	  }

    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */
  }
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }
  /** Initializes the CPU, AHB and APB buses clocks
  */
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
}

/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOA_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOA, P_0_Pin|P_1_Pin|P_2_Pin|P_3_Pin
                          |P_4_Pin|P_5_Pin|P_6_Pin|P_7_Pin
                          |P_8_Pin|P_9_Pin|P_10_Pin|P_11_Pin, GPIO_PIN_SET);

  /*Configure GPIO pins : P_0_Pin P_1_Pin P_2_Pin P_3_Pin
                           P_4_Pin P_5_Pin P_6_Pin P_7_Pin
                           P_8_Pin P_9_Pin P_10_Pin P_11_Pin */
  GPIO_InitStruct.Pin = P_0_Pin|P_1_Pin|P_2_Pin|P_3_Pin
                          |P_4_Pin|P_5_Pin|P_6_Pin|P_7_Pin
                          |P_8_Pin|P_9_Pin|P_10_Pin|P_11_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
