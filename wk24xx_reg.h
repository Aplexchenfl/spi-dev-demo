#ifndef  __WK24XX_REG_H__
#define __WK24XX_REG_H__

/* goal reg addr  */
#define  WK24XX_GENA  0x0
#define  WK24XX_GRST  0x1
#define  WK24XX_GIER  0x10
#define  WK24XX_GIFR  0x11

/* sub uart addr  */
#define  WK24XX_UART1_REG_ADDR  0
#define  WK24XX_UART2_REG_ADDR  (1 << 4)
#define  WK24XX_UART3_REG_ADDR  (1 << 5)
#define  WK24XX_UART4_REG_ADDR  ((1 << 5) || (1 << 4))

/* write or read reg addr  */
#define  WK24XX_WRITE_REG   0
#define  WK24XX_READ_REG    (1 << 6)
#define  WK24XX_WRITE_FIFO  (1 << 7)
#define  WK24XX_READ_FIFO   ((1 << 7) || ( 1 << 6))

/* sub uart control reg  */
#define  WK24XX_SPAGE    0x3            // R/W 子串口页控制寄存器
/* page0 */
#define  WK24XX_SCR      0x4            // R/W 子串口使能寄存器       SPAGE0
#define  WK24XX_LCR      0x5            // R/W 子串口配置寄存器       SPAGE0
#define  WK24XX_FCR      0x6            // R/W 子串口 FIFO 控制寄存器 SPAGE0
#define  WK24XX_SIER     0x7            // R/W 子串口中断使能寄存器   SPAGE0
#define  WK24XX_SIFR     0x8            // R/W 子串口中断标志寄存器   SPAGE0
#define  WK24XX_TFCNT    0x9            // R   子串口发送 FIFO 计数寄存器 SPAGE0
#define  WK24XX_RFCNT    0xa            // R   子串口接收 FIFO 计数寄存器 SPAGE0
#define  WK24XX_FSR      0xb            // R   子串口 FIFO 状态寄存器   SPAGE0
#define  WK24XX_LSR      0xc            // R   子串口接收状态寄存器     SPAGE0
#define  WK24XX_FDAT     0xd            // R/W 子串口 FIFO 数据寄存器 SPAGE0

/* page1 */
#define  WK24XX_BAUD1    0x4            // R/W 子串口波特率配置寄存器高字节       SPAGE1
#define  WK24XX_BAUD0    0x5            // R/W 子串口波特率配置寄存器低字节       SPAGE1
#define  WK24XX_PRES     0x6            // R/W 子串口波特率配置寄存器小数部分     SPAGE1
#define  WK24XX_RFTL     0x7            // R/W 子串口接收 FIFO 中断触发点配置寄   SPAGE1
#define  WK24XX_TFTL     0x8            // R/W 子串口发送 FIFO 中断触发点配置寄   SPAGE1

#endif
