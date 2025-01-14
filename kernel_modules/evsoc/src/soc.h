#ifndef SOC_H
#define SOC_H
#define SYSTEM_PLIC_SYSTEM_CORES_0_EXTERNAL_INTERRUPT 0
#define SYSTEM_PLIC_SYSTEM_CORES_0_EXTERNAL_SUPERVISOR_INTERRUPT 1
#define SYSTEM_PLIC_SYSTEM_CORES_1_EXTERNAL_INTERRUPT 2
#define SYSTEM_PLIC_SYSTEM_CORES_1_EXTERNAL_SUPERVISOR_INTERRUPT 3
#define SYSTEM_PLIC_SYSTEM_CORES_2_EXTERNAL_INTERRUPT 4
#define SYSTEM_PLIC_SYSTEM_CORES_2_EXTERNAL_SUPERVISOR_INTERRUPT 5
#define SYSTEM_PLIC_SYSTEM_CORES_3_EXTERNAL_INTERRUPT 6
#define SYSTEM_PLIC_SYSTEM_CORES_3_EXTERNAL_SUPERVISOR_INTERRUPT 7
#define SYSTEM_PLIC_USER_INTERRUPT_A_INTERRUPT 1
#define SYSTEM_PLIC_USER_INTERRUPT_B_INTERRUPT 2
#define SYSTEM_PLIC_USER_INTERRUPT_C_INTERRUPT 3
#define SYSTEM_PLIC_USER_INTERRUPT_D_INTERRUPT 4
#define SYSTEM_PLIC_USER_INTERRUPT_E_INTERRUPT 5
#define SYSTEM_PLIC_USER_INTERRUPT_F_INTERRUPT 6
#define SYSTEM_PLIC_USER_INTERRUPT_G_INTERRUPT 7
#define SYSTEM_PLIC_USER_INTERRUPT_H_INTERRUPT 8
#define SYSTEM_PLIC_USER_INTERRUPT_I_INTERRUPT 9
#define SYSTEM_PLIC_USER_INTERRUPT_J_INTERRUPT 10
#define SYSTEM_PLIC_USER_INTERRUPT_K_INTERRUPT 11
#define SYSTEM_PLIC_USER_INTERRUPT_L_INTERRUPT 12
#define SYSTEM_PLIC_USER_INTERRUPT_M_INTERRUPT 13
#define SYSTEM_PLIC_USER_INTERRUPT_N_INTERRUPT 14
#define SYSTEM_PLIC_USER_INTERRUPT_O_INTERRUPT 15
#define SYSTEM_PLIC_USER_INTERRUPT_P_INTERRUPT 16
#define SYSTEM_PLIC_USER_INTERRUPT_Q_INTERRUPT 17
#define SYSTEM_PLIC_USER_INTERRUPT_R_INTERRUPT 18
#define SYSTEM_PLIC_USER_INTERRUPT_S_INTERRUPT 19
#define SYSTEM_PLIC_USER_INTERRUPT_T_INTERRUPT 20
#define SYSTEM_PLIC_USER_INTERRUPT_U_INTERRUPT 21
#define SYSTEM_PLIC_USER_INTERRUPT_V_INTERRUPT 22
#define SYSTEM_PLIC_USER_INTERRUPT_W_INTERRUPT 23
#define SYSTEM_PLIC_USER_INTERRUPT_X_INTERRUPT 24
#define SYSTEM_PLIC_SYSTEM_AXI_A_INTERRUPT 30
#define SYSTEM_PLIC_SYSTEM_USER_TIMER_1_INTERRUPTS_0 49
#define SYSTEM_PLIC_SYSTEM_USER_TIMER_0_INTERRUPTS_0 50
#define SYSTEM_CLINT_HZ 200000000
#define SYSTEM_RAM_A_SIZE 16384
#define SYSTEM_CORES_0_CFU 1
#define SYSTEM_CORES_0_FPU 1
#define SYSTEM_CORES_0_MMU 1
#define SYSTEM_CORES_0_ICACHE_WAYS 4
#define SYSTEM_CORES_0_ICACHE_SIZE 16384
#define SYSTEM_CORES_0_BYTES_PER_LINE 64
#define SYSTEM_CORES_0_DCACHE_WAYS 4
#define SYSTEM_CORES_0_DCACHE_SIZE 16384
#define SYSTEM_CORES_0_BYTES_PER_LINE 64
#define SYSTEM_CORES_0_SUPERVISOR 1
#define SYSTEM_CORES_1_CFU 1
#define SYSTEM_CORES_1_FPU 1
#define SYSTEM_CORES_1_MMU 1
#define SYSTEM_CORES_1_ICACHE_WAYS 4
#define SYSTEM_CORES_1_ICACHE_SIZE 16384
#define SYSTEM_CORES_1_BYTES_PER_LINE 64
#define SYSTEM_CORES_1_DCACHE_WAYS 4
#define SYSTEM_CORES_1_DCACHE_SIZE 16384
#define SYSTEM_CORES_1_BYTES_PER_LINE 64
#define SYSTEM_CORES_1_SUPERVISOR 1
#define SYSTEM_CORES_2_CFU 1
#define SYSTEM_CORES_2_FPU 1
#define SYSTEM_CORES_2_MMU 1
#define SYSTEM_CORES_2_ICACHE_WAYS 4
#define SYSTEM_CORES_2_ICACHE_SIZE 16384
#define SYSTEM_CORES_2_BYTES_PER_LINE 64
#define SYSTEM_CORES_2_DCACHE_WAYS 4
#define SYSTEM_CORES_2_DCACHE_SIZE 16384
#define SYSTEM_CORES_2_BYTES_PER_LINE 64
#define SYSTEM_CORES_2_SUPERVISOR 1
#define SYSTEM_CORES_3_CFU 1
#define SYSTEM_CORES_3_FPU 1
#define SYSTEM_CORES_3_MMU 1
#define SYSTEM_CORES_3_ICACHE_WAYS 4
#define SYSTEM_CORES_3_ICACHE_SIZE 16384
#define SYSTEM_CORES_3_BYTES_PER_LINE 64
#define SYSTEM_CORES_3_DCACHE_WAYS 4
#define SYSTEM_CORES_3_DCACHE_SIZE 16384
#define SYSTEM_CORES_3_BYTES_PER_LINE 64
#define SYSTEM_CORES_3_SUPERVISOR 1
#define SYSTEM_BRIDGE_BMB 0x0
#define SYSTEM_RAM_A_CTRL 0xf9000000
#define SYSTEM_RAM_A_CTRL_SIZE 0x4000
#define SYSTEM_BMB_PERIPHERAL_BMB 0xf8000000
#define SYSTEM_BMB_PERIPHERAL_BMB_SIZE 0x1000000
#define SYSTEM_PLIC_CTRL 0xf8c00000
#define SYSTEM_PLIC_CTRL_SIZE 0x400000
#define SYSTEM_CLINT_CTRL 0xf8b00000
#define SYSTEM_CLINT_CTRL_SIZE 0x10000
#define SYSTEM_USER_TIMER_1_CTRL 0xf8016000
#define SYSTEM_USER_TIMER_1_CTRL_SIZE 0x1000
#define SYSTEM_USER_TIMER_0_CTRL 0xf8015000
#define SYSTEM_USER_TIMER_0_CTRL_SIZE 0x1000
#define SYSTEM_DDR_BMB 0x1000
#define SYSTEM_DDR_BMB_SIZE 0xe7fff000
#define SYSTEM_AXI_A_BMB 0xe8000000
#define SYSTEM_AXI_A_BMB_SIZE 0x10000000

