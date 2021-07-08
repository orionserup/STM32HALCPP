/**
 * @file HAL.hpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-07-07
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#pragma once

#include <ADC.hpp>
#include <DAC.hpp>
#include <SPI.hpp>

namespace STM32 {

    class HAL {

    public:

    HAL();
    ~HAL();

    

    private:

        Clock* HCLK;
        Clock* PCLK;
        Clock* SysClock;

        uint32_t SysTick;

    }


}








