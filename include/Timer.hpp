/**
 * @file Timer.hpp
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

    class BasicTimer : public Peripheral { 

    public:

        Status Enable() override;
        Status Disable() override;
        Status Start() override;
        Status Start_IRQ(const std::function<void()>& routine) override;
        Status Start_DMA() override;
        Status Stop() override;
        Status Stop_IRQ() override;
        Status Stop_DMA() override;

        // ----------------------------------- Basic Timer Registers ------------------------------ //

        R32 CR1;
        R32 CR2;
        R32 RESERVED0;
        R32 DIER;
        R32 SR;
        R32 EGR;
        R32 RESERVED1;
        R32 RESERVED2;
        R32 RESERVED3;
        R32 CNT;
        R32 PSC;
        R32 ARR;

    protected:

        void ClearIRQ();
        void ResetCNT();

        BasicTimer();

    };

    struct GeneralTimer: public Peripheral{

    public:



    };

    struct LowPowerTimer: public Timer {

    public:




    };

}
