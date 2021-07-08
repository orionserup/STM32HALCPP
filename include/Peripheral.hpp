#include "Types.hpp"
#include "Status.hpp"
#include <functional>

namespace STM32 {

    struct Peripheral {

    public:

        Peripheral();
    
        virtual Status Enable();
        virtual Status Disable();
        virtual Status Start();
        virtual Status Start_IRQ(const std::function<void()>& routine);
        virtual Status Start_DMA();
        virtual Status Stop();
        virtual Status Stop_IRQ();
        virtual Status Stop_DMA();

    private:



    };

}

