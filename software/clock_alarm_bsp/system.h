/*
 * system.h - SOPC Builder system and BSP software package information
 *
 * Machine generated for CPU 'CPU' in SOPC Builder design 'system'
 * SOPC Builder design path: E:/ClockAlarm/system.sopcinfo
 *
 * Generated: Fri May 07 17:38:20 CST 2021
 */

/*
 * DO NOT MODIFY THIS FILE
 *
 * Changing this file will have subtle consequences
 * which will almost certainly lead to a nonfunctioning
 * system. If you do modify this file, be aware that your
 * changes will be overwritten and lost when this file
 * is generated again.
 *
 * DO NOT MODIFY THIS FILE
 */

/*
 * License Agreement
 *
 * Copyright (c) 2008
 * Altera Corporation, San Jose, California, USA.
 * All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 * This agreement shall be governed in all respects by the laws of the State
 * of California and by the laws of the United States of America.
 */

#ifndef __SYSTEM_H_
#define __SYSTEM_H_

/* Include definitions from linker script generator */
#include "linker.h"


/*
 * CONFIRM_BUTTON configuration
 *
 */

#define ALT_MODULE_CLASS_CONFIRM_BUTTON altera_avalon_pio
#define CONFIRM_BUTTON_BASE 0x1040
#define CONFIRM_BUTTON_BIT_CLEARING_EDGE_REGISTER 0
#define CONFIRM_BUTTON_BIT_MODIFYING_OUTPUT_REGISTER 0
#define CONFIRM_BUTTON_CAPTURE 1
#define CONFIRM_BUTTON_DATA_WIDTH 1
#define CONFIRM_BUTTON_DO_TEST_BENCH_WIRING 0
#define CONFIRM_BUTTON_DRIVEN_SIM_VALUE 0
#define CONFIRM_BUTTON_EDGE_TYPE "FALLING"
#define CONFIRM_BUTTON_FREQ 50000000
#define CONFIRM_BUTTON_HAS_IN 1
#define CONFIRM_BUTTON_HAS_OUT 0
#define CONFIRM_BUTTON_HAS_TRI 0
#define CONFIRM_BUTTON_IRQ 4
#define CONFIRM_BUTTON_IRQ_INTERRUPT_CONTROLLER_ID 0
#define CONFIRM_BUTTON_IRQ_TYPE "EDGE"
#define CONFIRM_BUTTON_NAME "/dev/CONFIRM_BUTTON"
#define CONFIRM_BUTTON_RESET_VALUE 0
#define CONFIRM_BUTTON_SPAN 16
#define CONFIRM_BUTTON_TYPE "altera_avalon_pio"


/*
 * CPU configuration
 *
 */

#define ALT_CPU_ARCHITECTURE "altera_nios2_gen2"
#define ALT_CPU_BIG_ENDIAN 0
#define ALT_CPU_BREAK_ADDR 0x00002820
#define ALT_CPU_CPU_ARCH_NIOS2_R1
#define ALT_CPU_CPU_FREQ 50000000u
#define ALT_CPU_CPU_ID_SIZE 1
#define ALT_CPU_CPU_ID_VALUE 0x00000000
#define ALT_CPU_CPU_IMPLEMENTATION "tiny"
#define ALT_CPU_DATA_ADDR_WIDTH 0xe
#define ALT_CPU_DCACHE_LINE_SIZE 0
#define ALT_CPU_DCACHE_LINE_SIZE_LOG2 0
#define ALT_CPU_DCACHE_SIZE 0
#define ALT_CPU_EXCEPTION_ADDR 0x00000020
#define ALT_CPU_FLASH_ACCELERATOR_LINES 0
#define ALT_CPU_FLASH_ACCELERATOR_LINE_SIZE 0
#define ALT_CPU_FLUSHDA_SUPPORTED
#define ALT_CPU_FREQ 50000000
#define ALT_CPU_HARDWARE_DIVIDE_PRESENT 0
#define ALT_CPU_HARDWARE_MULTIPLY_PRESENT 0
#define ALT_CPU_HARDWARE_MULX_PRESENT 0
#define ALT_CPU_HAS_DEBUG_CORE 1
#define ALT_CPU_HAS_DEBUG_STUB
#define ALT_CPU_HAS_ILLEGAL_INSTRUCTION_EXCEPTION
#define ALT_CPU_HAS_JMPI_INSTRUCTION
#define ALT_CPU_ICACHE_LINE_SIZE 0
#define ALT_CPU_ICACHE_LINE_SIZE_LOG2 0
#define ALT_CPU_ICACHE_SIZE 0
#define ALT_CPU_INST_ADDR_WIDTH 0xe
#define ALT_CPU_NAME "CPU"
#define ALT_CPU_OCI_VERSION 1
#define ALT_CPU_RESET_ADDR 0x00000000


