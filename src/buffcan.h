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
void buffcan_enable_rx(BuffCAN_t* pCan);
void buffcan_enable_tx(BuffCAN_t* pCan, int alt_tx);
void buffcan_enable_fifo(BuffCAN_t* pCan);

void buffcan_disable_register_clock(BuffCAN_t* pCan);
void buffcan_disable_module_clock(BuffCAN_t* pCan);
void buffcan_disable_rx(BuffCAN_t* pCan);
void buffcan_disable_tx(BuffCAN_t* pCan, int alt_tx);
void buffcan_disable_fifo(BuffCAN_t* pCan);

////////////////////////////////////////
// Mode Switch Functions              //
////////////////////////////////////////

void buffcan_mode_enter_freeze(BuffCAN_t* pCan);
void buffcan_mode_enter_listen_only(BuffCAN_t* pCan);
void buffcan_mode_enter_loop_back(BuffCAN_t* pCan);
void buffcan_mode_enter_disable(BuffCAN_t* pCan);
void buffcan_mode_enter_stop(BuffCAN_t* pCan);

void buffcan_mode_exit_freeze(BuffCAN_t* pCan);
void buffcan_mode_exit_listen_only(BuffCAN_t* pCan);
void buffcan_mode_exit_loop_back(BuffCAN_t* pCan);
void buffcan_mode_exit_disable(BuffCAN_t* pCan);
void buffcan_mode_exit_stop(BuffCAN_t* pCan);

////////////////////////////////////////
// Debug Functions                    //
////////////////////////////////////////

void buffcan_print_MCR(BuffCAN_t* pCan);


#endif  // BUFFCAN_BUFFCAN_H