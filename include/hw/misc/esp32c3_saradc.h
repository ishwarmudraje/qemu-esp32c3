#pragma once

#include "hw/sysbus.h"
#include "hw/hw.h"
#include "hw/registerfields.h"

#define TYPE_ESP32C3_SARADC "misc.esp32c3.saradc"
#define ESP32C3_SARADC(obj) OBJECT_CHECK(Esp32c3SarAdcState, (obj), TYPE_ESP32C3_SARADC)


typedef struct Esp32c3SarAdcState {
    SysBusDevice parent_obj;
    MemoryRegion iomem;
    uint32_t mem[1024];
} Esp32c3SarAdcState;

REG32(APB_SARADC_INT_RAW_REG , 0x044);
  FIELD(APB_SARADC_INT_RAW_REG, APB_SARADC_ADC1_DONE_INT_RAW, 31, 1);
  FIELD(APB_SARADC_INT_RAW_REG, APB_SARADC_ADC2_DONE_INT_RAW, 30, 1);

REG32(APB_SARADC_ONETIME_SAMPLE_REG, 0x20); 
  FIELD(APB_SARADC_ONETIME_SAMPLE_REG, APB_SARADC1_ONETIME_SAMPLE, 31, 1);
  FIELD(APB_SARADC_ONETIME_SAMPLE_REG, APB_SARADC2_ONETIME_SAMPLE, 30, 1);
  FIELD(APB_SARADC_ONETIME_SAMPLE_REG, APB_SARADC_ONETIME_START, 29, 1);
  FIELD(APB_SARADC_ONETIME_SAMPLE_REG, APB_SARADC_ONETIME_CHANNEL,25,4);  
  FIELD(APB_SARADC_ONETIME_SAMPLE_REG,APB_SARADC_ONETIME_ATTEN, 23, 2);

REG32(APB_SARADC_1_DATA_STATUS_REG, 0x2C);
  FIELD(APB_SARADC_1_DATA_STATUS_REG, APB_SARADC_ADC1_DATA,0, 17);

REG32(APB_SARADC_2_DATA_STATUS_REG, 0x3C);
  FIELD(APB_SARADC_2_DATA_STATUS_REG, APB_SARADC_ADC2_DATA,0, 17);
