#include "hal_data.h"
#include "SerialCompatibility.h"

FSP_CPP_HEADER
void R_BSP_WarmStart(bsp_warm_start_event_t event);
FSP_CPP_FOOTER

#define d5 (BSP_IO_PORT_13_PIN_01)
#define d6 (BSP_IO_PORT_14_PIN_01)
#define d9 (BSP_IO_PORT_14_PIN_00)
#define d10 (BSP_IO_PORT_13_PIN_02)
#define d12 (BSP_IO_PORT_16_PIN_01)
#define d13 (BSP_IO_PORT_16_PIN_00)
#define d14 (BSP_IO_PORT_13_PIN_00)

void delay(int dt) {
    R_BSP_SoftwareDelay(dt, BSP_DELAY_UNITS_MILLISECONDS);
}


/*******************************************************************************************************************//**
 * main() is generated by the RZA3UL Configuration editor and is used to generate threads if an RTOS is used.
 * This function is called by main() when no RTOS is used.
 **********************************************************************************************************************/
void hal_entry(void)
{
    Serial.begin(115200);
    R_IOPORT_PinWrite(&g_ioport_ctrl, d5, BSP_IO_LEVEL_LOW);
    R_IOPORT_PinWrite(&g_ioport_ctrl, d6, BSP_IO_LEVEL_LOW);
    R_IOPORT_PinWrite(&g_ioport_ctrl, d9, BSP_IO_LEVEL_LOW);
    R_IOPORT_PinWrite(&g_ioport_ctrl, d10, BSP_IO_LEVEL_HIGH);
    R_IOPORT_PinWrite(&g_ioport_ctrl, d12, BSP_IO_LEVEL_HIGH);
    R_IOPORT_PinWrite(&g_ioport_ctrl, d13, BSP_IO_LEVEL_HIGH);
    R_IOPORT_PinWrite(&g_ioport_ctrl, d14, BSP_IO_LEVEL_HIGH);

    while (true) {
        delay(100);
    }
}

/*******************************************************************************************************************//**
 * This function is called at various points during the startup process.  This implementation uses the event that is
 * called right before main() to set up the pins.
 *
 * @param[in]  event    Where at in the start up process the code is currently at
 **********************************************************************************************************************/
void R_BSP_WarmStart(bsp_warm_start_event_t event)
{
    if (BSP_WARM_START_RESET == event)
    {
        /* Initialize MMU. */
        R_MMU_Open (&g_mmu_ctrl, &g_mmu_cfg);
    }

    if (BSP_WARM_START_POST_C == event)
    {
        /* C runtime environment and system clocks are setup. */

        /* Configure pins. */
        R_IOPORT_Open (&g_ioport_ctrl, &g_bsp_pin_cfg);
    }
}
