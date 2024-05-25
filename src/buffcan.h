#ifndef BUFFCAN_BUFFCAN_H
#define BUFFCAN_BUFFCAN_H

#include <stdint.h>
#include <Arduino.h>

#include "imxrt1062_registers.h"
#include "debug.h"

// FlexCAN bus enum. Contains the base address of the bus
typedef enum CanBus {
    CAN1 = FLEXCAN1_BASE,
    CAN2 = FLEXCAN2_BASE,
    CAN3 = FLEXCAN3_BASE,
} CanBus;

typedef enum FIFOFilterFormat {
	A = 0b00,
	B = 0b01,
	C = 0b10,
	D = 0b11,
} FIFOFilterFormat;

typedef struct BuffCAN_t {
    CanBus bus;
} BuffCAN_t;

void buffcan_init(BuffCAN_t* pCan);
void buffcan_reset(BuffCAN_t* pCan);

////////////////////////////////////////
// FlexCAN Configuration Functions    //
////////////////////////////////////////

void buffcan_enable_register_clock(BuffCAN_t* pCan);
void buffcan_enable_module_clock(BuffCAN_t* pCan);
void buffcan_enable_rx(BuffCAN_t* pCan);
void buffcan_enable_tx(BuffCAN_t* pCan, uint8_t alt_tx);

void buffcan_disable_register_clock(BuffCAN_t* pCan);
void buffcan_disable_module_clock(BuffCAN_t* pCan);
void buffcan_disable_rx(BuffCAN_t* pCan);
void buffcan_disable_tx(BuffCAN_t* pCan, uint8_t alt_tx);

////////////////////////////////////////
// Feature Functions                  //
////////////////////////////////////////

void buffcan_enable_fifo(BuffCAN_t* pCan);
void buffcan_enable_self_wake(BuffCAN_t* pCan);
void buffcan_enable_warning_int(BuffCAN_t* pCan);
void buffcan_enable_self_reception(BuffCAN_t* pCan);
void buffcan_enable_mailbox_masking(BuffCAN_t* pCan);
void buffcan_enable_local_priority(BuffCAN_t* pCan);
void buffcan_enable_tx_abort(BuffCAN_t* pCan);
void buffcan_enable_bus_off_int(BuffCAN_t* pCan);
void buffcan_enable_error_int(BuffCAN_t* pCan);
void buffcan_enable_mailbox_priority_matching(BuffCAN_t* pCan);
void buffcan_enable_remote_frame_storing(BuffCAN_t* pCan);
void buffcan_enable_extended_matching(BuffCAN_t* pCan);

void buffcan_disable_fifo(BuffCAN_t* pCan);
void buffcan_disable_self_wake(BuffCAN_t* pCan);
void buffcan_disable_warning_int(BuffCAN_t* pCan);
void buffcan_disable_self_reception(BuffCAN_t* pCan);
void buffcan_disable_mailbox_masking(BuffCAN_t* pCan);
void buffcan_disable_local_priority(BuffCAN_t* pCan);
void buffcan_disable_tx_abort(BuffCAN_t* pCan);
void buffcan_disable_bus_off_int(BuffCAN_t* pCan);
void buffcan_disable_error_int(BuffCAN_t* pCan);
void buffcan_disable_mailbox_priority_matching(BuffCAN_t* pCan);
void buffcan_disable_remote_frame_storing(BuffCAN_t* pCan);
void buffcan_disable_extended_matching(BuffCAN_t* pCan);

////////////////////////////////////////
// FlexCAN Parameter Functions        //
////////////////////////////////////////

void buffcan_set_mb_count(BuffCAN_t* pCan, uint8_t mb_count);

////////////////////////////////////////
// FIFO Functions                     //
////////////////////////////////////////

// todo: revisit
void buffcan_fifo_set_filter_format(BuffCAN_t* pCan, FIFOFilterFormat format);
void buffcan_fifo_set_filter_count(BuffCAN_t* pCan, uint8_t filter_count);

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