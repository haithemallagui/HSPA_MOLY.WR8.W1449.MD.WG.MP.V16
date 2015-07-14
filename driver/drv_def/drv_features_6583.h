/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2005
*
*  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
*  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
*  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
*  AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
*  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
*  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
*  NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
*  SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
*  SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK ONLY TO SUCH
*  THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
*  NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S
*  SPECIFICATION OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
*
*  BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE
*  LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
*  AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
*  OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY BUYER TO
*  MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
*
*  THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE
*  WITH THE LAWS OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF
*  LAWS PRINCIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
*  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
*  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
*
*****************************************************************************/

/*****************************************************************************
 *
 * Filename:
 * ---------
 *    drv_features_6583.h
 *
 * Project:
 * --------
 *   Maui_Software
 *
 * Description:
 * ------------
 *   This file is merged for MT6575 driver features.
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 *

 * removed!
 *

 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifndef DRV_FEATURES_6583_H
#define DRV_FEATURES_6583_H

#if  defined(MT6589)


/****************MD1 Drv_feature Is As  Belowed*********************/

#if defined(__MD1__)

/* Features for USB */
#define DRV_USB_6583_SERIES

/* Features for UPLL */


/* Features for I2C */
#define DRV_I2C_6583_SERIES

/* Features for GCU*/
#define DRV_GCU_6225_SERIES

/* Features for ADC */
#define DRV_ADC_6583_SERIES

/* Features for WDT */
#define DRV_WDT_6589_SERIES

/* Features for RTC */
#define DRV_RTC_NOT_EXIST

/* Features for UART */
#define DRV_UART_6583_SERIES

/* Features for GPT*/
#define DRV_GPT_6589_SERIES

/* Features for KBD*/
#define DRV_KBD_NOT_EXIST

/* Features for PWM */
#define DRV_PWM_6575_SERIES

/* Features for GPIO */
#define DRV_GPIO_6583_SERIES

/* Features for Camera ISP */

/* Features for BMT */
#define DRV_BMT_6583_SERIES

/* Features for MSDC */
#define DRV_MSDC_MT6276_SERIES

/* Features for HIF */


/* Misc. driver featuers */
#define DRV_MISC_6280_SERIES

/* Features for PFC */


/*Features for SIM*/
#define DRV_SIM_6575_SERIES

/*storage cached transfer support*/
#define MSDC_CACHED_SUPPORT

/*Features for PMIC*/
#define DRV_PMIC_SPI_6583_SERIES

/*Features for F8F9BC*/
#define DRV_F8F9BC_6583_SERIES


/****************MD1 Drv_feature  End*******************************/

/****************MD2 Drv_feature Is As  Belowed*********************/

#elif defined(__MD2__)

/* Features for USB */
#define DRV_USB_6583_SERIES

/* Features for UPLL */


/* Features for I2C */
#define DRV_I2C_6583_SERIES

/* Features for GCU*/
#define DRV_GCU_6225_SERIES

/* Features for ADC */
#define DRV_ADC_6583_SERIES

/* Features for WDT */
#define DRV_WDT_6589_SERIES

/* Features for RTC */
#define DRV_RTC_NOT_EXIST

/* Features for UART */
#define DRV_UART_6583_SERIES

/* Features for GPT*/
#define DRV_GPT_6589_SERIES

/* Features for KBD*/
#define DRV_KBD_NOT_EXIST

/* Features for PWM */
#define DRV_PWM_6575_SERIES

/* Features for GPIO */
#define DRV_GPIO_6583_SERIES

/* Features for Camera ISP */

/* Features for BMT */
#define DRV_BMT_6583_SERIES

/* Features for MSDC */
#define DRV_MSDC_MT6276_SERIES

/* Features for HIF */
#define DRV_HIF_V2_SERIES

/* Misc. driver featuers */
#define DRV_MISC_6280_SERIES

/* Features for PFC */


/*Features for SIM*/
#define DRV_SIM_6575_SERIES

/*storage cached transfer support*/
#define MSDC_CACHED_SUPPORT

/*Features for PMIC*/
#define DRV_PMIC_SPI_6583_SERIES

/*Features for F8F9BC*/
#define DRV_F8F9BC_6583_SERIES

#else

#error MD1 AND MD2 is not defined in this projet

#endif 

/****************MD2 Drv_feature End******************************/

/*Above is MT6583*/
#endif /* MT6583*/
#endif   /*DRV_FEATURES_6583_H*/
