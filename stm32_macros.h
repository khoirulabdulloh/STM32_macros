/**
  ******************************************************************************
  * @file    stm32_macros.h
  * @author  createme.id and Inaskills Electronics Team
  * @brief   This file contains all the functions for the STM32 module driver.
  * @version 1.2.1
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 createme.id.
  * All rights reserved.
  *
  * This library is free software; you can redistribute it and/or
  * modify it under the terms of the GNU Lesser General Public
  * License as published by the Free Software Foundation.

  * This library is distributed in the hope that it will be useful,
  * but WITHOUT ANY WARRANTY; without even the implied warranty of
  * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  * Lesser General Public License for more details.

  * You should have received a copy of the GNU Lesser General Public
  * License along with this library.
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef INC_STM32_MACROS_H_
#define INC_STM32_MACROS_H_

#ifdef __cplusplus
extern "C"
{
#endif

/* Includes ------------------------------------------------------------------*/
#pragma once
#include "main.h"

/** @addtogroup Peripheral_declaration
 * @{
 */

// Konfigurasi untuk STM32F1 series
#define GPIO_PORT_1 GPIOA
#define GPIO_PORT_2 GPIOB
#define GPIO_PORT_3 GPIOC
#define GPIO_PORT_4 GPIOD

#define GPIOA_0 0x0100
#define GPIOA_1 0x0101
#define GPIOA_2 0x0102
#define GPIOA_3 0x0103
#define GPIOA_4 0x0104
#define GPIOA_5 0x0105
#define GPIOA_6 0x0106
#define GPIOA_7 0x0107
#define GPIOA_8 0x0108
#define GPIOA_9 0x0109
#define GPIOA_10 0x010A
#define GPIOA_11 0x010B
#define GPIOA_12 0x010C
#define GPIOA_13 0x010D
#define GPIOA_14 0x010E
#define GPIOA_15 0x010F

#define GPIOB_0 0x0200
#define GPIOB_1 0x0201
#define GPIOB_2 0x0202
#define GPIOB_3 0x0203
#define GPIOB_4 0x0204
#define GPIOB_5 0x0205
#define GPIOB_6 0x0206
#define GPIOB_7 0x0207
#define GPIOB_8 0x0208
#define GPIOB_9 0x0209
#define GPIOB_10 0x020A
#define GPIOB_11 0x020B
#define GPIOB_12 0x020C
#define GPIOB_13 0x020D
#define GPIOB_14 0x020E
#define GPIOB_15 0x020F

#define GPIOC_0 0x0300
#define GPIOC_1 0x0301
#define GPIOC_2 0x0302
#define GPIOC_3 0x0303
#define GPIOC_4 0x0304
#define GPIOC_5 0x0305
#define GPIOC_6 0x0306
#define GPIOC_7 0x0307
#define GPIOC_8 0x0308
#define GPIOC_9 0x0309
#define GPIOC_10 0x030A
#define GPIOC_11 0x030B
#define GPIOC_12 0x030C
#define GPIOC_13 0x030D
#define GPIOC_14 0x030E
#define GPIOC_15 0x030F

#define GPIOD_0 0x0400
#define GPIOD_1 0x0401
#define GPIOD_2 0x0402
#define GPIOD_3 0x0404
#define GPIOD_4 0x0404
#define GPIOD_5 0x0405
#define GPIOD_6 0x0406
#define GPIOD_7 0x0407
#define GPIOD_8 0x0408
#define GPIOD_9 0x0409
#define GPIOD_10 0x040A
#define GPIOD_11 0x040B
#define GPIOD_12 0x040C
#define GPIOD_13 0x040D
#define GPIOD_14 0x040E
#define GPIOD_15 0x040F

#ifdef STM32F4xx // Konfigurasi untuk STM32F4 series
#define GPIO_PORT_5 GPIOE
#define GPIO_PORT_6 GPIOF
#define GPIO_PORT_7 GPIOG
#define GPIO_PORT_8 GPIOH
#define GPIO_PORT_9 GPIOI

#define GPIOE_0 0x0500
#define GPIOE_1 0x0501
#define GPIOE_2 0x0502
#define GPIOE_3 0x0504
#define GPIOE_4 0x0504
#define GPIOE_5 0x0505
#define GPIOE_6 0x0506
#define GPIOE_7 0x0507
#define GPIOE_8 0x0508
#define GPIOE_9 0x0509
#define GPIOE_10 0x050A
#define GPIOE_11 0x050B
#define GPIOE_12 0x050C
#define GPIOE_13 0x050D
#define GPIOE_14 0x050E
#define GPIOE_15 0x050F

