#include "Peripheral.hpp"

namespace STM32 {

    struct SPI: public Peripheral {

    public:

        SPI();

        Status Enable() override;
        Status Disable() override;
        Status Start() override;
        Status Start_IRQ(const std::function<void()>& routine);
        Status Start_DMA();
        Status Stop() override;

        R32 CR1;
        R32 CR2;
        R32 SR;
        R32 DR;
        R32 CRCPR;
        R32 RXCRCR;
        R32 TXCRCR;

    };

    
}
