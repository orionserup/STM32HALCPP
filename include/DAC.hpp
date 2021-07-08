/**
 * @file DAC.hpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-07-07
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#pragma once

#include "Peripheral.hpp"

namespace STM32 {

    class DAC: public Peripheral {

    public:

        Status Enable() override;
        Status Disable() override;
        Status Start() override;
        Status Stop() override;

        Status SetValue(const uint16_t value);
        Status TriggerStart(const uint8_t channel);

        


    private:

        DAC();
        ~DAC();

    };

}