/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file    app_usbx_device.h
  * @author  MCD Application Team
  * @brief   USBX Device applicative header file
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2020-2021 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __APP_USBX_DEVICE_H__
#define __APP_USBX_DEVICE_H__

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "ux_api.h"
#include "ux_device_descriptors.h"
#include "ux_device_mouse.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
#define USBX_DEVICE_APP_MEMORY_BUFFER_SIZE  5*1024
#define USBX_DEVICE_MEMORY_STACK_SIZE       5*1024

/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
UINT MX_USBX_Device_Init(VOID);

/* USER CODE BEGIN EFP */
VOID USBX_Device_Process(VOID);
/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
/* USER CODE BEGIN PD */

/* USER CODE END PD */

/* USER CODE BEGIN 1 */

/* USER CODE END 1 */

#ifdef __cplusplus
}
#endif
#endif /* __APP_USBX_DEVICE_H__ */