/*
 * CPU configuration (with legacy prefix - don't use these anymore)
 *
 */

#define NIOS2_BIG_ENDIAN 0
#define NIOS2_BREAK_ADDR 0x00002820
#define NIOS2_CPU_ARCH_NIOS2_R1
#define NIOS2_CPU_FREQ 50000000u
#define NIOS2_CPU_ID_SIZE 1
#define NIOS2_CPU_ID_VALUE 0x00000000
#define NIOS2_CPU_IMPLEMENTATION "tiny"
#define NIOS2_DATA_ADDR_WIDTH 0xe
#define NIOS2_DCACHE_LINE_SIZE 0
#define NIOS2_DCACHE_LINE_SIZE_LOG2 0
#define NIOS2_DCACHE_SIZE 0
#define NIOS2_EXCEPTION_ADDR 0x00000020
#define NIOS2_FLASH_ACCELERATOR_LINES 0
#define NIOS2_FLASH_ACCELERATOR_LINE_SIZE 0
#define NIOS2_FLUSHDA_SUPPORTED
#define NIOS2_HARDWARE_DIVIDE_PRESENT 0
#define NIOS2_HARDWARE_MULTIPLY_PRESENT 0
#define NIOS2_HARDWARE_MULX_PRESENT 0
#define NIOS2_HAS_DEBUG_CORE 1
#define NIOS2_HAS_DEBUG_STUB
#define NIOS2_HAS_ILLEGAL_INSTRUCTION_EXCEPTION
#define NIOS2_HAS_JMPI_INSTRUCTION
#define NIOS2_ICACHE_LINE_SIZE 0
#define NIOS2_ICACHE_LINE_SIZE_LOG2 0
#define NIOS2_ICACHE_SIZE 0
#define NIOS2_INST_ADDR_WIDTH 0xe
#define NIOS2_OCI_VERSION 1
#define NIOS2_RESET_ADDR 0x00000000


/*
 * Define for each module class mastered by the CPU
 *
 */

#define __ALTERA_AVALON_JTAG_UART
#define __ALTERA_AVALON_ONCHIP_MEMORY2
#define __ALTERA_AVALON_PIO
#define __ALTERA_AVALON_TIMER
#define __ALTERA_NIOS2_GEN2


/*
 * HOUR_1 configuration
 *
 */

#define ALT_MODULE_CLASS_HOUR_1 altera_avalon_pio
#define HOUR_1_BASE 0x1050
#define HOUR_1_BIT_CLEARING_EDGE_REGISTER 0
#define HOUR_1_BIT_MODIFYING_OUTPUT_REGISTER 0
#define HOUR_1_CAPTURE 0
#define HOUR_1_DATA_WIDTH 7
#define HOUR_1_DO_TEST_BENCH_WIRING 0
#define HOUR_1_DRIVEN_SIM_VALUE 0
#define HOUR_1_EDGE_TYPE "NONE"
#define HOUR_1_FREQ 50000000
#define HOUR_1_HAS_IN 0
#define HOUR_1_HAS_OUT 1
#define HOUR_1_HAS_TRI 0
#define HOUR_1_IRQ -1
#define HOUR_1_IRQ_INTERRUPT_CONTROLLER_ID -1
#define HOUR_1_IRQ_TYPE "NONE"
#define HOUR_1_NAME "/dev/HOUR_1"
#define HOUR_1_RESET_VALUE 0
#define HOUR_1_SPAN 16
#define HOUR_1_TYPE "altera_avalon_pio"