#define GPIOF_0 0x0600
#define GPIOF_1 0x0601
#define GPIOF_2 0x0602
#define GPIOF_3 0x0604
#define GPIOF_4 0x0604
#define GPIOF_5 0x0605
#define GPIOF_6 0x0606
#define GPIOF_7 0x0607
#define GPIOF_8 0x0608
#define GPIOF_9 0x0609
#define GPIOF_10 0x060A
#define GPIOF_11 0x060B
#define GPIOF_12 0x060C
#define GPIOF_13 0x060D
#define GPIOF_14 0x060E
#define GPIOF_15 0x060F

#define GPIOG_0 0x0700
#define GPIOG_1 0x0701
#define GPIOG_2 0x0702
#define GPIOG_3 0x0704
#define GPIOG_4 0x0704
#define GPIOG_5 0x0705
#define GPIOG_6 0x0706
#define GPIOG_7 0x0707
#define GPIOG_8 0x0708
#define GPIOG_9 0x0709
#define GPIOG_10 0x070A
#define GPIOG_11 0x070B
#define GPIOG_12 0x070C
#define GPIOG_13 0x070D
#define GPIOG_14 0x070E
#define GPIOG_15 0x070F

#define GPIOH_0 0x0800
#define GPIOH_1 0x0801
#define GPIOH_2 0x0802
#define GPIOH_3 0x0804
#define GPIOH_4 0x0804
#define GPIOH_5 0x0805
#define GPIOH_6 0x0806
#define GPIOH_7 0x0807
#define GPIOH_8 0x0808
#define GPIOH_9 0x0809
#define GPIOH_10 0x080A
#define GPIOH_11 0x080B
#define GPIOH_12 0x080C
#define GPIOH_13 0x080D
#define GPIOH_14 0x080E
#define GPIOH_15 0x080F
#endif

    /**
     * @}
     */

#define PI 3.1415926535897932384626433832795
#define HALF_PI 1.5707963267948966192313216916398
#define TWO_PI 6.283185307179586476925286766559
#define DEG_TO_RAD 0.017453292519943295769236907684886
#define RAD_TO_DEG 57.295779513082320876798154814105
#define EULER 2.718281828459045235360287471352x

#define LOW 0
#define HIGH 1

#define LSBFIRST 0
#define MSBFIRST 1

