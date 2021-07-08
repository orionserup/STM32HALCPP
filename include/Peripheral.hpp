/**
 * @file Peripheral.hpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-07-07
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#pragma once

#include "Types.hpp"
#include "Status.hpp"
#include <functional>

namespace STM32 {

    struct Peripheral {

    public:
    
        Peripheral();
        virtual ~Peripheral();

        virtual Status Enable();
        virtual Status Disable();
    
    protected:

        virtual Status Stop();
        virtual Status Start();

    };

}