/*
 * HOUR_2 configuration
 *
 */

#define ALT_MODULE_CLASS_HOUR_2 altera_avalon_pio
#define HOUR_2_BASE 0x1060
#define HOUR_2_BIT_CLEARING_EDGE_REGISTER 0
#define HOUR_2_BIT_MODIFYING_OUTPUT_REGISTER 0
#define HOUR_2_CAPTURE 0
#define HOUR_2_DATA_WIDTH 7
#define HOUR_2_DO_TEST_BENCH_WIRING 0
#define HOUR_2_DRIVEN_SIM_VALUE 0
#define HOUR_2_EDGE_TYPE "NONE"
#define HOUR_2_FREQ 50000000
#define HOUR_2_HAS_IN 0
#define HOUR_2_HAS_OUT 1
#define HOUR_2_HAS_TRI 0
#define HOUR_2_IRQ -1
#define HOUR_2_IRQ_INTERRUPT_CONTROLLER_ID -1
#define HOUR_2_IRQ_TYPE "NONE"
#define HOUR_2_NAME "/dev/HOUR_2"
#define HOUR_2_RESET_VALUE 0
#define HOUR_2_SPAN 16
#define HOUR_2_TYPE "altera_avalon_pio"


/*
 * INC_HOUR_BUTTON configuration
 *
 */

#define ALT_MODULE_CLASS_INC_HOUR_BUTTON altera_avalon_pio
#define INC_HOUR_BUTTON_BASE 0x1020
#define INC_HOUR_BUTTON_BIT_CLEARING_EDGE_REGISTER 0
#define INC_HOUR_BUTTON_BIT_MODIFYING_OUTPUT_REGISTER 0
#define INC_HOUR_BUTTON_CAPTURE 1
#define INC_HOUR_BUTTON_DATA_WIDTH 1
#define INC_HOUR_BUTTON_DO_TEST_BENCH_WIRING 0
#define INC_HOUR_BUTTON_DRIVEN_SIM_VALUE 0
#define INC_HOUR_BUTTON_EDGE_TYPE "FALLING"
#define INC_HOUR_BUTTON_FREQ 50000000
#define INC_HOUR_BUTTON_HAS_IN 1
#define INC_HOUR_BUTTON_HAS_OUT 0
#define INC_HOUR_BUTTON_HAS_TRI 0
#define INC_HOUR_BUTTON_IRQ 2
#define INC_HOUR_BUTTON_IRQ_INTERRUPT_CONTROLLER_ID 0
#define INC_HOUR_BUTTON_IRQ_TYPE "EDGE"
#define INC_HOUR_BUTTON_NAME "/dev/INC_HOUR_BUTTON"
#define INC_HOUR_BUTTON_RESET_VALUE 0
#define INC_HOUR_BUTTON_SPAN 16
#define INC_HOUR_BUTTON_TYPE "altera_avalon_pio"


/*
 * INC_MIN_BUTTON configuration
 *
 */

#define ALT_MODULE_CLASS_INC_MIN_BUTTON altera_avalon_pio
#define INC_MIN_BUTTON_BASE 0x1030
#define INC_MIN_BUTTON_BIT_CLEARING_EDGE_REGISTER 0
#define INC_MIN_BUTTON_BIT_MODIFYING_OUTPUT_REGISTER 0
#define INC_MIN_BUTTON_CAPTURE 1
#define INC_MIN_BUTTON_DATA_WIDTH 1
#define INC_MIN_BUTTON_DO_TEST_BENCH_WIRING 0
#define INC_MIN_BUTTON_DRIVEN_SIM_VALUE 0
#define INC_MIN_BUTTON_EDGE_TYPE "FALLING"
#define INC_MIN_BUTTON_FREQ 50000000
#define INC_MIN_BUTTON_HAS_IN 1
#define INC_MIN_BUTTON_HAS_OUT 0
#define INC_MIN_BUTTON_HAS_TRI 0
#define INC_MIN_BUTTON_IRQ 3
#define INC_MIN_BUTTON_IRQ_INTERRUPT_CONTROLLER_ID 0
#define INC_MIN_BUTTON_IRQ_TYPE "EDGE"
#define INC_MIN_BUTTON_NAME "/dev/INC_MIN_BUTTON"
#define INC_MIN_BUTTON_RESET_VALUE 0
#define INC_MIN_BUTTON_SPAN 16
#define INC_MIN_BUTTON_TYPE "altera_avalon_pio"


