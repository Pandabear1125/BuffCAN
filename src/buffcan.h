#ifndef BUFFCAN_BUFFCAN_H
#define BUFFCAN_BUFFCAN_H

#include <stdint.h>
#include <Arduino.h>

#include "imxrt1062_registers.h"

// FlexCAN bus enum. Contains the base address of the bus
typedef enum CAN_BUS {
    CAN1 = FLEXCAN1_BASE,
    CAN2 = FLEXCAN2_BASE,
    CAN3 = FLEXCAN3_BASE,
} CAN_BUS;

typedef struct BuffCAN_t {
    CAN_BUS bus;
} BuffCAN_t;

void buffcan_init(BuffCAN_t* pCan);

void buffcan_enable_register_clock(BuffCAN_t* pCan);
void buffcan_enable_module_clock(BuffCAN_t* pCan);
void buffcan_enable_module(BuffCAN_t* pCan);
void buffcan_enable_rx(BuffCAN_t* pCan);
void buffcan_enable_tx(BuffCAN_t* pCan, int alt_tx);

void buffcan_disable_register_clock(BuffCAN_t* pCan);
void buffcan_disable_module_clock(BuffCAN_t* pCan);
void buffcan_disable_module(BuffCAN_t* pCan);
void buffcan_disable_rx(BuffCAN_t* pCan);

void buffcan_mode_enter_freeze(BuffCAN_t* pCan);

void buffcan_mode_exit_freeze(BuffCAN_t* pCan);


// debug functions

void buffcan_print_MCR(BuffCAN_t* pCan);


#endif  // BUFFCAN_BUFFCAN_H