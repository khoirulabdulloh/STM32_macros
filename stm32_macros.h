/*
 * stm32_macros.h
 *
 *  Created on: Jun 29, 2024
 *      Author: Inaskills Electronics Team
 *     version: V1_0
 */
#pragma once
#include "main.h"

#ifndef INC_STM32_MACROS_H_
#define INC_STM32_MACROS_H_

#define GPIOA_0		0x0100
#define GPIOA_1		0x0101
#define GPIOA_2		0x0102
#define GPIOA_3		0x0103
#define GPIOA_4		0x0104
#define GPIOA_5		0x0105
#define GPIOA_6		0x0106
#define GPIOA_7		0x0107
#define GPIOA_8		0x0108
#define GPIOA_9		0x0109
#define GPIOA_10	0x010A
#define GPIOA_11	0x010B
#define GPIOA_12	0x010C
#define GPIOA_13	0x010D
#define GPIOA_14	0x010E
#define GPIOA_15	0x010F

#define GPIOB_0		0x0200
#define GPIOB_1		0x0201
#define GPIOB_2		0x0202
#define GPIOB_3		0x0203
#define GPIOB_4		0x0204
#define GPIOB_5		0x0205
#define GPIOB_6		0x0206
#define GPIOB_7		0x0207
#define GPIOB_8		0x0208
#define GPIOB_9		0x0209
#define GPIOB_10	0x020A
#define GPIOB_11	0x020B
#define GPIOB_12	0x020C
#define GPIOB_13	0x020D
#define GPIOB_14	0x020E
#define GPIOB_15	0x020F

#define GPIOC_0		0x0300
#define GPIOC_1		0x0301
#define GPIOC_2		0x0302
#define GPIOC_3		0x0303
#define GPIOC_4		0x0304
#define GPIOC_5		0x0305
#define GPIOC_6		0x0306
#define GPIOC_7		0x0307
#define GPIOC_8		0x0308
#define GPIOC_9		0x0309
#define GPIOC_10	0x030A
#define GPIOC_11	0x030B
#define GPIOC_12	0x030C
#define GPIOC_13	0x030D
#define GPIOC_14	0x030E
#define GPIOC_15	0x030F

#define LOW		0
#define HIGH	1

typedef enum{
	OUTPUT,
	OUTPUT_OPENDRAIN,
	INPUT,
	INPUT_PULLUP,
	INPUT_PULLDOWN,
}GPIO_Mode;

GPIO_TypeDef *_portChart[3]={
	GPIOA,
	GPIOB,
	GPIOC,
};

const uint16_t _pinChart[16]={
	GPIO_PIN_0,
	GPIO_PIN_1,
	GPIO_PIN_2,
	GPIO_PIN_3,
	GPIO_PIN_4,
	GPIO_PIN_5,
	GPIO_PIN_6,
	GPIO_PIN_7,
	GPIO_PIN_8,
	GPIO_PIN_9,
	GPIO_PIN_10,
	GPIO_PIN_11,
	GPIO_PIN_12,
	GPIO_PIN_13,
	GPIO_PIN_14,
	GPIO_PIN_15,
};

/**
  * @brief  Fungsi untuk mendapatkan nilai port yang digunakan.
  *
  * @param  GPIO_Pin: input port pin
  * 			@arg GPIOA_0 : port yang digunakan GPIOA dan pin yang digunakan PIN_0
  * @retval nilai port
  */
GPIO_TypeDef *STM32_getPort(uint16_t GPIO_Port){
	return _portChart[(GPIO_Port>>8)-1];
}

/**
  * @brief  Fungsi untuk mendapatkan nilai pin yang digunakan.
  *
  * @param  GPIO_Pin: input port pin
  * 		   @arg GPIOA_0 : port yang digunakan GPIOA dan pin yang digunakan PIN_0
  * @retval nilai pin
  */
uint16_t STM32_getPin(uint16_t GPIO_Pin){
	return _pinChart[GPIO_Pin & 0xFF];
}