/*
 * JTAG configuration
 *
 */

#define ALT_MODULE_CLASS_JTAG altera_avalon_jtag_uart
#define JTAG_BASE 0x3018
#define JTAG_IRQ 0
#define JTAG_IRQ_INTERRUPT_CONTROLLER_ID 0
#define JTAG_NAME "/dev/JTAG"
#define JTAG_READ_DEPTH 64
#define JTAG_READ_THRESHOLD 8
#define JTAG_SPAN 8
#define JTAG_TYPE "altera_avalon_jtag_uart"
#define JTAG_WRITE_DEPTH 64
#define JTAG_WRITE_THRESHOLD 8


/*
 * LEDs configuration
 *
 */

#define ALT_MODULE_CLASS_LEDs altera_avalon_pio
#define LEDS_BASE 0x1000
#define LEDS_BIT_CLEARING_EDGE_REGISTER 0
#define LEDS_BIT_MODIFYING_OUTPUT_REGISTER 0
#define LEDS_CAPTURE 0
#define LEDS_DATA_WIDTH 10
#define LEDS_DO_TEST_BENCH_WIRING 0
#define LEDS_DRIVEN_SIM_VALUE 0
#define LEDS_EDGE_TYPE "NONE"
#define LEDS_FREQ 50000000
#define LEDS_HAS_IN 0
#define LEDS_HAS_OUT 1
#define LEDS_HAS_TRI 0
#define LEDS_IRQ -1
#define LEDS_IRQ_INTERRUPT_CONTROLLER_ID -1
#define LEDS_IRQ_TYPE "NONE"
#define LEDS_NAME "/dev/LEDs"
#define LEDS_RESET_VALUE 0
#define LEDS_SPAN 16
#define LEDS_TYPE "altera_avalon_pio"


/*
 * MIN_1 configuration
 *
 */

#define ALT_MODULE_CLASS_MIN_1 altera_avalon_pio
#define MIN_1_BASE 0x1070
#define MIN_1_BIT_CLEARING_EDGE_REGISTER 0
#define MIN_1_BIT_MODIFYING_OUTPUT_REGISTER 0
#define MIN_1_CAPTURE 0
#define MIN_1_DATA_WIDTH 7
#define MIN_1_DO_TEST_BENCH_WIRING 0
#define MIN_1_DRIVEN_SIM_VALUE 0
#define MIN_1_EDGE_TYPE "NONE"
#define MIN_1_FREQ 50000000
#define MIN_1_HAS_IN 0
#define MIN_1_HAS_OUT 1
#define MIN_1_HAS_TRI 0
#define MIN_1_IRQ -1
#define MIN_1_IRQ_INTERRUPT_CONTROLLER_ID -1
#define MIN_1_IRQ_TYPE "NONE"
#define MIN_1_NAME "/dev/MIN_1"
#define MIN_1_RESET_VALUE 0
#define MIN_1_SPAN 16
#define MIN_1_TYPE "altera_avalon_pio"


/*
 * MIN_2 configuration
 *
 */

#define ALT_MODULE_CLASS_MIN_2 altera_avalon_pio
#define MIN_2_BASE 0x1080
#define MIN_2_BIT_CLEARING_EDGE_REGISTER 0
#define MIN_2_BIT_MODIFYING_OUTPUT_REGISTER 0
#define MIN_2_CAPTURE 0
#define MIN_2_DATA_WIDTH 7
#define MIN_2_DO_TEST_BENCH_WIRING 0
#define MIN_2_DRIVEN_SIM_VALUE 0
#define MIN_2_EDGE_TYPE "NONE"
#define MIN_2_FREQ 50000000
#define MIN_2_HAS_IN 0
#define MIN_2_HAS_OUT 1
#define MIN_2_HAS_TRI 0
#define MIN_2_IRQ -1
#define MIN_2_IRQ_INTERRUPT_CONTROLLER_ID -1
#define MIN_2_IRQ_TYPE "NONE"
#define MIN_2_NAME "/dev/MIN_2"
#define MIN_2_RESET_VALUE 0
#define MIN_2_SPAN 16
#define MIN_2_TYPE "altera_avalon_pio"


