/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */
/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#define T_HRS  12

void SystemClock_Config(void);
static void MX_GPIO_Init(void);

//Ex7
void clearAllClock(){
	//TODO
	HAL_GPIO_WritePin(LED_ONE_GPIO_Port, LED_ONE_Pin, SET);
	HAL_GPIO_WritePin(LED_TWO_GPIO_Port, LED_TWO_Pin, SET);
	HAL_GPIO_WritePin(LED_THREE_GPIO_Port, LED_THREE_Pin, SET);
	HAL_GPIO_WritePin(LED_FOUR_GPIO_Port, LED_FOUR_Pin, SET);
	HAL_GPIO_WritePin(LED_FIVE_GPIO_Port, LED_FIVE_Pin, SET);
	HAL_GPIO_WritePin(LED_SIX_GPIO_Port, LED_SIX_Pin, SET);
	HAL_GPIO_WritePin(LED_SEVEN_GPIO_Port, LED_SEVEN_Pin, SET);
	HAL_GPIO_WritePin(LED_EIGTH_GPIO_Port, LED_EIGTH_Pin, SET);
	HAL_GPIO_WritePin(LED_NINE_GPIO_Port, LED_NINE_Pin, SET);
	HAL_GPIO_WritePin(LED_TEN_GPIO_Port, LED_TEN_Pin, SET);
	HAL_GPIO_WritePin(LED_ELEVEN_GPIO_Port, LED_ELEVEN_Pin, SET);
	HAL_GPIO_WritePin(LED_TWEVLE_GPIO_Port, LED_TWEVLE_Pin, SET);
}

void setNumberOnClock(int number);
void clearNumberOnClock(int number);
/* USER CODE END PV */

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
  	int counter = 1;
	while (1)
	{
	  /* USER CODE END WHILE */
		setNumberOnClock(counter);
		if (counter == 1) {
			clearAllClock();
		}
		if (counter == T_HRS) {
			counter = 1;
			continue;
		}
		if (counter < T_HRS) {
			counter += 1;
		}
		HAL_Delay(1000);
	  /* USER CODE BEGIN 3 */
	}
  /* USER CODE END 3 */
}
// ex9
void clearNumberOnClock(int number) {
	switch (number) {
	case 1:
		HAL_GPIO_WritePin(LED_ONE_GPIO_Port, LED_ONE_Pin, SET);
		break;
	case 2:
		HAL_GPIO_WritePin(LED_TWO_GPIO_Port, LED_TWO_Pin, SET);
		break;
	case 3:
		HAL_GPIO_WritePin(LED_THREE_GPIO_Port, LED_THREE_Pin, SET);
		break;
	case 4:
		HAL_GPIO_WritePin(LED_FOUR_GPIO_Port, LED_FOUR_Pin, SET);
		break;
	case 5:
		HAL_GPIO_WritePin(LED_FIVE_GPIO_Port, LED_FIVE_Pin, SET);
		break;
	case 6:
		HAL_GPIO_WritePin(LED_SIX_GPIO_Port, LED_SIX_Pin, SET);
		break;
	case 7:
		HAL_GPIO_WritePin(LED_SEVEN_GPIO_Port, LED_SEVEN_Pin, SET);
		break;
	case 8:
		HAL_GPIO_WritePin(LED_EIGTH_GPIO_Port, LED_EIGTH_Pin, SET);
		break;
	case 9:
		HAL_GPIO_WritePin(LED_NINE_GPIO_Port, LED_NINE_Pin, SET);
		break;
	case 10:
		HAL_GPIO_WritePin(LED_TEN_GPIO_Port, LED_TEN_Pin, SET);
		break;
	case 11:
		HAL_GPIO_WritePin(LED_ELEVEN_GPIO_Port, LED_ELEVEN_Pin, SET);
		break;
	case 12:
		HAL_GPIO_WritePin(LED_TWEVLE_GPIO_Port, LED_TWEVLE_Pin, SET);
		break;
	}
}

