/**********************************************************************
 *
 * Copyright (c) OE Solutions
 *
 * OE Solutions R&D GROUP
 * AUTHOR : SH Lee
 *
 * PROJECT : SFP28 DML
 * FILENAME : version.h
 * CONTENTS : Firmware Version
 *
 * FIRMWARE CHANGE HISTORY:
 * v0.14A (03/15/2019) : Test Git.
 * v0.13A (03/13/2019) : Added DC-DC Enable Pin2.3 assignment.(io_port & chip_lib)
 * v0.12A (01/08/2019) : Changed Tx EQ, Rx Emph value to be linked to RS states.
 * v0.11A (05/25/2018) : Remove DDMI_UPDATE_FLAG (Main.c)
 * v0.10A (05/24/2018) : Added MOD_Control functions (control.c)
 * v0.09A (05/23/2018) : Added interrupt priority change in EmulationWrite functions (eeprom.c)
 * v0.08A (05/22/2018) : Changed DDM_RxPower Remove Condition & Other modifications (sfp_msa.c)
 * v0.07A (05/17/2018) : Moved Tx_EQ / Rx_EMPHA functions to Soft_Control functions (control.c)
 * v0.06A (04/27/2018) : Changed power level 2 in INT0_ISR & Soft_Control functions (eeprom.c & sfp_msa.c)
 * v0.05A (04/27/2018) : Added RS0/RS1 CLU1 control (chip_lib.c & control.c)
 * v0.04A (04/23/2018) : Added Power level 2 (eeprom.c & sfp_msa.c)
 * v0.03A (04/11/2018) : changed to TEC Current limit 870(350mA) ¡æ 1240(500mA) (control.c)
 * v0.02A (04/11/2018) : Added TEC Step Control & APD Control (control.c)
 * v0.01A (04/06/2018) : New firmware for SFP28 DML version based on SFP28 Heater 1.43A
 *********************************************************************/
#define FIRMWARE_VERSION    0x13A				// Version 0.13A