/*
 * RAM configuration
 *
 */

#define ALT_MODULE_CLASS_RAM altera_avalon_onchip_memory2
#define RAM_ALLOW_IN_SYSTEM_MEMORY_CONTENT_EDITOR 0
#define RAM_ALLOW_MRAM_SIM_CONTENTS_ONLY_FILE 0
#define RAM_BASE 0x0
#define RAM_CONTENTS_INFO ""
#define RAM_DUAL_PORT 0
#define RAM_GUI_RAM_BLOCK_TYPE "AUTO"
#define RAM_INIT_CONTENTS_FILE "system_RAM"
#define RAM_INIT_MEM_CONTENT 1
#define RAM_INSTANCE_ID "NONE"
#define RAM_IRQ -1
#define RAM_IRQ_INTERRUPT_CONTROLLER_ID -1
#define RAM_NAME "/dev/RAM"
#define RAM_NON_DEFAULT_INIT_FILE_ENABLED 0
#define RAM_RAM_BLOCK_TYPE "AUTO"
#define RAM_READ_DURING_WRITE_MODE "DONT_CARE"
#define RAM_SINGLE_CLOCK_OP 0
#define RAM_SIZE_MULTIPLE 1
#define RAM_SIZE_VALUE 4096
#define RAM_SPAN 4096
#define RAM_TYPE "altera_avalon_onchip_memory2"
#define RAM_WRITABLE 1


/*
 * SEC_1 configuration
 *
 */

#define ALT_MODULE_CLASS_SEC_1 altera_avalon_pio
#define SEC_1_BASE 0x1090
#define SEC_1_BIT_CLEARING_EDGE_REGISTER 0
#define SEC_1_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SEC_1_CAPTURE 0
#define SEC_1_DATA_WIDTH 7
#define SEC_1_DO_TEST_BENCH_WIRING 0
#define SEC_1_DRIVEN_SIM_VALUE 0
#define SEC_1_EDGE_TYPE "NONE"
#define SEC_1_FREQ 50000000
#define SEC_1_HAS_IN 0
#define SEC_1_HAS_OUT 1
#define SEC_1_HAS_TRI 0
#define SEC_1_IRQ -1
#define SEC_1_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SEC_1_IRQ_TYPE "NONE"
#define SEC_1_NAME "/dev/SEC_1"
#define SEC_1_RESET_VALUE 0
#define SEC_1_SPAN 16
#define SEC_1_TYPE "altera_avalon_pio"


/*
 * SEC_2 configuration
 *
 */

#define ALT_MODULE_CLASS_SEC_2 altera_avalon_pio
#define SEC_2_BASE 0x1100
#define SEC_2_BIT_CLEARING_EDGE_REGISTER 0
#define SEC_2_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SEC_2_CAPTURE 0
#define SEC_2_DATA_WIDTH 7
#define SEC_2_DO_TEST_BENCH_WIRING 0
#define SEC_2_DRIVEN_SIM_VALUE 0
#define SEC_2_EDGE_TYPE "NONE"
#define SEC_2_FREQ 50000000
#define SEC_2_HAS_IN 0
#define SEC_2_HAS_OUT 1
#define SEC_2_HAS_TRI 0
#define SEC_2_IRQ -1
#define SEC_2_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SEC_2_IRQ_TYPE "NONE"
#define SEC_2_NAME "/dev/SEC_2"
#define SEC_2_RESET_VALUE 0
#define SEC_2_SPAN 16
#define SEC_2_TYPE "altera_avalon_pio"


/*
 * SET_MODE_BUTTON configuration
 *
 */