void setNumberOnClock(int number){
	clearAllClock();
	switch (number) {
	case 1:
		HAL_GPIO_WritePin(LED_ONE_GPIO_Port, LED_ONE_Pin, RESET);
		HAL_GPIO_WritePin(LED_TWO_GPIO_Port, LED_TWO_Pin, SET);
		HAL_GPIO_WritePin(LED_THREE_GPIO_Port, LED_THREE_Pin, SET);
		HAL_GPIO_WritePin(LED_FOUR_GPIO_Port, LED_FOUR_Pin, SET);
		HAL_GPIO_WritePin(LED_FIVE_GPIO_Port, LED_FIVE_Pin, SET);
		HAL_GPIO_WritePin(LED_SIX_GPIO_Port, LED_SIX_Pin, SET);
		HAL_GPIO_WritePin(LED_SEVEN_GPIO_Port, LED_SEVEN_Pin, SET);
		HAL_GPIO_WritePin(LED_EIGTH_GPIO_Port, LED_EIGTH_Pin, SET);
		HAL_GPIO_WritePin(LED_NINE_GPIO_Port, LED_NINE_Pin, SET);
		HAL_GPIO_WritePin(LED_TEN_GPIO_Port, LED_TEN_Pin, SET);
		HAL_GPIO_WritePin(LED_ELEVEN_GPIO_Port, LED_ELEVEN_Pin, SET);
		HAL_GPIO_WritePin(LED_TWEVLE_GPIO_Port, LED_TWEVLE_Pin, SET);
		break;
	case 2:
		HAL_GPIO_WritePin(LED_ONE_GPIO_Port, LED_ONE_Pin, SET);
		HAL_GPIO_WritePin(LED_TWO_GPIO_Port, LED_TWO_Pin, RESET);
		HAL_GPIO_WritePin(LED_THREE_GPIO_Port, LED_THREE_Pin, SET);
		HAL_GPIO_WritePin(LED_FOUR_GPIO_Port, LED_FOUR_Pin, SET);
		HAL_GPIO_WritePin(LED_FIVE_GPIO_Port, LED_FIVE_Pin, SET);
		HAL_GPIO_WritePin(LED_SIX_GPIO_Port, LED_SIX_Pin, SET);
		HAL_GPIO_WritePin(LED_SEVEN_GPIO_Port, LED_SEVEN_Pin, SET);
		HAL_GPIO_WritePin(LED_EIGTH_GPIO_Port, LED_EIGTH_Pin, SET);
		HAL_GPIO_WritePin(LED_NINE_GPIO_Port, LED_NINE_Pin, SET);
		HAL_GPIO_WritePin(LED_TEN_GPIO_Port, LED_TEN_Pin, SET);
		HAL_GPIO_WritePin(LED_ELEVEN_GPIO_Port, LED_ELEVEN_Pin, SET);
		HAL_GPIO_WritePin(LED_TWEVLE_GPIO_Port, LED_TWEVLE_Pin, SET);
		break;
	case 3:
		HAL_GPIO_WritePin(LED_ONE_GPIO_Port, LED_ONE_Pin, SET);
		HAL_GPIO_WritePin(LED_TWO_GPIO_Port, LED_TWO_Pin, SET);
		HAL_GPIO_WritePin(LED_THREE_GPIO_Port, LED_THREE_Pin, RESET);
		HAL_GPIO_WritePin(LED_FOUR_GPIO_Port, LED_FOUR_Pin, SET);
		HAL_GPIO_WritePin(LED_FIVE_GPIO_Port, LED_FIVE_Pin, SET);
		HAL_GPIO_WritePin(LED_SIX_GPIO_Port, LED_SIX_Pin, SET);
		HAL_GPIO_WritePin(LED_SEVEN_GPIO_Port, LED_SEVEN_Pin, SET);
		HAL_GPIO_WritePin(LED_EIGTH_GPIO_Port, LED_EIGTH_Pin, SET);
		HAL_GPIO_WritePin(LED_NINE_GPIO_Port, LED_NINE_Pin, SET);
		HAL_GPIO_WritePin(LED_TEN_GPIO_Port, LED_TEN_Pin, SET);
		HAL_GPIO_WritePin(LED_ELEVEN_GPIO_Port, LED_ELEVEN_Pin, SET);
		HAL_GPIO_WritePin(LED_TWEVLE_GPIO_Port, LED_TWEVLE_Pin, SET);
		break;
	case 4:
				HAL_GPIO_WritePin(LED_ONE_GPIO_Port, LED_ONE_Pin, SET);
				HAL_GPIO_WritePin(LED_TWO_GPIO_Port, LED_TWO_Pin, SET);
				HAL_GPIO_WritePin(LED_THREE_GPIO_Port, LED_THREE_Pin, SET);
				HAL_GPIO_WritePin(LED_FOUR_GPIO_Port, LED_FOUR_Pin, RESET);
				HAL_GPIO_WritePin(LED_FIVE_GPIO_Port, LED_FIVE_Pin, SET);
				HAL_GPIO_WritePin(LED_SIX_GPIO_Port, LED_SIX_Pin, SET);
				HAL_GPIO_WritePin(LED_SEVEN_GPIO_Port, LED_SEVEN_Pin, SET);
				HAL_GPIO_WritePin(LED_EIGTH_GPIO_Port, LED_EIGTH_Pin, SET);
				HAL_GPIO_WritePin(LED_NINE_GPIO_Port, LED_NINE_Pin, SET);
				HAL_GPIO_WritePin(LED_TEN_GPIO_Port, LED_TEN_Pin, SET);
				HAL_GPIO_WritePin(LED_ELEVEN_GPIO_Port, LED_ELEVEN_Pin, SET);
				HAL_GPIO_WritePin(LED_TWEVLE_GPIO_Port, LED_TWEVLE_Pin, SET);
				break;
	case 5:
				HAL_GPIO_WritePin(LED_ONE_GPIO_Port, LED_ONE_Pin, SET);
				HAL_GPIO_WritePin(LED_TWO_GPIO_Port, LED_TWO_Pin, SET);
				HAL_GPIO_WritePin(LED_THREE_GPIO_Port, LED_THREE_Pin, SET);
				HAL_GPIO_WritePin(LED_FOUR_GPIO_Port, LED_FOUR_Pin, SET);
				HAL_GPIO_WritePin(LED_FIVE_GPIO_Port, LED_FIVE_Pin, RESET);
				HAL_GPIO_WritePin(LED_SIX_GPIO_Port, LED_SIX_Pin, SET);
				HAL_GPIO_WritePin(LED_SEVEN_GPIO_Port, LED_SEVEN_Pin, SET);
				HAL_GPIO_WritePin(LED_EIGTH_GPIO_Port, LED_EIGTH_Pin, SET);
				HAL_GPIO_WritePin(LED_NINE_GPIO_Port, LED_NINE_Pin, SET);
				HAL_GPIO_WritePin(LED_TEN_GPIO_Port, LED_TEN_Pin, SET);
				HAL_GPIO_WritePin(LED_ELEVEN_GPIO_Port, LED_ELEVEN_Pin, SET);
				HAL_GPIO_WritePin(LED_TWEVLE_GPIO_Port, LED_TWEVLE_Pin, SET);
				break;
	case 6:
				HAL_GPIO_WritePin(LED_ONE_GPIO_Port, LED_ONE_Pin, SET);
				HAL_GPIO_WritePin(LED_TWO_GPIO_Port, LED_TWO_Pin, SET);
				HAL_GPIO_WritePin(LED_THREE_GPIO_Port, LED_THREE_Pin, SET);
				HAL_GPIO_WritePin(LED_FOUR_GPIO_Port, LED_FOUR_Pin, SET);
				HAL_GPIO_WritePin(LED_FIVE_GPIO_Port, LED_FIVE_Pin, SET);
				HAL_GPIO_WritePin(LED_SIX_GPIO_Port, LED_SIX_Pin, RESET);
				HAL_GPIO_WritePin(LED_SEVEN_GPIO_Port, LED_SEVEN_Pin, SET);
				HAL_GPIO_WritePin(LED_EIGTH_GPIO_Port, LED_EIGTH_Pin, SET);
				HAL_GPIO_WritePin(LED_NINE_GPIO_Port, LED_NINE_Pin, SET);
				HAL_GPIO_WritePin(LED_TEN_GPIO_Port, LED_TEN_Pin, SET);
				HAL_GPIO_WritePin(LED_ELEVEN_GPIO_Port, LED_ELEVEN_Pin, SET);
				HAL_GPIO_WritePin(LED_TWEVLE_GPIO_Port, LED_TWEVLE_Pin, SET);
				break;
	case 7:
				HAL_GPIO_WritePin(LED_ONE_GPIO_Port, LED_ONE_Pin, SET);
				HAL_GPIO_WritePin(LED_TWO_GPIO_Port, LED_TWO_Pin, SET);
				HAL_GPIO_WritePin(LED_THREE_GPIO_Port, LED_THREE_Pin, SET);
				HAL_GPIO_WritePin(LED_FOUR_GPIO_Port, LED_FOUR_Pin, SET);
				HAL_GPIO_WritePin(LED_FIVE_GPIO_Port, LED_FIVE_Pin, SET);
				HAL_GPIO_WritePin(LED_SIX_GPIO_Port, LED_SIX_Pin, SET);
				HAL_GPIO_WritePin(LED_SEVEN_GPIO_Port, LED_SEVEN_Pin, RESET);
				HAL_GPIO_WritePin(LED_EIGTH_GPIO_Port, LED_EIGTH_Pin, SET);
				HAL_GPIO_WritePin(LED_NINE_GPIO_Port, LED_NINE_Pin, SET);
				HAL_GPIO_WritePin(LED_TEN_GPIO_Port, LED_TEN_Pin, SET);
				HAL_GPIO_WritePin(LED_ELEVEN_GPIO_Port, LED_ELEVEN_Pin, SET);
				HAL_GPIO_WritePin(LED_TWEVLE_GPIO_Port, LED_TWEVLE_Pin, SET);
				break;
	case 8:
				HAL_GPIO_WritePin(LED_ONE_GPIO_Port, LED_ONE_Pin, SET);
				HAL_GPIO_WritePin(LED_TWO_GPIO_Port, LED_TWO_Pin, SET);
				HAL_GPIO_WritePin(LED_THREE_GPIO_Port, LED_THREE_Pin, SET);
				HAL_GPIO_WritePin(LED_FOUR_GPIO_Port, LED_FOUR_Pin, SET);
				HAL_GPIO_WritePin(LED_FIVE_GPIO_Port, LED_FIVE_Pin, SET);
				HAL_GPIO_WritePin(LED_SIX_GPIO_Port, LED_SIX_Pin, SET);
				HAL_GPIO_WritePin(LED_SEVEN_GPIO_Port, LED_SEVEN_Pin, SET);
				HAL_GPIO_WritePin(LED_EIGTH_GPIO_Port, LED_EIGTH_Pin, RESET);
				HAL_GPIO_WritePin(LED_NINE_GPIO_Port, LED_NINE_Pin, SET);
				HAL_GPIO_WritePin(LED_TEN_GPIO_Port, LED_TEN_Pin, SET);
				HAL_GPIO_WritePin(LED_ELEVEN_GPIO_Port, LED_ELEVEN_Pin, SET);
				HAL_GPIO_WritePin(LED_TWEVLE_GPIO_Port, LED_TWEVLE_Pin, SET);
				break;
	case 9:
				HAL_GPIO_WritePin(LED_ONE_GPIO_Port, LED_ONE_Pin, SET);
				HAL_GPIO_WritePin(LED_TWO_GPIO_Port, LED_TWO_Pin, SET);
				HAL_GPIO_WritePin(LED_THREE_GPIO_Port, LED_THREE_Pin, SET);
				HAL_GPIO_WritePin(LED_FOUR_GPIO_Port, LED_FOUR_Pin, SET);
				HAL_GPIO_WritePin(LED_FIVE_GPIO_Port, LED_FIVE_Pin, SET);
				HAL_GPIO_WritePin(LED_SIX_GPIO_Port, LED_SIX_Pin, SET);
				HAL_GPIO_WritePin(LED_SEVEN_GPIO_Port, LED_SEVEN_Pin, SET);
				HAL_GPIO_WritePin(LED_EIGTH_GPIO_Port, LED_EIGTH_Pin, SET);
				HAL_GPIO_WritePin(LED_NINE_GPIO_Port, LED_NINE_Pin, RESET);
				HAL_GPIO_WritePin(LED_TEN_GPIO_Port, LED_TEN_Pin, SET);
				HAL_GPIO_WritePin(LED_ELEVEN_GPIO_Port, LED_ELEVEN_Pin, SET);
				HAL_GPIO_WritePin(LED_TWEVLE_GPIO_Port, LED_TWEVLE_Pin, SET);
				break;
	case 10:
				HAL_GPIO_WritePin(LED_ONE_GPIO_Port, LED_ONE_Pin, SET);
				HAL_GPIO_WritePin(LED_TWO_GPIO_Port, LED_TWO_Pin, SET);
				HAL_GPIO_WritePin(LED_THREE_GPIO_Port, LED_THREE_Pin, SET);
				HAL_GPIO_WritePin(LED_FOUR_GPIO_Port, LED_FOUR_Pin, SET);
				HAL_GPIO_WritePin(LED_FIVE_GPIO_Port, LED_FIVE_Pin, SET);
				HAL_GPIO_WritePin(LED_SIX_GPIO_Port, LED_SIX_Pin, SET);
				HAL_GPIO_WritePin(LED_SEVEN_GPIO_Port, LED_SEVEN_Pin, SET);
				HAL_GPIO_WritePin(LED_EIGTH_GPIO_Port, LED_EIGTH_Pin, SET);
				HAL_GPIO_WritePin(LED_NINE_GPIO_Port, LED_NINE_Pin, SET);
				HAL_GPIO_WritePin(LED_TEN_GPIO_Port, LED_TEN_Pin, RESET);
				HAL_GPIO_WritePin(LED_ELEVEN_GPIO_Port, LED_ELEVEN_Pin, SET);
				HAL_GPIO_WritePin(LED_TWEVLE_GPIO_Port, LED_TWEVLE_Pin, SET);
				break;
	case 11:
				HAL_GPIO_WritePin(LED_ONE_GPIO_Port, LED_ONE_Pin, SET);
				HAL_GPIO_WritePin(LED_TWO_GPIO_Port, LED_TWO_Pin, SET);
				HAL_GPIO_WritePin(LED_THREE_GPIO_Port, LED_THREE_Pin, SET);
				HAL_GPIO_WritePin(LED_FOUR_GPIO_Port, LED_FOUR_Pin, SET);
				HAL_GPIO_WritePin(LED_FIVE_GPIO_Port, LED_FIVE_Pin, SET);
				HAL_GPIO_WritePin(LED_SIX_GPIO_Port, LED_SIX_Pin, SET);
				HAL_GPIO_WritePin(LED_SEVEN_GPIO_Port, LED_SEVEN_Pin, SET);
				HAL_GPIO_WritePin(LED_EIGTH_GPIO_Port, LED_EIGTH_Pin, SET);
				HAL_GPIO_WritePin(LED_NINE_GPIO_Port, LED_NINE_Pin, SET);
				HAL_GPIO_WritePin(LED_TEN_GPIO_Port, LED_TEN_Pin, SET);
				HAL_GPIO_WritePin(LED_ELEVEN_GPIO_Port, LED_ELEVEN_Pin, RESET);
				HAL_GPIO_WritePin(LED_TWEVLE_GPIO_Port, LED_TWEVLE_Pin, SET);
				break;
	case 12:
				HAL_GPIO_WritePin(LED_ONE_GPIO_Port, LED_ONE_Pin, SET);
				HAL_GPIO_WritePin(LED_TWO_GPIO_Port, LED_TWO_Pin, SET);
				HAL_GPIO_WritePin(LED_THREE_GPIO_Port, LED_THREE_Pin, SET);
				HAL_GPIO_WritePin(LED_FOUR_GPIO_Port, LED_FOUR_Pin, SET);
				HAL_GPIO_WritePin(LED_FIVE_GPIO_Port, LED_FIVE_Pin, SET);
				HAL_GPIO_WritePin(LED_SIX_GPIO_Port, LED_SIX_Pin, SET);
				HAL_GPIO_WritePin(LED_SEVEN_GPIO_Port, LED_SEVEN_Pin, SET);
				HAL_GPIO_WritePin(LED_EIGTH_GPIO_Port, LED_EIGTH_Pin, SET);
				HAL_GPIO_WritePin(LED_NINE_GPIO_Port, LED_NINE_Pin, SET);
				HAL_GPIO_WritePin(LED_TEN_GPIO_Port, LED_TEN_Pin, SET);
				HAL_GPIO_WritePin(LED_ELEVEN_GPIO_Port, LED_ELEVEN_Pin, SET);
				HAL_GPIO_WritePin(LED_TWEVLE_GPIO_Port, LED_TWEVLE_Pin, RESET);
				break;
	default:
		break;
	}
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
  HAL_GPIO_WritePin(GPIOA, LED_ONE_Pin|LED_TWO_Pin|LED_THREE_Pin|LED_FOUR_Pin
                          |LED_FIVE_Pin|LED_SIX_Pin|LED_SEVEN_Pin|LED_EIGTH_Pin
                          |LED_NINE_Pin|LED_TEN_Pin|LED_ELEVEN_Pin|LED_TWEVLE_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pins : LED_ONE_Pin LED_TWO_Pin LED_THREE_Pin LED_FOUR_Pin
                           LED_FIVE_Pin LED_SIX_Pin LED_SEVEN_Pin LED_EIGTH_Pin
                           LED_NINE_Pin LED_TEN_Pin LED_ELEVEN_Pin LED_TWEVLE_Pin */
  GPIO_InitStruct.Pin = LED_ONE_Pin|LED_TWO_Pin|LED_THREE_Pin|LED_FOUR_Pin
                          |LED_FIVE_Pin|LED_SIX_Pin|LED_SEVEN_Pin|LED_EIGTH_Pin
                          |LED_NINE_Pin|LED_TEN_Pin|LED_ELEVEN_Pin|LED_TWEVLE_Pin;
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
