/**
 * @file SPI.hpp
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
#include <chrono>
#include <array>

namespace STM32 {

    struct SPI: public Peripheral {

    public:

        Status Enable() override;
        Status Disable() override;
        Status Start() override;
        Status Start_IRQ(const std::function<void()>& routine);
        Status Start_DMA() override;
        Status Stop() override;

        /**
         * @brief  Sends an object of any type through SPI
         * @param  data: Data to send
         * @param  timeout: How long to wait until you give up
         * @retval Status of the Action
         */
        template <typename T>
        Status Send(const T& data, const std::chrono::milliseconds timeout);

        /**
         * @brief  Receives an Object of Any type from an SPI slave
         * @param  buffer: Buffer to read into
         * @param  timeout: How long to wait until the program bails
         * @retval Status of the Action
         */
        template <typename T>
        Status Recieve(T& buffer, const std::chrono::milliseconds timeout);

        // ------------------------------------- SPI Registers ---------------------------------------- //

        R32 CR1;    ///< Configuation Register One
        R32 CR2;    ///< Configuration Register Two
        R32 SR;     ///< Status Register
        R32 DR;     ///< Direct Read Register
        R32 CRCPR;  ///< CRC Polynomial Register
        R32 RXCRCR; ///< Receieving CRC Register
        R32 TXCRCR; ///< Transmitting CRC Register

    private:

        Status SendByte(const uint8_t byte);
        Status RecvByte(uint8_t* const buffer)
        
        void AwaitSend();
        void AwaitRecv();




    };

    
}