/**
  * @brief  Fungsi untuk mengubah mode dari GPIO.
  *
  * @param  GPIO_Pin: input port pin
  * 		   @arg GPIOA_0 : port yang digunakan GPIOA dan pin yang digunakan PIN_0
  * 		Mode : merupakan mode dari GPIO.
  * 			@arg OUTPUT : Output with Push pull
  * 			@arg OUTPUT_OPENDRAIN : Output with Open Drain
  * 			@arg INPUT : Input with volatile pin
  * 			@arg INPUT_PULLUP : Input with internal pull up pin
  * 			@arg INPUT_PULLDOWN : Input with internal pull down pin
  * @retval Tidak ada
  */
void STM32_pinMode(uint16_t GPIO_Pin, GPIO_Mode Mode){
	GPIO_InitTypeDef GPIO_InitStruct = {0};

	GPIO_TypeDef *_Port = STM32_getPort(GPIO_Pin);
	uint16_t _Pin = STM32_getPin(GPIO_Pin);

	/* GPIO Ports Clock Enable */
	__HAL_RCC_GPIOC_CLK_ENABLE();
	__HAL_RCC_GPIOD_CLK_ENABLE();
	__HAL_RCC_GPIOB_CLK_ENABLE();
	__HAL_RCC_GPIOA_CLK_ENABLE();

	HAL_GPIO_WritePin(_Port, _Pin, GPIO_PIN_RESET);

	GPIO_InitStruct.Pin = _Pin;

	switch(Mode){
	case OUTPUT:
		GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
		GPIO_InitStruct.Pull = GPIO_NOPULL;
		break;
	case OUTPUT_OPENDRAIN:
		GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_OD;
		GPIO_InitStruct.Pull = GPIO_NOPULL;
		break;
	case INPUT:
		GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
		GPIO_InitStruct.Pull = GPIO_NOPULL;
		break;
	case INPUT_PULLUP:
		GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
		GPIO_InitStruct.Pull = GPIO_PULLUP;
		break;
	case INPUT_PULLDOWN:
		GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
		GPIO_InitStruct.Pull = GPIO_PULLDOWN;
		break;
	}

	GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;

	HAL_GPIO_Init(_Port, &GPIO_InitStruct);
}

/**
  * @brief  Fungsi untuk mengubah pin yang dipilih menjadi HIGH atau LOW.
  *
  * @note   fungsi ini menggunakan GPIOx_BSRR register untuk melakukan pengaksesan.
  * 		dengan cara ini tidak ada resiko IRQ ketika memodifikasi pembacaan dan akses.
  *
  * @param  GPIO_Pin: input port pin
  * 		   @arg GPIOA_0 : port yang digunakan GPIOA dan pin yang digunakan PIN_0
  * @param  state: kondisi dari pin yang akan di tulis.
  *            @arg LOW: untuk membuat kondisi pin menjadi LOW
  *            @arg HIGH: untuk membuat kondisi pin menjadi HIGH
  * @retval Tidak ada
  */
void STM32_digitalWrite(uint16_t GPIO_Pin, _Bool PinState){

	GPIO_TypeDef *_Port = STM32_getPort(GPIO_Pin);
	uint16_t _Pin = STM32_getPin(GPIO_Pin);

	assert_param(IS_GPIO_PIN(_pin));
	assert_param(IS_GPIO_PIN_ACTION(PinState));

	if (PinState != GPIO_PIN_RESET)
	{
		_Port->BSRR = _Pin;
	}
	else
	{
		_Port->BSRR = (uint32_t)_Pin << 16u;
	}
}

/**
  * @brief  Membaca kondisi digital GPIO.
  * @param  GPIO_Pin: input port pin
  * 		   @arg GPIOA_0 : port yang digunakan GPIOA dan pin yang digunakan PIN_0
  * @retval Nilai input port pin.
  */
_Bool STM32_digitalRead(uint16_t GPIO_Pin){
	GPIO_TypeDef *_Port = STM32_getPort(GPIO_Pin);
	uint16_t _Pin = STM32_getPin(GPIO_Pin);

	_Bool bitstatus;

	/* Check the parameters */
	assert_param(IS_GPIO_PIN(_Pin));

	if ((_Port->IDR & _Pin) != (uint32_t)GPIO_PIN_RESET)
	{
	bitstatus = HIGH;
	}
	else
	{
	bitstatus = LOW;
	}
	return bitstatus;
}

//	your macros here...



//	-------------------

#endif /* INC_STM32_MACROS_H_ */
