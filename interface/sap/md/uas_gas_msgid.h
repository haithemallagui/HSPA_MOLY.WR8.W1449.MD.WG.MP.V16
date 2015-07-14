/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2007
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

/*******************************************************************************
 * Filename:
 * ---------
 *   uas_gas_sap.h
 *
 * Project:
 * --------
 *   MONZA
 *
 * Description:
 * ------------
 *
 *
 * Author:
 * -------
 * -------
 *
 *===========================================================================
 * $Log:$
 * 
 * 09 06 2012 justin.li
 * [MOLY00003047] [MOLY task force] �Nmodem related options����modem internal
 * .
 * 
 * 08 09 2012 maruco.tu
 * [MOLY00001700] [Inter-RAT] Correct IRCCO cause in RCR and remove unused msg_id
 * [Inter-RAT] Correct IRCCO cause in RCR and remove unused msg_id.
 *
 * 06 08 2012 qinghua.yu
 * removed!
 * 1) confirm all _msgid.h is same as old (exclude fold ../delete/);
 * 2) fix range error in module_msg_range.h.
 *
 * 05 28 2012 yj.cheng
 * removed!
 * .
 *
 * 05 24 2012 wcpuser_integrator
 * removed!
 * Qinghua Yu check in global enum (MSG & SAP) at modem_dev.
 *
 * 05 24 2012 wcpuser_integrator
 * removed!
 * Qinghua Yu check in global enum (MSG & SAP) at modem_dev.
 *
 * 05 24 2012 wcpuser_integrator
 * removed!
 * Qinghua Yu check in global enum (MSG & SAP) at modem_dev.
 *
 * 04 10 2012 chi-chung.lin
 * removed!
 * [MT6280] code sync. from MT6280_DVT_DEV to MT6280_GCC_DEV
 *
 * 04 09 2012 chi-chung.lin
 * removed!
 * .
 *
 * 02 23 2012 adeline.chang
 * removed!
 * .
 *
 * 01 11 2012 shunwen.hsiao
 * removed!
 * Check in TK6280_DVT_DEV to MT6280_DVT_DEV
 *
 * 01 06 2012 chi-chung.lin
 * removed!
 * .
 *
 * 12 07 2010 maruco.tu
 * removed!
 * .
 *
 * removed!
 * removed!
 * 
 *
 * removed!
 * removed!
 * add to source control recursely
 *===========================================================================
 ****************************************************************************/
#include "module_msg_range.h"

#ifndef _UAS_GAS_MSG_H
#define _UAS_GAS_MSG_H

