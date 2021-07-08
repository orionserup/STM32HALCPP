/**
 * @file Clocks.hpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-07-07
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#pragma once

#include "Status.hpp"

#include <chrono>

namespace STM32 {

    class Clock {

    public:

    Clock(const double& frequency);
    Clock(const std::chrono::duration<double, std::micro>& period);
    virtual ~Clock();

    virtual Status SetFrequency(const double frequency);
    virtual Status SetPeriod(const double frequency);

    private:

        double frequency;                                   // in MHz
        std::chrono::duration<double, std::micro> period;   // in us

    };

    class MSI: public Clock {


    };

    class LSI: public Clock {


    };

    class PLL: public Clock {

    };

    class PCLK: public Clock {


    };

    class HCLK: public Clock {


    };

    class LSE: public Clock {


    };

    class HSE: public Clock {


    };


}