#define ALT_MODULE_CLASS_SET_MODE_BUTTON altera_avalon_pio
#define SET_MODE_BUTTON_BASE 0x1010
#define SET_MODE_BUTTON_BIT_CLEARING_EDGE_REGISTER 0
#define SET_MODE_BUTTON_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SET_MODE_BUTTON_CAPTURE 1
#define SET_MODE_BUTTON_DATA_WIDTH 1
#define SET_MODE_BUTTON_DO_TEST_BENCH_WIRING 0
#define SET_MODE_BUTTON_DRIVEN_SIM_VALUE 0
#define SET_MODE_BUTTON_EDGE_TYPE "FALLING"
#define SET_MODE_BUTTON_FREQ 50000000
#define SET_MODE_BUTTON_HAS_IN 1
#define SET_MODE_BUTTON_HAS_OUT 0
#define SET_MODE_BUTTON_HAS_TRI 0
#define SET_MODE_BUTTON_IRQ 1
#define SET_MODE_BUTTON_IRQ_INTERRUPT_CONTROLLER_ID 0
#define SET_MODE_BUTTON_IRQ_TYPE "EDGE"
#define SET_MODE_BUTTON_NAME "/dev/SET_MODE_BUTTON"
#define SET_MODE_BUTTON_RESET_VALUE 0
#define SET_MODE_BUTTON_SPAN 16
#define SET_MODE_BUTTON_TYPE "altera_avalon_pio"


/*
 * System configuration
 *
 */

#define ALT_DEVICE_FAMILY "Cyclone V"
#define ALT_ENHANCED_INTERRUPT_API_PRESENT
#define ALT_IRQ_BASE NULL
#define ALT_LOG_PORT "/dev/null"
#define ALT_LOG_PORT_BASE 0x0
#define ALT_LOG_PORT_DEV null
#define ALT_LOG_PORT_TYPE ""
#define ALT_NUM_EXTERNAL_INTERRUPT_CONTROLLERS 0
#define ALT_NUM_INTERNAL_INTERRUPT_CONTROLLERS 1
#define ALT_NUM_INTERRUPT_CONTROLLERS 1
#define ALT_STDERR "/dev/JTAG"
#define ALT_STDERR_BASE 0x3018
#define ALT_STDERR_DEV JTAG
#define ALT_STDERR_IS_JTAG_UART
#define ALT_STDERR_PRESENT
#define ALT_STDERR_TYPE "altera_avalon_jtag_uart"
#define ALT_STDIN "/dev/JTAG"
#define ALT_STDIN_BASE 0x3018
#define ALT_STDIN_DEV JTAG
#define ALT_STDIN_IS_JTAG_UART
#define ALT_STDIN_PRESENT
#define ALT_STDIN_TYPE "altera_avalon_jtag_uart"
#define ALT_STDOUT "/dev/JTAG"
#define ALT_STDOUT_BASE 0x3018
#define ALT_STDOUT_DEV JTAG
#define ALT_STDOUT_IS_JTAG_UART
#define ALT_STDOUT_PRESENT
#define ALT_STDOUT_TYPE "altera_avalon_jtag_uart"
#define ALT_SYSTEM_NAME "system"


/*
 * TIMER configuration
 *
 */

#define ALT_MODULE_CLASS_TIMER altera_avalon_timer
#define TIMER_ALWAYS_RUN 1
#define TIMER_BASE 0x2000
#define TIMER_COUNTER_SIZE 32
#define TIMER_FIXED_PERIOD 1
#define TIMER_FREQ 50000000
#define TIMER_IRQ 5
#define TIMER_IRQ_INTERRUPT_CONTROLLER_ID 0
#define TIMER_LOAD_VALUE 49999999
#define TIMER_MULT 1.0
#define TIMER_NAME "/dev/TIMER"
#define TIMER_PERIOD 1
#define TIMER_PERIOD_UNITS "s"
#define TIMER_RESET_OUTPUT 0
#define TIMER_SNAPSHOT 1
#define TIMER_SPAN 32
#define TIMER_TICKS_PER_SEC 1
#define TIMER_TIMEOUT_PULSE_OUTPUT 0
#define TIMER_TYPE "altera_avalon_timer"


/*
 * hal configuration
 *
 */

#define ALT_INCLUDE_INSTRUCTION_RELATED_EXCEPTION_API
#define ALT_MAX_FD 4
#define ALT_SYS_CLK none
#define ALT_TIMESTAMP_CLK TIMER

#endif /* __SYSTEM_H_ */
