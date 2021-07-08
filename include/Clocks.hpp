
namespace STM32 {

    class Clock {

    public:



    private:

        uint32_t frequency;




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

    

}