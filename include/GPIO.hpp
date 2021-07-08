/**
 * @brief  
 * @note   
 * @retval None
 */

#include "Peripheral.hpp"

namespace STM32 {

    /**
     * @brief  
     * @note   
     */
    class GPIO: public Peripheral {

    public:

        /**
         * @brief  
         * @note   
         * @retval None
         */
        enum class Mode {

            Input = 0,
            Output = 1,
            Alternate = 2,
            Analog = 3,
            Reset = 3

        };

        /**
         * @brief  
         * @note   
         */
        enum class OutputType {

            PushPull = 0,
            OpenDrain = 1

        };

        /**
         * @brief  
         * @note   
         */
        enum class Pull {

            None = 0,
            Up = 1,
            Down = 2
        
        };

        /**
         * @brief  
         * @note   
         */
        enum class Speed {

            Low = 0,
            Medium = 1,
            High = 2,
            VeryHigh = 3
        
        };

        /**
         * @brief  
         * @note   
         * @param  pinmask: 
         * @retval 
         */
        Status WritePins(const uint16_t pinmask);

        /**
         * @brief  
         * @note   
         * @param  pin: 
         * @param  value: 
         * @retval 
         */
        Status WritePin(const uint8_t pin, const bool value);

        /**
         * @brief  
         * @note   
         * @param  pinmask: 
         * @retval 
         */
        Status ResetPins(const uint16_t pinmask);

        /**
         * @brief  
         * @note   
         * @param  pinmask: 
         * @retval 
         */
        Status SetPins(const uint16_t pinmask);

        /**
         * @brief  
         * @note   
         * @param  pinmask: 
         * @param  alternate: 
         * @retval 
         */
        Status SetAlternateMode(const uint16_t pinmask, const uint8_t alternate);
        
        /// ----------------------------------------------- GPIO Registers ----------------------------------------------------- //

        R32 MODER;      ///< Pin Mode Register
        R32 OTYPER;     ///< Output Type Register
        R32 OSPEEDR;    ///< Output Speed Register
        R32 PUPDR;      ///< Pull Up/Down Register
        const R32 IDR;  ///< Input Data Register
        R32 ODR;        ///< Output Data Regster
        R32 BSSR;       ///< Bit Set Register
        R32 LCKR;       ///< Locking Register
        R32 AFRL;       ///< Alternate Function Low Bytes Register
        R32 AFRH;       ///< Alternate Function High Bytes Register
        R32 BRR;        ///< Bit Reset Register
        R32 ASCR;       ///< Analog Connection Register

    private:

        Status SetPinPullMode(const uint16_t pinmask, const );

        GPIO();

    };



}