/*
 * Single AXI Slave interface split into two spaces,
 * one for SLB,
 * one for AXI Slave.
 *
 * AXI Slave interface from SOC,
 * address range = 0xe800_0000 ~ 0xf7ff_ffff
 * Effective address space = 0x1000_0000 (28-bit)
 *
 * Equally split it into two address spaces:
 * Slave 0 = from 0xe800_0000 ~ 0xefff_ffff (27-bit)
 * Slave 1 = from 0xf000_0000 ~ 0xf7ff_ffff (27-bit)
 *
 * Slave 0 = SLB
 * Slave 1 = AXI Slave interface
 */

// SLB peripherals (0xe800_0000 ~ 0xefff_ffff)
#define SYSTEM_GPIO_0_IO_CTRL 0xe8000000
#define SYSTEM_GPIO_0_IO_CTRL_SIZE 0x100
#define SYSTEM_UART_0_IO_CTRL 0xe8010000
#define SYSTEM_UART_0_IO_CTRL_SIZE 0x40
#define SYSTEM_I2C_0_IO_CTRL 0xe8020000
#define SYSTEM_I2C_0_IO_CTRL_SIZE 0x100
#define SYSTEM_SPI_0_IO_CTRL 0xe8030000
#define SYSTEM_SPI_0_IO_CTRL_SIZE 0x1000
#define SYSTEM_SPI_1_IO_CTRL 0xe8031000
#define SYSTEM_SPI_1_IO_CTRL_SIZE 0x1000
#define IO_APB_SLAVE_0_INPUT 0xe8100000
#define IO_APB_SLAVE_0_INPUT_SIZE 0x100000
#define IO_APB_SLAVE_1_INPUT 0xe8200000
#define IO_APB_SLAVE_1_INPUT_SIZE 0x100000
#define IO_APB_SLAVE_2_INPUT 0xe8300000
#define IO_APB_SLAVE_2_INPUT_SIZE 0x100000
#define IO_APB_SLAVE_3_INPUT 0xe8400000
#define IO_APB_SLAVE_3_INPUT_SIZE 0x100000

// AXI Slave interface (0xf000_0000 ~ 0xf7ff_ffff)
#define IO_AXI_SLAVE_0      0xf0000000
#define IO_AXI_SLAVE_0_SIZE 0x8000000

#define SYSTEM_PLIC_SYSTEM_UART_0_IO_INTERRUPT SYSTEM_PLIC_USER_INTERRUPT_I_INTERRUPT
#define SYSTEM_PLIC_SYSTEM_I2C_0_IO_INTERRUPT SYSTEM_PLIC_USER_INTERRUPT_J_INTERRUPT
#define SYSTEM_PLIC_SYSTEM_SPI_0_IO_INTERRUPT SYSTEM_PLIC_USER_INTERRUPT_K_INTERRUPT
#define SYSTEM_PLIC_SYSTEM_SPI_1_IO_INTERRUPT SYSTEM_PLIC_USER_INTERRUPT_L_INTERRUPT
#define SYSTEM_PLIC_SYSTEM_GPIO_0_IO_INTERRUPTS_0 SYSTEM_PLIC_USER_INTERRUPT_M_INTERRUPT
#define SYSTEM_PLIC_SYSTEM_GPIO_0_IO_INTERRUPTS_1 SYSTEM_PLIC_USER_INTERRUPT_N_INTERRUPT
#define SYSTEM_PLIC_SYSTEM_GPIO_0_IO_INTERRUPTS_2 SYSTEM_PLIC_USER_INTERRUPT_O_INTERRUPT
#define SYSTEM_PLIC_SYSTEM_GPIO_0_IO_INTERRUPTS_3 SYSTEM_PLIC_USER_INTERRUPT_P_INTERRUPT


#endif