#if defined(__UMTS_RAT__)&& !defined (__L1_STANDALONE__)
#ifdef __SOURCE_INSIGHT_PARSE__
typedef enum {
#endif

MODULE_MSG_BEGIN( MSG_ID_DM_CSCE_CODE_BEGIN )
// MSG_ID_DM_CSCE_CODE_BEGIN
MSG_ID_GAS_UAS_EVALUATE_UCELL_REQ = MSG_ID_DM_CSCE_CODE_BEGIN,
MSG_ID_GAS_UAS_ACTIVATE_UCELL_REQ, 
MSG_ID_GAS_UAS_LOWER_LAYER_AVAILABILITY_REQ, 
#ifdef __CSG_SUPPORT__
MSG_ID_GAS_UAS_SEARCH_CSG_UCELL_REQ,
MSG_ID_GAS_UAS_EVALUATE_CSG_UCELL_REQ,
#endif
#ifdef __PRI_RESEL_SUPPORT__
MSG_ID_GAS_UAS_DEDICATE_PRIORITY_UPDATE_IND,
#endif /* __PRI_RESEL_SUPPORT__*/
MSG_ID_GAS_UAS_EVALUATE_UCELL_STOP_REQ,
MSG_ID_DM_CSCE_CODE_END = MSG_ID_GAS_UAS_EVALUATE_UCELL_STOP_REQ, 
// MSG_ID_DM_CSCE_CODE_END,
MODULE_MSG_END( MSG_ID_DM_CSCE_CODE_TAIL )

MODULE_MSG_BEGIN( MSG_ID_DM_GAS_CODE_BEGIN )
//MSG_ID_DM_GAS_CODE_BEGIN,
MSG_ID_UAS_GAS_CONFIG_GCELL_MEAS_REQ = MSG_ID_DM_GAS_CODE_BEGIN,
#if defined(__PRI_RESEL_SUPPORT__)
MSG_ID_UAS_GAS_CONFIG_GCELL_PRIO_MEAS_REQ,
MSG_ID_GAS_UAS_CONFIG_UCELL_PRIO_MEAS_CNF,
#endif
MSG_ID_UAS_GAS_LOWER_LAYER_AVAILABILITY_REQ, 
MSG_ID_UAS_GAS_EVALUATE_GCELL_REQ,
MSG_ID_UAS_GAS_ACTIVATE_GCELL_REQ,
MSG_ID_UAS_GAS_EVALUATE_GCELL_STOP_REQ,
MSG_ID_UAS_GAS_HANDOVER_GCELL_REQ,  
MSG_ID_UAS_GAS_HO_ACTIVATE_GCELL_REQ,
MSG_ID_UAS_GAS_ABORT_HO_GCELL_REQ,
MSG_ID_GAS_UAS_CONFIG_UCELL_MEAS_CNF,
MSG_ID_GAS_UAS_UCELL_MEAS_IND,
MSG_ID_GAS_UAS_EVALUATE_UCELL_CNF,
MSG_ID_GAS_UAS_ACTIVATE_UCELL_CNF,
MSG_ID_GAS_UAS_EVALUATE_UCELL_STOP_CNF,
MSG_ID_GAS_UAS_UCELL_CHANGE_COMPLETE_IND,
MSG_ID_GAS_UAS_HANDOVER_UCELL_CNF,
MSG_ID_GAS_UAS_HO_ACTIVATE_UCELL_CNF,
MSG_ID_GAS_UAS_HO_UMTS_INFO_IND,
#ifdef __CMCC_STD_FR__
MSG_ID_GAS_UAS_STD_FR_INFO_IND,
#endif
#ifdef __CSG_SUPPORT__
MSG_ID_UAS_GAS_ACSGL_PLMN_LIST_IND,
MSG_ID_GAS_UAS_SEARCH_CSG_UCELL_CNF,
MSG_ID_GAS_UAS_EVALUATE_CSG_UCELL_CNF,
#endif
#ifdef __WCDMA_PREFERRED__
MSG_ID_GAS_UAS_WCDMA_PREFER_PARAMS_IND,
#endif
MSG_ID_GAS_UAS_CELL_RESELECTION_PARAMS_IND,
MSG_ID_DM_GAS_CODE_END = MSG_ID_GAS_UAS_CELL_RESELECTION_PARAMS_IND,
//MSG_ID_DM_GAS_CODE_END,
MODULE_MSG_END( MSG_ID_DM_GAS_CODE_TAIL )

MODULE_MSG_BEGIN( MSG_ID_DM_MEME_CODE_BEGIN )
//MSG_ID_DM_MEME_CODE_BEGIN,
MSG_ID_UAS_GAS_CONFIG_GCELL_MEAS_CNF = MSG_ID_DM_MEME_CODE_BEGIN,
#if defined(__PRI_RESEL_SUPPORT__)
MSG_ID_UAS_GAS_CONFIG_GCELL_PRIO_MEAS_CNF,
MSG_ID_GAS_UAS_CONFIG_UCELL_PRIO_MEAS_REQ,
#endif
MSG_ID_UAS_GAS_GCELL_MEAS_IND,
MSG_ID_UAS_GAS_GCELL_BSIC_IND,
MSG_ID_GAS_UAS_CONFIG_UCELL_MEAS_REQ,
MSG_ID_DM_MEME_CODE_END = MSG_ID_GAS_UAS_CONFIG_UCELL_MEAS_REQ,
MODULE_MSG_END( MSG_ID_DM_MEME_CODE_TAIL )

//MSG_ID_DM_RRCE_CODE_BEGIN,
MODULE_MSG_BEGIN( MSG_ID_DM_RRCE_CODE_BEGIN )
MSG_ID_UAS_GAS_HO_ACTIVATE_GCELL_CNF = MSG_ID_DM_RRCE_CODE_BEGIN,
MSG_ID_UAS_GAS_HANDOVER_GCELL_CNF,
MSG_ID_GAS_UAS_HANDOVER_UCELL_REQ,  
MSG_ID_GAS_UAS_HO_ACTIVATE_UCELL_REQ,
MSG_ID_GAS_UAS_ABORT_HO_UCELL_REQ,
MSG_ID_GAS_UAS_HO_UMTS_INFO_RSP,
MSG_ID_UAS_GAS_HO_GSM_INFO_IND,
MSG_ID_UAS_GAS_EVALUATE_GCELL_CNF,
MSG_ID_UAS_GAS_ACTIVATE_GCELL_CNF,
MSG_ID_UAS_GAS_EVALUATE_GCELL_STOP_CNF,
MSG_ID_UAS_GAS_GCELL_CHANGE_COMPLETE_IND,
MSG_ID_DM_RRCE_CODE_END = MSG_ID_UAS_GAS_GCELL_CHANGE_COMPLETE_IND, 
MODULE_MSG_END( MSG_ID_DM_RRCE_CODE_TAIL )
//MSG_ID_DM_RRCE_CODE_END,


#ifdef __SOURCE_INSIGHT_PARSE__
};
#endif

#endif
#endif   //_UAS_GAS_MSG_H
