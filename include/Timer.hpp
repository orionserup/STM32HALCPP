#include "Peripheral.hpp"

namespace STM32 {

    class BasicTimer : public Peripheral { 

    public:

        Timer();

        Status Enable() override;
        Status Disable() override;
        Status Start() override;
        Status Start_IRQ(const std::function<void()>& routine) override;
        Status Start_DMA() override;
        Status Stop() override;
        Status Stop_IRQ() override;
        Status Stop_DMA() override;

    private:

        void ClearIRQ();
        void ResetARR();


    };

    struct AdvancedTimer: public Timer {

    public:



    };

    struct LowPowerTimer: public Timer {

    public:




    };

}