#define min(a, b) ((a) < (b) ? (a) : (b))
#define max(a, b) ((a) > (b) ? (a) : (b))
#define abs(x) ((x) > 0 ? (x) : -(x))
#define constrain(amt, low, high) ((amt) < (low) ? (low) : ((amt) > (high) ? (high) : (amt)))
#define round(x) ((x) >= 0 ? (long)((x) + 0.5) : (long)((x) - 0.5))
#define radians(deg) ((deg) * DEG_TO_RAD)
#define degrees(rad) ((rad) * RAD_TO_DEG)
#define sq(x) ((x) * (x))

    typedef enum
    {
        OUTPUT,
        OUTPUT_OPENDRAIN,
        INPUT,
        INPUT_PULLUP,
        INPUT_PULLDOWN,
    } GPIO_Mode;

    GPIO_TypeDef *_portChart[8] = {
        //    GPIO_PORT_1, // GPIOA
        //    GPIO_PORT_2, // GPIOB
        //    GPIO_PORT_3, // GPIOC
        //    GPIO_PORT_4  // GPIOD
        GPIOA,
        GPIOB,
        GPIOC,
        GPIOD,

#ifdef STM32F4xx
        //    GPIO_PORT_5, // GPIOE
        //    GPIO_PORT_6, // GPIOF
        //    GPIO_PORT_7, // GPIOG
        //    GPIO_PORT_8, // GPIOH
        //    GPIO_PORT_9  // GPIOI
        GPIOE,
        GPIOF,
        GPIOG,
        GPIOH,
        GPIOI
#endif
    };

    const uint16_t _pinChart[16] = {
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
     * @param  GPIO_Pin: Input port pin (misalnya, GPIOA_0)
     *         @arg GPIOA_0 : Port yang digunakan GPIOA dan pin yang digunakan PIN_0
     * @retval Pointer ke nilai port (GPIO_TypeDef*) atau NULL jika input tidak valid.
     */
    GPIO_TypeDef *STM32_getPort(uint16_t GPIO_Pin)
    {
        // Ekstrak indeks port dari definisi pin
        uint8_t portIndex = (GPIO_Pin >> 8) - 1;

        // Periksa apakah indeks port dalam rentang yang valid
        if (portIndex < 0 || portIndex >= sizeof(_portChart) / sizeof(GPIO_TypeDef *))
        {
            return NULL; // Kembalikan NULL untuk definisi pin yang tidak valid
        }

        return _portChart[portIndex];
    }

    /**
     * @brief  Fungsi untuk mendapatkan nilai pin yang digunakan.
     *
     * @param  GPIO_Pin: input port pin
     *         @arg GPIOA_0 : port yang digunakan GPIOA dan pin yang digunakan PIN_0
     * @retval nilai pin
     */
    uint16_t STM32_getPin(uint16_t GPIO_Pin)
    {
        // Ekstrak indeks pin dari definisi pin
        uint8_t pinIndex = GPIO_Pin & 0xFF;

        // Periksa apakah indeks pin dalam rentang yang valid
        if (pinIndex >= sizeof(_pinChart) / sizeof(uint16_t))
        {
            return 0xFFFF; // Kembalikan nilai tidak valid jika indeks di luar rentang
        }

        return _pinChart[pinIndex];
    }

    /**
     * @brief  Fungsi untuk mengubah mode dari GPIO.
     *
     * @param  GPIO_Pin: input port pin
     * 		    @arg GPIOA_0 : port yang digunakan GPIOA dan pin yang digunakan PIN_0
     *          @arg Mode : merupakan mode dari GPIO.
     * 			@arg OUTPUT : Output with Push pull
     * 			@arg OUTPUT_OPENDRAIN : Output with Open Drain
     * 			@arg INPUT : Input with volatile pin
     * 			@arg INPUT_PULLUP : Input with internal pull up pin
     * 			@arg INPUT_PULLDOWN : Input with internal pull down pin
     * @retval Tidak ada
     */
    void STM32_pinMode(uint16_t GPIO_Pin, GPIO_Mode Mode)
    {
        GPIO_InitTypeDef GPIO_InitStruct = {0};

        GPIO_TypeDef *_Port = STM32_getPort(GPIO_Pin);
        uint16_t _Pin = STM32_getPin(GPIO_Pin);

        /* GPIO Ports Clock Enable */
        __HAL_RCC_GPIOA_CLK_ENABLE();
        __HAL_RCC_GPIOB_CLK_ENABLE();
        __HAL_RCC_GPIOC_CLK_ENABLE();
        __HAL_RCC_GPIOD_CLK_ENABLE();
#ifdef STM32F4xx
        __HAL_RCC_GPIOE_CLK_ENABLE();
        __HAL_RCC_GPIOF_CLK_ENABLE();
        __HAL_RCC_GPIOG_CLK_ENABLE();
        __HAL_RCC_GPIOH_CLK_ENABLE();
        __HAL_RCC_GPIOI_CLK_ENABLE();
#endif

        HAL_GPIO_WritePin(_Port, _Pin, GPIO_PIN_RESET);

        GPIO_InitStruct.Pin = _Pin;

        switch (Mode)
        {
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
    void STM32_digitalWrite(uint16_t GPIO_Pin, _Bool PinState)
    {

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
    _Bool STM32_digitalRead(uint16_t GPIO_Pin)
    {
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

    /**
     * @brief belum tau
     * @param belum tau
     * 		   @arg belum tau
     * @retval belum tau
     */
    uint8_t shiftIn(uint8_t _dataPin, uint8_t _clockPin, uint8_t _bitOrder)
    {
        uint8_t _value = 0;

        for (uint8_t i = 0; i < 8; ++i)
        {
            // digitalWrite(clockPin, HIGH);
            if (bitOrder == LSBFIRST)
                _value |= STM32_digitalRead(_dataPin) << i;
            else
                _value |= STM32_digitalRead(_dataPin) << (7 - i);
            STM32_digitalWrite(_clockPin, HIGH);
            STM32_digitalWrite(_clockPin, LOW);
        }
        return _value;
    }

    /**
     * @brief belum tau
     * @param belum tau
     * 		   @arg belum tau
     * @retval belum tau
     */
    void shiftOut(uint8_t _dataPin, uint8_t _clockPin, uint8_t _bitOrder, uint8_t _val)
    {
        for (uint8_t i = 0; i < 8; i++)
        {
            if (_bitOrder == LSBFIRST)
                STM32_digitalWrite(_dataPin, !!(_val & (1 << i)));
            else
                STM32_digitalWrite(_dataPin, !!(_val & (1 << (7 - i))));

            STM32_digitalWrite(_clockPin, HIGH);
            STM32_digitalWrite(_clockPin, LOW);
        }
    }
    //	your macros here...

    //	-------------------

#ifdef __cplusplus
}
#endif

#endif /* INC_STM32_MACROS_H_ */
