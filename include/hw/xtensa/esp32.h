#pragma once

#include "qemu/osdep.h"
<<<<<<< HEAD
#include "qemu-common.h"
=======
>>>>>>> 1f88fe7c85 (hw/xtensa: add ESP32 machine)
#include "hw/hw.h"
#include "target/xtensa/cpu.h"
#include "hw/misc/esp32_reg.h"
#include "hw/char/esp32_uart.h"
#include "hw/gpio/esp32_gpio.h"
#include "hw/misc/esp32_dport.h"
#include "hw/misc/esp32_rtc_cntl.h"
#include "hw/misc/esp32_rng.h"
#include "hw/misc/esp32_sha.h"
<<<<<<< HEAD
=======
#include "hw/misc/esp32_aes.h"
#include "hw/misc/esp32_ledc.h"
>>>>>>> 1f88fe7c85 (hw/xtensa: add ESP32 machine)
#include "hw/misc/esp32_rsa.h"
#include "hw/timer/esp32_frc_timer.h"
#include "hw/timer/esp32_timg.h"
#include "hw/misc/esp32_crosscore_int.h"
#include "hw/ssi/esp32_spi.h"
<<<<<<< HEAD
#include "hw/misc/esp32_sens.h"
#include "hw/misc/esp32_ana.h"
#include "hw/ssi/esp32_rmt.h"
#include "hw/misc/esp32_wifi.h"
#include "hw/misc/esp32_fe.h"
#include "hw/misc/esp32_ramdev.h"
=======
>>>>>>> 1f88fe7c85 (hw/xtensa: add ESP32 machine)
#include "hw/i2c/esp32_i2c.h"
#include "hw/nvram/esp32_efuse.h"
#include "hw/xtensa/esp32_intc.h"
#include "hw/misc/esp32_flash_enc.h"
#include "hw/sd/dwc_sdmmc.h"

typedef struct Esp32SocState {
    /*< private >*/
    DeviceState parent_obj;

    /*< public >*/
    XtensaCPU cpu[ESP32_CPU_COUNT];
    Esp32DportState dport;
    Esp32IntMatrixState intmatrix;
    Esp32CrosscoreInt crosscore_int;
    ESP32UARTState uart[ESP32_UART_COUNT];
    Esp32GpioState gpio;
    Esp32RngState rng;
    Esp32RtcCntlState rtc_cntl;
    Esp32FrcTimerState frc_timer[ESP32_FRC_COUNT];
    Esp32TimgState timg[ESP32_TIMG_COUNT];
    Esp32SpiState spi[ESP32_SPI_COUNT];
    Esp32I2CState i2c[ESP32_I2C_COUNT];
    Esp32ShaState sha;
<<<<<<< HEAD
    Esp32RsaState rsa;
    Esp32EfuseState efuse;
    Esp32SensState sens;
    Esp32AnaState ana;
    Esp32RmtState rmt;
    Esp32WifiState wifi;
    Esp32FeState fe;
    Esp32RamdevState phya;

    Esp32FlashEncryptionState flash_enc;
    DWCSDMMCState sdmmc;
    DeviceState *eth;
    DeviceState *wifi_dev;
=======
    Esp32AesState aes;
    Esp32RsaState rsa;
    Esp32LEDCState ledc;
    Esp32EfuseState efuse;
    Esp32FlashEncryptionState flash_enc;
    DWCSDMMCState sdmmc;
    DeviceState *eth;
>>>>>>> 1f88fe7c85 (hw/xtensa: add ESP32 machine)

    BusState rtc_bus;
    BusState periph_bus;

    MemoryRegion cpu_specific_mem[ESP32_CPU_COUNT];

    uint32_t requested_reset;
} Esp32SocState;
