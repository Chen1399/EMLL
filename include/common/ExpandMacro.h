/*****************************************************************************/
/* Copyright YouDao, Inc.                                                    */
/*                                                                           */
/* Licensed under the Apache License, Version 2.0 (the "License");           */
/* you may not use this file except in compliance with the License.          */
/* You may obtain a copy of the License at                                   */
/*                                                                           */
/*     http://www.apache.org/licenses/LICENSE-2.0                            */
/*                                                                           */
/* Unless required by applicable law or agreed to in writing, software       */
/* distributed under the License is distributed on an "AS IS" BASIS,         */
/* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.  */
/* See the License for the specific language governing permissions and       */
/* limitations under the License.                                            */
/*****************************************************************************/


/******************************************************************************
 * File:        ExpandMacro.h
 * Description: Smart macros for manual unroll of tiny loops
 * Example:     Original loop:
 *                INITIALIZATION(parm1, parm2)
 *                for (int i = 1; i <= 8; ++i) {
 *                  LOOP_ITEM(i, parm1, parm2)
 *                }
 *              Using macros to manually unroll the loop:
 *                MACRO_EXP_8(INITIALIZATION, LOOP_ITEM, parm1, parm2)
 *              Which is identical to the original loop.
 *****************************************************************************/
#ifndef INCLUDE_EXPAND_MACRO
#define INCLUDE_EXPAND_MACRO

#define VOID_BASE(...) /* */

#define MACRO_EXP_0(BASE, ADD_ITEM, ...) \
  BASE(__VA_ARGS__)

#define MACRO_EXP_1(BASE, ADD_ITEM, ...) \
  BASE(__VA_ARGS__)\
  ADD_ITEM(1, ##__VA_ARGS__)

#define MACRO_EXP_2(BASE, ADD_ITEM, ...) \
  MACRO_EXP_1(BASE, ADD_ITEM, ##__VA_ARGS__)\
  ADD_ITEM(2, ##__VA_ARGS__)

#define MACRO_EXP_3(BASE, ADD_ITEM, ...) \
  MACRO_EXP_2(BASE, ADD_ITEM, ##__VA_ARGS__)\
  ADD_ITEM(3, ##__VA_ARGS__)

#define MACRO_EXP_4(BASE, ADD_ITEM, ...) \
  MACRO_EXP_3(BASE, ADD_ITEM, ##__VA_ARGS__)\
  ADD_ITEM(4, ##__VA_ARGS__)

#define MACRO_EXP_5(BASE, ADD_ITEM, ...) \
  MACRO_EXP_4(BASE, ADD_ITEM, ##__VA_ARGS__)\
  ADD_ITEM(5, ##__VA_ARGS__)

#define MACRO_EXP_6(BASE, ADD_ITEM, ...) \
  MACRO_EXP_5(BASE, ADD_ITEM, ##__VA_ARGS__)\
  ADD_ITEM(6, ##__VA_ARGS__)

#define MACRO_EXP_7(BASE, ADD_ITEM, ...) \
  MACRO_EXP_6(BASE, ADD_ITEM, ##__VA_ARGS__)\
  ADD_ITEM(7, ##__VA_ARGS__)

#define MACRO_EXP_8(BASE, ADD_ITEM, ...) \
  MACRO_EXP_7(BASE, ADD_ITEM, ##__VA_ARGS__)\
  ADD_ITEM(8, ##__VA_ARGS__)

#define MACRO_EXP_9(BASE, ADD_ITEM, ...) \
  MACRO_EXP_8(BASE, ADD_ITEM, ##__VA_ARGS__)\
  ADD_ITEM(9, ##__VA_ARGS__)

#define MACRO_EXP_10(BASE, ADD_ITEM, ...) \
  MACRO_EXP_9(BASE, ADD_ITEM, ##__VA_ARGS__)\
  ADD_ITEM(10, ##__VA_ARGS__)

#define MACRO_EXP_11(BASE, ADD_ITEM, ...) \
  MACRO_EXP_10(BASE, ADD_ITEM, ##__VA_ARGS__)\
  ADD_ITEM(11, ##__VA_ARGS__)

#define MACRO_EXP_12(BASE, ADD_ITEM, ...) \
  MACRO_EXP_11(BASE, ADD_ITEM, ##__VA_ARGS__)\
  ADD_ITEM(12, ##__VA_ARGS__)

#define MACRO_EXP_13(BASE, ADD_ITEM, ...) \
  MACRO_EXP_12(BASE, ADD_ITEM, ##__VA_ARGS__)\
  ADD_ITEM(13, ##__VA_ARGS__)

#define MACRO_EXP_14(BASE, ADD_ITEM, ...) \
  MACRO_EXP_13(BASE, ADD_ITEM, ##__VA_ARGS__)\
  ADD_ITEM(14, ##__VA_ARGS__)

#define MACRO_EXP_15(BASE, ADD_ITEM, ...) \
  MACRO_EXP_14(BASE, ADD_ITEM, ##__VA_ARGS__)\
  ADD_ITEM(15, ##__VA_ARGS__)

#define MACRO_EXP_16(BASE, ADD_ITEM, ...) \
  MACRO_EXP_15(BASE, ADD_ITEM, ##__VA_ARGS__)\
  ADD_ITEM(16, ##__VA_ARGS__)

#define MACRO_EXP_17(BASE, ADD_ITEM, ...) \
  MACRO_EXP_16(BASE, ADD_ITEM, ##__VA_ARGS__)\
  ADD_ITEM(17, ##__VA_ARGS__)

#define MACRO_EXP_18(BASE, ADD_ITEM, ...) \
  MACRO_EXP_17(BASE, ADD_ITEM, ##__VA_ARGS__)\
  ADD_ITEM(18, ##__VA_ARGS__)

#define MACRO_EXP_19(BASE, ADD_ITEM, ...) \
  MACRO_EXP_18(BASE, ADD_ITEM, ##__VA_ARGS__)\
  ADD_ITEM(19, ##__VA_ARGS__)

#define MACRO_EXP_20(BASE, ADD_ITEM, ...) \
  MACRO_EXP_19(BASE, ADD_ITEM, ##__VA_ARGS__)\
  ADD_ITEM(20, ##__VA_ARGS__)

#define MACRO_EXP_21(BASE, ADD_ITEM, ...) \
  MACRO_EXP_20(BASE, ADD_ITEM, ##__VA_ARGS__)\
  ADD_ITEM(21, ##__VA_ARGS__)

#define MACRO_EXP_22(BASE, ADD_ITEM, ...) \
  MACRO_EXP_21(BASE, ADD_ITEM, ##__VA_ARGS__)\
  ADD_ITEM(22, ##__VA_ARGS__)

#define MACRO_EXP_23(BASE, ADD_ITEM, ...) \
  MACRO_EXP_22(BASE, ADD_ITEM, ##__VA_ARGS__)\
  ADD_ITEM(23, ##__VA_ARGS__)

#define MACRO_EXP_24(BASE, ADD_ITEM, ...) \
  MACRO_EXP_23(BASE, ADD_ITEM, ##__VA_ARGS__)\
  ADD_ITEM(24, ##__VA_ARGS__)

#define MACRO_EXP_25(BASE, ADD_ITEM, ...) \
  MACRO_EXP_24(BASE, ADD_ITEM, ##__VA_ARGS__)\
  ADD_ITEM(25, ##__VA_ARGS__)

#define MACRO_EXP_26(BASE, ADD_ITEM, ...) \
  MACRO_EXP_25(BASE, ADD_ITEM, ##__VA_ARGS__)\
  ADD_ITEM(26, ##__VA_ARGS__)

#define MACRO_EXP_27(BASE, ADD_ITEM, ...) \
  MACRO_EXP_26(BASE, ADD_ITEM, ##__VA_ARGS__)\
  ADD_ITEM(27, ##__VA_ARGS__)

#define MACRO_EXP_28(BASE, ADD_ITEM, ...) \
  MACRO_EXP_27(BASE, ADD_ITEM, ##__VA_ARGS__)\
  ADD_ITEM(28, ##__VA_ARGS__)

#define MACRO_EXP_29(BASE, ADD_ITEM, ...) \
  MACRO_EXP_28(BASE, ADD_ITEM, ##__VA_ARGS__)\
  ADD_ITEM(29, ##__VA_ARGS__)

#define MACRO_EXP_30(BASE, ADD_ITEM, ...) \
  MACRO_EXP_29(BASE, ADD_ITEM, ##__VA_ARGS__)\
  ADD_ITEM(30, ##__VA_ARGS__)

#define MACRO_EXP_31(BASE, ADD_ITEM, ...) \
  MACRO_EXP_30(BASE, ADD_ITEM, ##__VA_ARGS__)\
  ADD_ITEM(31, ##__VA_ARGS__)

#define MACRO_EXP_32(BASE, ADD_ITEM, ...) \
  MACRO_EXP_31(BASE, ADD_ITEM, ##__VA_ARGS__)\
  ADD_ITEM(32, ##__VA_ARGS__)

#define MACRO_EXP_33(BASE, ADD_ITEM, ...) \
  MACRO_EXP_32(BASE, ADD_ITEM, ##__VA_ARGS__)\
  ADD_ITEM(33, ##__VA_ARGS__)

#define MACRO_EXP_34(BASE, ADD_ITEM, ...) \
  MACRO_EXP_33(BASE, ADD_ITEM, ##__VA_ARGS__)\
  ADD_ITEM(34, ##__VA_ARGS__)

#define MACRO_EXP_35(BASE, ADD_ITEM, ...) \
  MACRO_EXP_34(BASE, ADD_ITEM, ##__VA_ARGS__)\
  ADD_ITEM(35, ##__VA_ARGS__)

#define MACRO_EXP_36(BASE, ADD_ITEM, ...) \
  MACRO_EXP_35(BASE, ADD_ITEM, ##__VA_ARGS__)\
  ADD_ITEM(36, ##__VA_ARGS__)

#define MACRO_EXP_37(BASE, ADD_ITEM, ...) \
  MACRO_EXP_36(BASE, ADD_ITEM, ##__VA_ARGS__)\
  ADD_ITEM(37, ##__VA_ARGS__)

#define MACRO_EXP_38(BASE, ADD_ITEM, ...) \
  MACRO_EXP_37(BASE, ADD_ITEM, ##__VA_ARGS__)\
  ADD_ITEM(38, ##__VA_ARGS__)

#define MACRO_EXP_39(BASE, ADD_ITEM, ...) \
  MACRO_EXP_38(BASE, ADD_ITEM, ##__VA_ARGS__)\
  ADD_ITEM(39, ##__VA_ARGS__)

#define MACRO_EXP_40(BASE, ADD_ITEM, ...) \
  MACRO_EXP_39(BASE, ADD_ITEM, ##__VA_ARGS__)\
  ADD_ITEM(40, ##__VA_ARGS__)

#define MACRO_EXP_41(BASE, ADD_ITEM, ...) \
  MACRO_EXP_40(BASE, ADD_ITEM, ##__VA_ARGS__)\
  ADD_ITEM(41, ##__VA_ARGS__)

#define MACRO_EXP_42(BASE, ADD_ITEM, ...) \
  MACRO_EXP_41(BASE, ADD_ITEM, ##__VA_ARGS__)\
  ADD_ITEM(42, ##__VA_ARGS__)

#define MACRO_EXP_43(BASE, ADD_ITEM, ...) \
  MACRO_EXP_42(BASE, ADD_ITEM, ##__VA_ARGS__)\
  ADD_ITEM(43, ##__VA_ARGS__)

#define MACRO_EXP_44(BASE, ADD_ITEM, ...) \
  MACRO_EXP_43(BASE, ADD_ITEM, ##__VA_ARGS__)\
  ADD_ITEM(44, ##__VA_ARGS__)

#define MACRO_EXP_45(BASE, ADD_ITEM, ...) \
  MACRO_EXP_44(BASE, ADD_ITEM, ##__VA_ARGS__)\
  ADD_ITEM(45, ##__VA_ARGS__)

#define MACRO_EXP_46(BASE, ADD_ITEM, ...) \
  MACRO_EXP_45(BASE, ADD_ITEM, ##__VA_ARGS__)\
  ADD_ITEM(46, ##__VA_ARGS__)

#define MACRO_EXP_47(BASE, ADD_ITEM, ...) \
  MACRO_EXP_46(BASE, ADD_ITEM, ##__VA_ARGS__)\
  ADD_ITEM(47, ##__VA_ARGS__)

#define MACRO_EXP_48(BASE, ADD_ITEM, ...) \
  MACRO_EXP_47(BASE, ADD_ITEM, ##__VA_ARGS__)\
  ADD_ITEM(48, ##__VA_ARGS__)

#define MACRO_EXP_49(BASE, ADD_ITEM, ...) \
  MACRO_EXP_48(BASE, ADD_ITEM, ##__VA_ARGS__)\
  ADD_ITEM(49, ##__VA_ARGS__)

#define MACRO_EXP_50(BASE, ADD_ITEM, ...) \
  MACRO_EXP_49(BASE, ADD_ITEM, ##__VA_ARGS__)\
  ADD_ITEM(50, ##__VA_ARGS__)

#define MACRO_EXP_51(BASE, ADD_ITEM, ...) \
  MACRO_EXP_50(BASE, ADD_ITEM, ##__VA_ARGS__)\
  ADD_ITEM(51, ##__VA_ARGS__)

#define MACRO_EXP_52(BASE, ADD_ITEM, ...) \
  MACRO_EXP_51(BASE, ADD_ITEM, ##__VA_ARGS__)\
  ADD_ITEM(52, ##__VA_ARGS__)

/* MACRO_EXPANSION_X does the same as MACRO_EXP_X.
 * this macro is useful when 2D unrolling is needed.
 * Example:
 *  to unroll LOOP_ITEM(x, y, parms) to x = 1-5
 *  and y = 1-3, just write this:
 *    #define LOOP_X_UNROLL(y, params)\
 *      MACRO_EXP_5(LOOP_ITEM, y, params)
 *    MACRO_EXPANSION_3(LOOP_X_UNROLL, params)
 *    //you can't use MACRO_EXP_3 here because
 *    //recursion cannot occur in macro expansion
 */
#define MACRO_EXPANSION_0(BASE, ADD_ITEM, ...) \
  BASE(__VA_ARGS__)

#define MACRO_EXPANSION_1(BASE, ADD_ITEM, ...) \
  BASE(__VA_ARGS__)\
  ADD_ITEM(1, ##__VA_ARGS__)

#define MACRO_EXPANSION_2(BASE, ADD_ITEM, ...) \
  MACRO_EXPANSION_1(BASE, ADD_ITEM, ##__VA_ARGS__)\
  ADD_ITEM(2, ##__VA_ARGS__)

#define MACRO_EXPANSION_3(BASE, ADD_ITEM, ...) \
  MACRO_EXPANSION_2(BASE, ADD_ITEM, ##__VA_ARGS__)\
  ADD_ITEM(3, ##__VA_ARGS__)

#define MACRO_EXPANSION_4(BASE, ADD_ITEM, ...) \
  MACRO_EXPANSION_3(BASE, ADD_ITEM, ##__VA_ARGS__)\
  ADD_ITEM(4, ##__VA_ARGS__)

#define MACRO_EXPANSION_5(BASE, ADD_ITEM, ...) \
  MACRO_EXPANSION_4(BASE, ADD_ITEM, ##__VA_ARGS__)\
  ADD_ITEM(5, ##__VA_ARGS__)

#define MACRO_EXPANSION_6(BASE, ADD_ITEM, ...) \
  MACRO_EXPANSION_5(BASE, ADD_ITEM, ##__VA_ARGS__)\
  ADD_ITEM(6, ##__VA_ARGS__)

#define MACRO_EXPANSION_7(BASE, ADD_ITEM, ...) \
  MACRO_EXPANSION_6(BASE, ADD_ITEM, ##__VA_ARGS__)\
  ADD_ITEM(7, ##__VA_ARGS__)

#define MACRO_EXPANSION_8(BASE, ADD_ITEM, ...) \
  MACRO_EXPANSION_7(BASE, ADD_ITEM, ##__VA_ARGS__)\
  ADD_ITEM(8, ##__VA_ARGS__)

#define MACRO_EXPANSION_9(BASE, ADD_ITEM, ...) \
  MACRO_EXPANSION_8(BASE, ADD_ITEM, ##__VA_ARGS__)\
  ADD_ITEM(9, ##__VA_ARGS__)

#define MACRO_EXPANSION_10(BASE, ADD_ITEM, ...) \
  MACRO_EXPANSION_9(BASE, ADD_ITEM, ##__VA_ARGS__)\
  ADD_ITEM(10, ##__VA_ARGS__)

#define MACRO_EXPANSION_11(BASE, ADD_ITEM, ...) \
  MACRO_EXPANSION_10(BASE, ADD_ITEM, ##__VA_ARGS__)\
  ADD_ITEM(11, ##__VA_ARGS__)

#define MACRO_EXPANSION_12(BASE, ADD_ITEM, ...) \
  MACRO_EXPANSION_11(BASE, ADD_ITEM, ##__VA_ARGS__)\
  ADD_ITEM(12, ##__VA_ARGS__)

#define MACRO_EXPANSION_13(BASE, ADD_ITEM, ...) \
  MACRO_EXPANSION_12(BASE, ADD_ITEM, ##__VA_ARGS__)\
  ADD_ITEM(13, ##__VA_ARGS__)

#define MACRO_EXPANSION_14(BASE, ADD_ITEM, ...) \
  MACRO_EXPANSION_13(BASE, ADD_ITEM, ##__VA_ARGS__)\
  ADD_ITEM(14, ##__VA_ARGS__)

#define MACRO_EXPANSION_15(BASE, ADD_ITEM, ...) \
  MACRO_EXPANSION_14(BASE, ADD_ITEM, ##__VA_ARGS__)\
  ADD_ITEM(15, ##__VA_ARGS__)

#define MACRO_EXPANSION_16(BASE, ADD_ITEM, ...) \
  MACRO_EXPANSION_15(BASE, ADD_ITEM, ##__VA_ARGS__)\
  ADD_ITEM(16, ##__VA_ARGS__)

#define MACRO_EXPANSION_17(BASE, ADD_ITEM, ...) \
  MACRO_EXPANSION_16(BASE, ADD_ITEM, ##__VA_ARGS__)\
  ADD_ITEM(17, ##__VA_ARGS__)

#define MACRO_EXPANSION_18(BASE, ADD_ITEM, ...) \
  MACRO_EXPANSION_17(BASE, ADD_ITEM, ##__VA_ARGS__)\
  ADD_ITEM(18, ##__VA_ARGS__)

#define MACRO_EXPANSION_19(BASE, ADD_ITEM, ...) \
  MACRO_EXPANSION_18(BASE, ADD_ITEM, ##__VA_ARGS__)\
  ADD_ITEM(19, ##__VA_ARGS__)

#define MACRO_EXPANSION_20(BASE, ADD_ITEM, ...) \
  MACRO_EXPANSION_19(BASE, ADD_ITEM, ##__VA_ARGS__)\
  ADD_ITEM(20, ##__VA_ARGS__)

#define MACRO_EXPANSION_21(BASE, ADD_ITEM, ...) \
  MACRO_EXPANSION_20(BASE, ADD_ITEM, ##__VA_ARGS__)\
  ADD_ITEM(21, ##__VA_ARGS__)

#define MACRO_EXPANSION_22(BASE, ADD_ITEM, ...) \
  MACRO_EXPANSION_21(BASE, ADD_ITEM, ##__VA_ARGS__)\
  ADD_ITEM(22, ##__VA_ARGS__)

#define MACRO_EXPANSION_23(BASE, ADD_ITEM, ...) \
  MACRO_EXPANSION_22(BASE, ADD_ITEM, ##__VA_ARGS__)\
  ADD_ITEM(23, ##__VA_ARGS__)

#define MACRO_EXPANSION_24(BASE, ADD_ITEM, ...) \
  MACRO_EXPANSION_23(BASE, ADD_ITEM, ##__VA_ARGS__)\
  ADD_ITEM(24, ##__VA_ARGS__)

#define MACRO_EXPANSION_Q_1(BASE, ADD_ITEM_1, ADD_ITEM_4, ...) \
  BASE(__VA_ARGS__)\
  ADD_ITEM_1(1, ##__VA_ARGS__)

#define MACRO_EXPANSION_Q_2(BASE, ADD_ITEM_1, ADD_ITEM_4, ...) \
  MACRO_EXPANSION_Q_1(BASE, ADD_ITEM_1, ADD_ITEM_4, ##__VA_ARGS__)\
  ADD_ITEM_1(2, ##__VA_ARGS__)

#define MACRO_EXPANSION_Q_3(BASE, ADD_ITEM_1, ADD_ITEM_4, ...) \
  MACRO_EXPANSION_Q_2(BASE, ADD_ITEM_1, ADD_ITEM_4, ##__VA_ARGS__)\
  ADD_ITEM_1(3, ##__VA_ARGS__)

#define MACRO_EXPANSION_Q_4(BASE, ADD_ITEM_1, ADD_ITEM_4, ...) \
  BASE(__VA_ARGS__)\
  ADD_ITEM_4(1, 2, 3, 4, ##__VA_ARGS__)

#define MACRO_EXPANSION_Q_5(BASE, ADD_ITEM_1, ADD_ITEM_4, ...) \
  MACRO_EXPANSION_Q_4(BASE, ADD_ITEM_1, ADD_ITEM_4, ##__VA_ARGS__)\
  ADD_ITEM_1(5, ##__VA_ARGS__)

#define MACRO_EXPANSION_Q_6(BASE, ADD_ITEM_1, ADD_ITEM_4, ...) \
  MACRO_EXPANSION_Q_5(BASE, ADD_ITEM_1, ADD_ITEM_4, ##__VA_ARGS__)\
  ADD_ITEM_1(6, ##__VA_ARGS__)

#define MACRO_EXPANSION_Q_7(BASE, ADD_ITEM_1, ADD_ITEM_4, ...) \
  MACRO_EXPANSION_Q_6(BASE, ADD_ITEM_1, ADD_ITEM_4, ##__VA_ARGS__)\
  ADD_ITEM_1(7, ##__VA_ARGS__)

#define MACRO_EXPANSION_Q_8(BASE, ADD_ITEM_1, ADD_ITEM_4, ...) \
  MACRO_EXPANSION_Q_4(BASE, ADD_ITEM_1, ADD_ITEM_4, ##__VA_ARGS__)\
  ADD_ITEM_4(5, 6, 7, 8, ##__VA_ARGS__)

#define MACRO_EXPANSION_Q_9(BASE, ADD_ITEM_1, ADD_ITEM_4, ...) \
  MACRO_EXPANSION_Q_8(BASE, ADD_ITEM_1, ADD_ITEM_4, ##__VA_ARGS__)\
  ADD_ITEM_1(9, ##__VA_ARGS__)

#define MACRO_EXPANSION_Q_10(BASE, ADD_ITEM_1, ADD_ITEM_4, ...) \
  MACRO_EXPANSION_Q_9(BASE, ADD_ITEM_1, ADD_ITEM_4, ##__VA_ARGS__)\
  ADD_ITEM_1(10, ##__VA_ARGS__)

#define MACRO_EXPANSION_Q_11(BASE, ADD_ITEM_1, ADD_ITEM_4, ...) \
  MACRO_EXPANSION_Q_10(BASE, ADD_ITEM_1, ADD_ITEM_4, ##__VA_ARGS__)\
  ADD_ITEM_1(11, ##__VA_ARGS__)

#define MACRO_EXPANSION_Q_12(BASE, ADD_ITEM_1, ADD_ITEM_4, ...) \
  MACRO_EXPANSION_Q_8(BASE, ADD_ITEM_1, ADD_ITEM_4, ##__VA_ARGS__)\
  ADD_ITEM_4(9, 10, 11, 12, ##__VA_ARGS__)

#define MACRO_EXPANSION_E_1(LOOP_ITEM, ...) \
  LOOP_ITEM(1, ##__VA_ARGS__)

#define MACRO_EXPANSION_E_2(LOOP_ITEM, ...) \
  LOOP_ITEM(2, ##__VA_ARGS__) MACRO_EXPANSION_E_1(LOOP_ITEM, ##__VA_ARGS__)

#define MACRO_EXPANSION_E_4(LOOP_ITEM, ...) \
  LOOP_ITEM(4, ##__VA_ARGS__) MACRO_EXPANSION_E_2(LOOP_ITEM, ##__VA_ARGS__)

#define MACRO_EXPANSION_E_6(LOOP_ITEM, ...) \
  LOOP_ITEM(6, ##__VA_ARGS__) MACRO_EXPANSION_E_4(LOOP_ITEM, ##__VA_ARGS__)

#define MACRO_EXPANSION_E_8(LOOP_ITEM, ...) \
  LOOP_ITEM(8, ##__VA_ARGS__) MACRO_EXPANSION_E_4(LOOP_ITEM, ##__VA_ARGS__)

#define MACRO_EXPANSION_E_12(LOOP_ITEM, ...) \
  LOOP_ITEM(12, ##__VA_ARGS__) MACRO_EXPANSION_E_8(LOOP_ITEM, ##__VA_ARGS__)

#define MACRO_EXPANSION_E_16(LOOP_ITEM, ...) \
  LOOP_ITEM(16, ##__VA_ARGS__) MACRO_EXPANSION_E_8(LOOP_ITEM, ##__VA_ARGS__)

#define MACRO_EXPANSION_E_24(LOOP_ITEM, ...) \
  LOOP_ITEM(24, ##__VA_ARGS__) MACRO_EXPANSION_E_12(LOOP_ITEM, ##__VA_ARGS__)

#define MACRO_EXP_E_1(LOOP_ITEM, ...) \
  LOOP_ITEM(1, ##__VA_ARGS__)

#define MACRO_EXP_E_2(LOOP_ITEM, ...) \
  LOOP_ITEM(2, ##__VA_ARGS__) MACRO_EXP_E_1(LOOP_ITEM, ##__VA_ARGS__)

#define MACRO_EXP_E_4(LOOP_ITEM, ...) \
  LOOP_ITEM(4, ##__VA_ARGS__) MACRO_EXP_E_2(LOOP_ITEM, ##__VA_ARGS__)

#define MACRO_EXP_E_6(LOOP_ITEM, ...) \
  LOOP_ITEM(6, ##__VA_ARGS__) MACRO_EXP_E_4(LOOP_ITEM, ##__VA_ARGS__)

#define MACRO_EXP_E_8(LOOP_ITEM, ...) \
  LOOP_ITEM(8, ##__VA_ARGS__) MACRO_EXP_E_4(LOOP_ITEM, ##__VA_ARGS__)

#define MACRO_EXP_E_12(LOOP_ITEM, ...) \
  LOOP_ITEM(12, ##__VA_ARGS__) MACRO_EXP_E_8(LOOP_ITEM, ##__VA_ARGS__)

#define MACRO_EXP_E_16(LOOP_ITEM, ...) \
  LOOP_ITEM(16, ##__VA_ARGS__) MACRO_EXP_E_8(LOOP_ITEM, ##__VA_ARGS__)

#define MACRO_EXP_E_24(LOOP_ITEM, ...) \
  LOOP_ITEM(24, ##__VA_ARGS__) MACRO_EXP_E_12(LOOP_ITEM, ##__VA_ARGS__)

#define MACRO_EXP_M_0(LOOP_ITEM, ...) \
  LOOP_ITEM(1, ##__VA_ARGS__)

#define MACRO_EXP_M_1(LOOP_ITEM, ...) \
  LOOP_ITEM(1, ##__VA_ARGS__)

#define MACRO_EXP_M_2(LOOP_ITEM, ...) \
  LOOP_ITEM(2, ##__VA_ARGS__) MACRO_EXP_M_0(LOOP_ITEM, ##__VA_ARGS__)

#define MACRO_EXP_M_3(LOOP_ITEM, ...) \
  LOOP_ITEM(2, ##__VA_ARGS__) MACRO_EXP_M_1(LOOP_ITEM, ##__VA_ARGS__)

#define MACRO_EXP_M_4(LOOP_ITEM, ...) \
  LOOP_ITEM(4, ##__VA_ARGS__) MACRO_EXP_M_0(LOOP_ITEM, ##__VA_ARGS__)

#define MACRO_EXP_M_5(LOOP_ITEM, ...) \
  LOOP_ITEM(4, ##__VA_ARGS__) MACRO_EXP_M_1(LOOP_ITEM, ##__VA_ARGS__)

#define MACRO_EXP_M_6(LOOP_ITEM, ...) \
  LOOP_ITEM(4, ##__VA_ARGS__) MACRO_EXP_M_2(LOOP_ITEM, ##__VA_ARGS__)

#define MACRO_EXP_M_7(LOOP_ITEM, ...) \
  LOOP_ITEM(4, ##__VA_ARGS__) MACRO_EXP_M_3(LOOP_ITEM, ##__VA_ARGS__)

#define MACRO_EXP_M_8(LOOP_ITEM, ...) \
  LOOP_ITEM(8, ##__VA_ARGS__) MACRO_EXP_M_0(LOOP_ITEM, ##__VA_ARGS__)

#define MACRO_EXP_M_9(LOOP_ITEM, ...) \
  LOOP_ITEM(8, ##__VA_ARGS__) MACRO_EXP_M_1(LOOP_ITEM, ##__VA_ARGS__)

#define MACRO_EXP_M_10(LOOP_ITEM, ...) \
  LOOP_ITEM(8, ##__VA_ARGS__) MACRO_EXP_M_2(LOOP_ITEM, ##__VA_ARGS__)

#define MACRO_EXP_M_11(LOOP_ITEM, ...) \
  LOOP_ITEM(8, ##__VA_ARGS__) MACRO_EXP_M_3(LOOP_ITEM, ##__VA_ARGS__)

#define MACRO_EXP_M_12(LOOP_ITEM, ...) \
  LOOP_ITEM(8, ##__VA_ARGS__) MACRO_EXP_M_4(LOOP_ITEM, ##__VA_ARGS__)

#define MACRO_EXP_M_13(LOOP_ITEM, ...) \
  LOOP_ITEM(8, ##__VA_ARGS__) MACRO_EXP_M_5(LOOP_ITEM, ##__VA_ARGS__)

#define MACRO_EXP_M_14(LOOP_ITEM, ...) \
  LOOP_ITEM(8, ##__VA_ARGS__) MACRO_EXP_M_6(LOOP_ITEM, ##__VA_ARGS__)

#define MACRO_EXP_M_15(LOOP_ITEM, ...) \
  LOOP_ITEM(8, ##__VA_ARGS__) MACRO_EXP_M_7(LOOP_ITEM, ##__VA_ARGS__)

#define MACRO_EXP_M_16(LOOP_ITEM, ...) \
  LOOP_ITEM(16, ##__VA_ARGS__) MACRO_EXP_M_0(LOOP_ITEM, ##__VA_ARGS__)

#define MACRO_EXP_M_17(LOOP_ITEM, ...) \
  LOOP_ITEM(16, ##__VA_ARGS__) MACRO_EXP_M_1(LOOP_ITEM, ##__VA_ARGS__)

#define MACRO_EXP_M_18(LOOP_ITEM, ...) \
  LOOP_ITEM(16, ##__VA_ARGS__) MACRO_EXP_M_2(LOOP_ITEM, ##__VA_ARGS__)

#define MACRO_EXP_M_19(LOOP_ITEM, ...) \
  LOOP_ITEM(16, ##__VA_ARGS__) MACRO_EXP_M_3(LOOP_ITEM, ##__VA_ARGS__)

#define MACRO_EXP_M_20(LOOP_ITEM, ...) \
  LOOP_ITEM(16, ##__VA_ARGS__) MACRO_EXP_M_4(LOOP_ITEM, ##__VA_ARGS__)

#define MACRO_EXP_M_21(LOOP_ITEM, ...) \
  LOOP_ITEM(16, ##__VA_ARGS__) MACRO_EXP_M_5(LOOP_ITEM, ##__VA_ARGS__)

#define MACRO_EXP_M_22(LOOP_ITEM, ...) \
  LOOP_ITEM(16, ##__VA_ARGS__) MACRO_EXP_M_6(LOOP_ITEM, ##__VA_ARGS__)

#define MACRO_EXP_M_23(LOOP_ITEM, ...) \
  LOOP_ITEM(16, ##__VA_ARGS__) MACRO_EXP_M_7(LOOP_ITEM, ##__VA_ARGS__)

#define MACRO_EXP_M_24(LOOP_ITEM, ...) \
  LOOP_ITEM(16, ##__VA_ARGS__) MACRO_EXP_M_8(LOOP_ITEM, ##__VA_ARGS__)

#define MACRO_EXP_M_25(LOOP_ITEM, ...) \
  LOOP_ITEM(16, ##__VA_ARGS__) MACRO_EXP_M_9(LOOP_ITEM, ##__VA_ARGS__)

#define MACRO_EXP_M_26(LOOP_ITEM, ...) \
  LOOP_ITEM(16, ##__VA_ARGS__) MACRO_EXP_M_10(LOOP_ITEM, ##__VA_ARGS__)

#define MACRO_EXP_M_27(LOOP_ITEM, ...) \
  LOOP_ITEM(16, ##__VA_ARGS__) MACRO_EXP_M_11(LOOP_ITEM, ##__VA_ARGS__)

#define MACRO_EXP_M_28(LOOP_ITEM, ...) \
  LOOP_ITEM(16, ##__VA_ARGS__) MACRO_EXP_M_12(LOOP_ITEM, ##__VA_ARGS__)

#define MACRO_EXP_M_29(LOOP_ITEM, ...) \
  LOOP_ITEM(16, ##__VA_ARGS__) MACRO_EXP_M_13(LOOP_ITEM, ##__VA_ARGS__)

#define MACRO_EXP_M_30(LOOP_ITEM, ...) \
  LOOP_ITEM(16, ##__VA_ARGS__) MACRO_EXP_M_14(LOOP_ITEM, ##__VA_ARGS__)

#define MACRO_EXP_M_31(LOOP_ITEM, ...) \
  LOOP_ITEM(16, ##__VA_ARGS__) MACRO_EXP_M_15(LOOP_ITEM, ##__VA_ARGS__)

#define MACRO_EXPANSION_M_0(LOOP_ITEM, ...) \
  LOOP_ITEM(1, ##__VA_ARGS__)

#define MACRO_EXPANSION_M_1(LOOP_ITEM, ...) \
  LOOP_ITEM(1, ##__VA_ARGS__)

#define MACRO_EXPANSION_M_2(LOOP_ITEM, ...) \
  LOOP_ITEM(2, ##__VA_ARGS__) MACRO_EXPANSION_M_0(LOOP_ITEM, ##__VA_ARGS__)

#define MACRO_EXPANSION_M_3(LOOP_ITEM, ...) \
  LOOP_ITEM(2, ##__VA_ARGS__) MACRO_EXPANSION_M_1(LOOP_ITEM, ##__VA_ARGS__)

#define MACRO_EXPANSION_M_4(LOOP_ITEM, ...) \
  LOOP_ITEM(4, ##__VA_ARGS__) MACRO_EXPANSION_M_0(LOOP_ITEM, ##__VA_ARGS__)

#define MACRO_EXPANSION_M_5(LOOP_ITEM, ...) \
  LOOP_ITEM(4, ##__VA_ARGS__) MACRO_EXPANSION_M_1(LOOP_ITEM, ##__VA_ARGS__)

#define MACRO_EXPANSION_M_6(LOOP_ITEM, ...) \
  LOOP_ITEM(4, ##__VA_ARGS__) MACRO_EXPANSION_M_2(LOOP_ITEM, ##__VA_ARGS__)

#define MACRO_EXPANSION_M_7(LOOP_ITEM, ...) \
  LOOP_ITEM(4, ##__VA_ARGS__) MACRO_EXPANSION_M_3(LOOP_ITEM, ##__VA_ARGS__)

#define MACRO_EXPANSION_M_8(LOOP_ITEM, ...) \
  LOOP_ITEM(8, ##__VA_ARGS__) MACRO_EXPANSION_M_0(LOOP_ITEM, ##__VA_ARGS__)

#define MACRO_EXPANSION_M_9(LOOP_ITEM, ...) \
  LOOP_ITEM(8, ##__VA_ARGS__) MACRO_EXPANSION_M_1(LOOP_ITEM, ##__VA_ARGS__)

#define MACRO_EXPANSION_M_10(LOOP_ITEM, ...) \
  LOOP_ITEM(8, ##__VA_ARGS__) MACRO_EXPANSION_M_2(LOOP_ITEM, ##__VA_ARGS__)

#define MACRO_EXPANSION_M_11(LOOP_ITEM, ...) \
  LOOP_ITEM(8, ##__VA_ARGS__) MACRO_EXPANSION_M_3(LOOP_ITEM, ##__VA_ARGS__)

#define MACRO_EXPANSION_M_12(LOOP_ITEM, ...) \
  LOOP_ITEM(8, ##__VA_ARGS__) MACRO_EXPANSION_M_4(LOOP_ITEM, ##__VA_ARGS__)

#define MACRO_EXPANSION_M_13(LOOP_ITEM, ...) \
  LOOP_ITEM(8, ##__VA_ARGS__) MACRO_EXPANSION_M_5(LOOP_ITEM, ##__VA_ARGS__)

#define MACRO_EXPANSION_M_14(LOOP_ITEM, ...) \
  LOOP_ITEM(8, ##__VA_ARGS__) MACRO_EXPANSION_M_6(LOOP_ITEM, ##__VA_ARGS__)

#define MACRO_EXPANSION_M_15(LOOP_ITEM, ...) \
  LOOP_ITEM(8, ##__VA_ARGS__) MACRO_EXPANSION_M_7(LOOP_ITEM, ##__VA_ARGS__)

#define MACRO_EXPANSION_M_16(LOOP_ITEM, ...) \
  LOOP_ITEM(16, ##__VA_ARGS__) MACRO_EXPANSION_M_0(LOOP_ITEM, ##__VA_ARGS__)

#define MACRO_EXPANSION_M_17(LOOP_ITEM, ...) \
  LOOP_ITEM(16, ##__VA_ARGS__) MACRO_EXPANSION_M_1(LOOP_ITEM, ##__VA_ARGS__)

#define MACRO_EXPANSION_M_18(LOOP_ITEM, ...) \
  LOOP_ITEM(16, ##__VA_ARGS__) MACRO_EXPANSION_M_2(LOOP_ITEM, ##__VA_ARGS__)

#define MACRO_EXPANSION_M_19(LOOP_ITEM, ...) \
  LOOP_ITEM(16, ##__VA_ARGS__) MACRO_EXPANSION_M_3(LOOP_ITEM, ##__VA_ARGS__)

#define MACRO_EXPANSION_M_20(LOOP_ITEM, ...) \
  LOOP_ITEM(16, ##__VA_ARGS__) MACRO_EXPANSION_M_4(LOOP_ITEM, ##__VA_ARGS__)

#define MACRO_EXPANSION_M_21(LOOP_ITEM, ...) \
  LOOP_ITEM(16, ##__VA_ARGS__) MACRO_EXPANSION_M_5(LOOP_ITEM, ##__VA_ARGS__)

#define MACRO_EXPANSION_M_22(LOOP_ITEM, ...) \
  LOOP_ITEM(16, ##__VA_ARGS__) MACRO_EXPANSION_M_6(LOOP_ITEM, ##__VA_ARGS__)

#define MACRO_EXPANSION_M_23(LOOP_ITEM, ...) \
  LOOP_ITEM(16, ##__VA_ARGS__) MACRO_EXPANSION_M_7(LOOP_ITEM, ##__VA_ARGS__)

#define MACRO_EXPANSION_M_24(LOOP_ITEM, ...) \
  LOOP_ITEM(16, ##__VA_ARGS__) MACRO_EXPANSION_M_8(LOOP_ITEM, ##__VA_ARGS__)

#define MACRO_EXPANSION_M_25(LOOP_ITEM, ...) \
  LOOP_ITEM(16, ##__VA_ARGS__) MACRO_EXPANSION_M_9(LOOP_ITEM, ##__VA_ARGS__)

#define MACRO_EXPANSION_M_26(LOOP_ITEM, ...) \
  LOOP_ITEM(16, ##__VA_ARGS__) MACRO_EXPANSION_M_10(LOOP_ITEM, ##__VA_ARGS__)

#define MACRO_EXPANSION_M_27(LOOP_ITEM, ...) \
  LOOP_ITEM(16, ##__VA_ARGS__) MACRO_EXPANSION_M_11(LOOP_ITEM, ##__VA_ARGS__)

#define MACRO_EXPANSION_M_28(LOOP_ITEM, ...) \
  LOOP_ITEM(16, ##__VA_ARGS__) MACRO_EXPANSION_M_12(LOOP_ITEM, ##__VA_ARGS__)

#define MACRO_EXPANSION_M_29(LOOP_ITEM, ...) \
  LOOP_ITEM(16, ##__VA_ARGS__) MACRO_EXPANSION_M_13(LOOP_ITEM, ##__VA_ARGS__)

#define MACRO_EXPANSION_M_30(LOOP_ITEM, ...) \
  LOOP_ITEM(16, ##__VA_ARGS__) MACRO_EXPANSION_M_14(LOOP_ITEM, ##__VA_ARGS__)

#define MACRO_EXPANSION_M_31(LOOP_ITEM, ...) \
  LOOP_ITEM(16, ##__VA_ARGS__) MACRO_EXPANSION_M_15(LOOP_ITEM, ##__VA_ARGS__)

#define MACRO_EXPANSION_MX_0(LOOP_ITEM, CROSS_ITEM, ...) \
  LOOP_ITEM(1, ##__VA_ARGS__)

#define MACRO_EXPANSION_MX_1(LOOP_ITEM, CROSS_ITEM, ...) \
  LOOP_ITEM(1, ##__VA_ARGS__)

#define MACRO_EXPANSION_MX_2(LOOP_ITEM, CROSS_ITEM, ...) \
  LOOP_ITEM(2, ##__VA_ARGS__) CROSS_ITEM(2, 1, ##__VA_ARGS__)\
  MACRO_EXPANSION_MX_0(LOOP_ITEM, CROSS_ITEM, ##__VA_ARGS__)

#define MACRO_EXPANSION_MX_3(LOOP_ITEM, CROSS_ITEM, ...) \
  LOOP_ITEM(2, ##__VA_ARGS__) CROSS_ITEM(2, 1, ##__VA_ARGS__)\
  MACRO_EXPANSION_MX_1(LOOP_ITEM, CROSS_ITEM, ##__VA_ARGS__)

#define MACRO_EXPANSION_MX_4(LOOP_ITEM, CROSS_ITEM, ...) \
  LOOP_ITEM(4, ##__VA_ARGS__) CROSS_ITEM(4, 1, ##__VA_ARGS__)\
  MACRO_EXPANSION_MX_0(LOOP_ITEM, CROSS_ITEM, ##__VA_ARGS__)

#define MACRO_EXPANSION_MX_5(LOOP_ITEM, CROSS_ITEM, ...) \
  LOOP_ITEM(4, ##__VA_ARGS__) CROSS_ITEM(4, 1, ##__VA_ARGS__)\
  MACRO_EXPANSION_MX_1(LOOP_ITEM, CROSS_ITEM, ##__VA_ARGS__)

#define MACRO_EXPANSION_MX_6(LOOP_ITEM, CROSS_ITEM, ...) \
  LOOP_ITEM(4, ##__VA_ARGS__) CROSS_ITEM(4, 2, ##__VA_ARGS__)\
  MACRO_EXPANSION_MX_2(LOOP_ITEM, CROSS_ITEM, ##__VA_ARGS__)

#define MACRO_EXPANSION_MX_7(LOOP_ITEM, CROSS_ITEM, ...) \
  LOOP_ITEM(4, ##__VA_ARGS__) CROSS_ITEM(4, 2, ##__VA_ARGS__)\
  MACRO_EXPANSION_MX_3(LOOP_ITEM, CROSS_ITEM, ##__VA_ARGS__)

#define MACRO_EXPANSION_MX_8(LOOP_ITEM, CROSS_ITEM, ...) \
  LOOP_ITEM(8, ##__VA_ARGS__) CROSS_ITEM(8, 1, ##__VA_ARGS__)\
  MACRO_EXPANSION_MX_0(LOOP_ITEM, CROSS_ITEM, ##__VA_ARGS__)

#define MACRO_EXPANSION_MX_9(LOOP_ITEM, CROSS_ITEM, ...) \
  LOOP_ITEM(8, ##__VA_ARGS__) CROSS_ITEM(8, 1, ##__VA_ARGS__)\
  MACRO_EXPANSION_MX_1(LOOP_ITEM, CROSS_ITEM, ##__VA_ARGS__)

#define MACRO_EXPANSION_MX_10(LOOP_ITEM, CROSS_ITEM, ...) \
  LOOP_ITEM(8, ##__VA_ARGS__) CROSS_ITEM(8, 2, ##__VA_ARGS__)\
  MACRO_EXPANSION_MX_2(LOOP_ITEM, CROSS_ITEM, ##__VA_ARGS__)

#define MACRO_EXPANSION_MX_11(LOOP_ITEM, CROSS_ITEM, ...) \
  LOOP_ITEM(8, ##__VA_ARGS__) CROSS_ITEM(8, 2, ##__VA_ARGS__)\
  MACRO_EXPANSION_MX_3(LOOP_ITEM, CROSS_ITEM, ##__VA_ARGS__)

#define MACRO_EXPANSION_MX_12(LOOP_ITEM, CROSS_ITEM, ...) \
  LOOP_ITEM(8, ##__VA_ARGS__) CROSS_ITEM(8, 4, ##__VA_ARGS__)\
  MACRO_EXPANSION_MX_4(LOOP_ITEM, CROSS_ITEM, ##__VA_ARGS__)

#define MACRO_EXPANSION_MX_13(LOOP_ITEM, CROSS_ITEM, ...) \
  LOOP_ITEM(8, ##__VA_ARGS__) CROSS_ITEM(8, 4, ##__VA_ARGS__)\
  MACRO_EXPANSION_MX_5(LOOP_ITEM, CROSS_ITEM, ##__VA_ARGS__)

#define MACRO_EXPANSION_MX_14(LOOP_ITEM, CROSS_ITEM, ...) \
  LOOP_ITEM(8, ##__VA_ARGS__) CROSS_ITEM(8, 4, ##__VA_ARGS__)\
  MACRO_EXPANSION_MX_6(LOOP_ITEM, CROSS_ITEM, ##__VA_ARGS__)

#define MACRO_EXPANSION_MX_15(LOOP_ITEM, CROSS_ITEM, ...) \
  LOOP_ITEM(8, ##__VA_ARGS__) CROSS_ITEM(8, 4, ##__VA_ARGS__)\
  MACRO_EXPANSION_MX_7(LOOP_ITEM, CROSS_ITEM, ##__VA_ARGS__)

#define MACRO_EXPANSION_MX_16(LOOP_ITEM, CROSS_ITEM, ...) \
  LOOP_ITEM(16, ##__VA_ARGS__) CROSS_ITEM(16, 1, ##__VA_ARGS__)\
  MACRO_EXPANSION_MX_0(LOOP_ITEM, CROSS_ITEM, ##__VA_ARGS__)

#define MACRO_EXPANSION_MX_17(LOOP_ITEM, CROSS_ITEM, ...) \
  LOOP_ITEM(16, ##__VA_ARGS__) CROSS_ITEM(16, 1, ##__VA_ARGS__)\
  MACRO_EXPANSION_MX_1(LOOP_ITEM, CROSS_ITEM, ##__VA_ARGS__)

#define MACRO_EXPANSION_MX_18(LOOP_ITEM, CROSS_ITEM, ...) \
  LOOP_ITEM(16, ##__VA_ARGS__) CROSS_ITEM(16, 2, ##__VA_ARGS__)\
  MACRO_EXPANSION_MX_2(LOOP_ITEM, CROSS_ITEM, ##__VA_ARGS__)

#define MACRO_EXPANSION_MX_19(LOOP_ITEM, CROSS_ITEM, ...) \
  LOOP_ITEM(16, ##__VA_ARGS__) CROSS_ITEM(16, 2, ##__VA_ARGS__)\
  MACRO_EXPANSION_MX_3(LOOP_ITEM, CROSS_ITEM, ##__VA_ARGS__)

#define MACRO_EXPANSION_MX_20(LOOP_ITEM, CROSS_ITEM, ...) \
  LOOP_ITEM(16, ##__VA_ARGS__) CROSS_ITEM(16, 4, ##__VA_ARGS__)\
  MACRO_EXPANSION_MX_4(LOOP_ITEM, CROSS_ITEM, ##__VA_ARGS__)

#define MACRO_EXPANSION_MX_21(LOOP_ITEM, CROSS_ITEM, ...) \
  LOOP_ITEM(16, ##__VA_ARGS__) CROSS_ITEM(16, 4, ##__VA_ARGS__)\
  MACRO_EXPANSION_MX_5(LOOP_ITEM, CROSS_ITEM, ##__VA_ARGS__)

#define MACRO_EXPANSION_MX_22(LOOP_ITEM, CROSS_ITEM, ...) \
  LOOP_ITEM(16, ##__VA_ARGS__) CROSS_ITEM(16, 4, ##__VA_ARGS__)\
  MACRO_EXPANSION_MX_6(LOOP_ITEM, CROSS_ITEM, ##__VA_ARGS__)

#define MACRO_EXPANSION_MX_23(LOOP_ITEM, CROSS_ITEM, ...) \
  LOOP_ITEM(16, ##__VA_ARGS__) CROSS_ITEM(16, 4, ##__VA_ARGS__)\
  MACRO_EXPANSION_MX_7(LOOP_ITEM, CROSS_ITEM, ##__VA_ARGS__)

#define MACRO_EXPANSION_MX_24(LOOP_ITEM, CROSS_ITEM, ...) \
  LOOP_ITEM(16, ##__VA_ARGS__) CROSS_ITEM(16, 8, ##__VA_ARGS__)\
  MACRO_EXPANSION_MX_8(LOOP_ITEM, CROSS_ITEM, ##__VA_ARGS__)

#define MACRO_EXPANSION_MX_25(LOOP_ITEM, CROSS_ITEM, ...) \
  LOOP_ITEM(16, ##__VA_ARGS__) CROSS_ITEM(16, 8, ##__VA_ARGS__)\
  MACRO_EXPANSION_MX_9(LOOP_ITEM, CROSS_ITEM, ##__VA_ARGS__)

#define MACRO_EXPANSION_MX_26(LOOP_ITEM, CROSS_ITEM, ...) \
  LOOP_ITEM(16, ##__VA_ARGS__) CROSS_ITEM(16, 8, ##__VA_ARGS__)\
  MACRO_EXPANSION_MX_10(LOOP_ITEM, CROSS_ITEM, ##__VA_ARGS__)

#define MACRO_EXPANSION_MX_27(LOOP_ITEM, CROSS_ITEM, ...) \
  LOOP_ITEM(16, ##__VA_ARGS__) CROSS_ITEM(16, 8, ##__VA_ARGS__)\
  MACRO_EXPANSION_MX_11(LOOP_ITEM, CROSS_ITEM, ##__VA_ARGS__)

#define MACRO_EXPANSION_MX_28(LOOP_ITEM, CROSS_ITEM, ...) \
  LOOP_ITEM(16, ##__VA_ARGS__) CROSS_ITEM(16, 8, ##__VA_ARGS__)\
  MACRO_EXPANSION_MX_12(LOOP_ITEM, CROSS_ITEM, ##__VA_ARGS__)

#define MACRO_EXPANSION_MX_29(LOOP_ITEM, CROSS_ITEM, ...) \
  LOOP_ITEM(16, ##__VA_ARGS__) CROSS_ITEM(16, 8, ##__VA_ARGS__)\
  MACRO_EXPANSION_MX_13(LOOP_ITEM, CROSS_ITEM, ##__VA_ARGS__)

#define MACRO_EXPANSION_MX_30(LOOP_ITEM, CROSS_ITEM, ...) \
  LOOP_ITEM(16, ##__VA_ARGS__) CROSS_ITEM(16, 8, ##__VA_ARGS__)\
  MACRO_EXPANSION_MX_14(LOOP_ITEM, CROSS_ITEM, ##__VA_ARGS__)

#define MACRO_EXPANSION_MX_31(LOOP_ITEM, CROSS_ITEM, ...) \
  LOOP_ITEM(16, ##__VA_ARGS__) CROSS_ITEM(16, 8, ##__VA_ARGS__)\
  MACRO_EXPANSION_MX_15(LOOP_ITEM, CROSS_ITEM, ##__VA_ARGS__)

#define MACRO_EXPANSION_IMX_0(INIT_ITEM, LOOP_ITEM, CROSS_ITEM, ...) \
  INIT_ITEM(1, ##__VA_ARGS__)\
  MACRO_EXPANSION_MX_0(LOOP_ITEM, CROSS_ITEM, ##__VA_ARGS__)

#define MACRO_EXPANSION_IMX_1(INIT_ITEM, LOOP_ITEM, CROSS_ITEM, ...) \
  INIT_ITEM(1, ##__VA_ARGS__)\
  MACRO_EXPANSION_MX_1(LOOP_ITEM, CROSS_ITEM, ##__VA_ARGS__)

#define MACRO_EXPANSION_IMX_2(INIT_ITEM, LOOP_ITEM, CROSS_ITEM, ...) \
  INIT_ITEM(2, ##__VA_ARGS__)\
  MACRO_EXPANSION_MX_2(LOOP_ITEM, CROSS_ITEM, ##__VA_ARGS__)

#define MACRO_EXPANSION_IMX_3(INIT_ITEM, LOOP_ITEM, CROSS_ITEM, ...) \
  INIT_ITEM(2, ##__VA_ARGS__)\
  MACRO_EXPANSION_MX_3(LOOP_ITEM, CROSS_ITEM, ##__VA_ARGS__)

#define MACRO_EXPANSION_IMX_4(INIT_ITEM, LOOP_ITEM, CROSS_ITEM, ...) \
  INIT_ITEM(4, ##__VA_ARGS__)\
  MACRO_EXPANSION_MX_4(LOOP_ITEM, CROSS_ITEM, ##__VA_ARGS__)

#define MACRO_EXPANSION_IMX_5(INIT_ITEM, LOOP_ITEM, CROSS_ITEM, ...) \
  INIT_ITEM(4, ##__VA_ARGS__)\
  MACRO_EXPANSION_MX_5(LOOP_ITEM, CROSS_ITEM, ##__VA_ARGS__)

#define MACRO_EXPANSION_IMX_6(INIT_ITEM, LOOP_ITEM, CROSS_ITEM, ...) \
  INIT_ITEM(4, ##__VA_ARGS__)\
  MACRO_EXPANSION_MX_6(LOOP_ITEM, CROSS_ITEM, ##__VA_ARGS__)

#define MACRO_EXPANSION_IMX_7(INIT_ITEM, LOOP_ITEM, CROSS_ITEM, ...) \
  INIT_ITEM(4, ##__VA_ARGS__)\
  MACRO_EXPANSION_MX_7(LOOP_ITEM, CROSS_ITEM, ##__VA_ARGS__)

#define MACRO_EXPANSION_IMX_8(INIT_ITEM, LOOP_ITEM, CROSS_ITEM, ...) \
  INIT_ITEM(8, ##__VA_ARGS__)\
  MACRO_EXPANSION_MX_8(LOOP_ITEM, CROSS_ITEM, ##__VA_ARGS__)

#define MACRO_EXPANSION_IMX_9(INIT_ITEM, LOOP_ITEM, CROSS_ITEM, ...) \
  INIT_ITEM(8, ##__VA_ARGS__)\
  MACRO_EXPANSION_MX_9(LOOP_ITEM, CROSS_ITEM, ##__VA_ARGS__)

#define MACRO_EXPANSION_IMX_10(INIT_ITEM, LOOP_ITEM, CROSS_ITEM, ...) \
  INIT_ITEM(8, ##__VA_ARGS__)\
  MACRO_EXPANSION_MX_10(LOOP_ITEM, CROSS_ITEM, ##__VA_ARGS__)

#define MACRO_EXPANSION_IMX_11(INIT_ITEM, LOOP_ITEM, CROSS_ITEM, ...) \
  INIT_ITEM(8, ##__VA_ARGS__)\
  MACRO_EXPANSION_MX_11(LOOP_ITEM, CROSS_ITEM, ##__VA_ARGS__)

#define MACRO_EXPANSION_IMX_12(INIT_ITEM, LOOP_ITEM, CROSS_ITEM, ...) \
  INIT_ITEM(8, ##__VA_ARGS__)\
  MACRO_EXPANSION_MX_12(LOOP_ITEM, CROSS_ITEM, ##__VA_ARGS__)

#define MACRO_EXPANSION_IMX_13(INIT_ITEM, LOOP_ITEM, CROSS_ITEM, ...) \
  INIT_ITEM(8, ##__VA_ARGS__)\
  MACRO_EXPANSION_MX_13(LOOP_ITEM, CROSS_ITEM, ##__VA_ARGS__)

#define MACRO_EXPANSION_IMX_14(INIT_ITEM, LOOP_ITEM, CROSS_ITEM, ...) \
  INIT_ITEM(8, ##__VA_ARGS__)\
  MACRO_EXPANSION_MX_14(LOOP_ITEM, CROSS_ITEM, ##__VA_ARGS__)

#define MACRO_EXPANSION_IMX_15(INIT_ITEM, LOOP_ITEM, CROSS_ITEM, ...) \
  INIT_ITEM(8, ##__VA_ARGS__)\
  MACRO_EXPANSION_MX_15(LOOP_ITEM, CROSS_ITEM, ##__VA_ARGS__)

#define MACRO_EXPANSION_IMX_16(INIT_ITEM, LOOP_ITEM, CROSS_ITEM, ...) \
  INIT_ITEM(16, ##__VA_ARGS__)\
  MACRO_EXPANSION_MX_16(LOOP_ITEM, CROSS_ITEM, ##__VA_ARGS__)

#define MACRO_EXPANSION_IMX_17(INIT_ITEM, LOOP_ITEM, CROSS_ITEM, ...) \
  INIT_ITEM(16, ##__VA_ARGS__)\
  MACRO_EXPANSION_MX_17(LOOP_ITEM, CROSS_ITEM, ##__VA_ARGS__)

#define MACRO_EXPANSION_IMX_18(INIT_ITEM, LOOP_ITEM, CROSS_ITEM, ...) \
  INIT_ITEM(16, ##__VA_ARGS__)\
  MACRO_EXPANSION_MX_18(LOOP_ITEM, CROSS_ITEM, ##__VA_ARGS__)

#define MACRO_EXPANSION_IMX_19(INIT_ITEM, LOOP_ITEM, CROSS_ITEM, ...) \
  INIT_ITEM(16, ##__VA_ARGS__)\
  MACRO_EXPANSION_MX_19(LOOP_ITEM, CROSS_ITEM, ##__VA_ARGS__)

#define MACRO_EXPANSION_IMX_20(INIT_ITEM, LOOP_ITEM, CROSS_ITEM, ...) \
  INIT_ITEM(16, ##__VA_ARGS__)\
  MACRO_EXPANSION_MX_20(LOOP_ITEM, CROSS_ITEM, ##__VA_ARGS__)

#define MACRO_EXPANSION_IMX_21(INIT_ITEM, LOOP_ITEM, CROSS_ITEM, ...) \
  INIT_ITEM(16, ##__VA_ARGS__)\
  MACRO_EXPANSION_MX_21(LOOP_ITEM, CROSS_ITEM, ##__VA_ARGS__)

#define MACRO_EXPANSION_IMX_22(INIT_ITEM, LOOP_ITEM, CROSS_ITEM, ...) \
  INIT_ITEM(16, ##__VA_ARGS__)\
  MACRO_EXPANSION_MX_22(LOOP_ITEM, CROSS_ITEM, ##__VA_ARGS__)

#define MACRO_EXPANSION_IMX_23(INIT_ITEM, LOOP_ITEM, CROSS_ITEM, ...) \
  INIT_ITEM(16, ##__VA_ARGS__)\
  MACRO_EXPANSION_MX_23(LOOP_ITEM, CROSS_ITEM, ##__VA_ARGS__)

#define MACRO_EXPANSION_IMX_24(INIT_ITEM, LOOP_ITEM, CROSS_ITEM, ...) \
  INIT_ITEM(16, ##__VA_ARGS__)\
  MACRO_EXPANSION_MX_24(LOOP_ITEM, CROSS_ITEM, ##__VA_ARGS__)

#define MACRO_EXPANSION_IMX_25(INIT_ITEM, LOOP_ITEM, CROSS_ITEM, ...) \
  INIT_ITEM(16, ##__VA_ARGS__)\
  MACRO_EXPANSION_MX_25(LOOP_ITEM, CROSS_ITEM, ##__VA_ARGS__)

#define MACRO_EXPANSION_IMX_26(INIT_ITEM, LOOP_ITEM, CROSS_ITEM, ...) \
  INIT_ITEM(16, ##__VA_ARGS__)\
  MACRO_EXPANSION_MX_26(LOOP_ITEM, CROSS_ITEM, ##__VA_ARGS__)

#define MACRO_EXPANSION_IMX_27(INIT_ITEM, LOOP_ITEM, CROSS_ITEM, ...) \
  INIT_ITEM(16, ##__VA_ARGS__)\
  MACRO_EXPANSION_MX_27(LOOP_ITEM, CROSS_ITEM, ##__VA_ARGS__)

#define MACRO_EXPANSION_IMX_28(INIT_ITEM, LOOP_ITEM, CROSS_ITEM, ...) \
  INIT_ITEM(16, ##__VA_ARGS__)\
  MACRO_EXPANSION_MX_28(LOOP_ITEM, CROSS_ITEM, ##__VA_ARGS__)

#define MACRO_EXPANSION_IMX_29(INIT_ITEM, LOOP_ITEM, CROSS_ITEM, ...) \
  INIT_ITEM(16, ##__VA_ARGS__)\
  MACRO_EXPANSION_MX_29(LOOP_ITEM, CROSS_ITEM, ##__VA_ARGS__)

#define MACRO_EXPANSION_IMX_30(INIT_ITEM, LOOP_ITEM, CROSS_ITEM, ...) \
  INIT_ITEM(16, ##__VA_ARGS__)\
  MACRO_EXPANSION_MX_30(LOOP_ITEM, CROSS_ITEM, ##__VA_ARGS__)

#define MACRO_EXPANSION_IMX_31(INIT_ITEM, LOOP_ITEM, CROSS_ITEM, ...) \
  INIT_ITEM(16, ##__VA_ARGS__)\
  MACRO_EXPANSION_MX_31(LOOP_ITEM, CROSS_ITEM, ##__VA_ARGS__)

#define MACRO_EXP_M_FIRSTITEM_0 1
#define MACRO_EXP_M_FIRSTITEM_1 1
#define MACRO_EXP_M_FIRSTITEM_2 2
#define MACRO_EXP_M_FIRSTITEM_3 2
#define MACRO_EXP_M_FIRSTITEM_4 4
#define MACRO_EXP_M_FIRSTITEM_5 4
#define MACRO_EXP_M_FIRSTITEM_6 4
#define MACRO_EXP_M_FIRSTITEM_7 4
#define MACRO_EXP_M_FIRSTITEM_8 8
#define MACRO_EXP_M_FIRSTITEM_9 8
#define MACRO_EXP_M_FIRSTITEM_10 8
#define MACRO_EXP_M_FIRSTITEM_11 8
#define MACRO_EXP_M_FIRSTITEM_12 8
#define MACRO_EXP_M_FIRSTITEM_13 8
#define MACRO_EXP_M_FIRSTITEM_14 8
#define MACRO_EXP_M_FIRSTITEM_15 8
#define MACRO_EXP_M_FIRSTITEM_16 16
#define MACRO_EXP_M_FIRSTITEM_17 16
#define MACRO_EXP_M_FIRSTITEM_18 16
#define MACRO_EXP_M_FIRSTITEM_19 16
#define MACRO_EXP_M_FIRSTITEM_20 16
#define MACRO_EXP_M_FIRSTITEM_21 16
#define MACRO_EXP_M_FIRSTITEM_22 16
#define MACRO_EXP_M_FIRSTITEM_23 16
#define MACRO_EXP_M_FIRSTITEM_24 16
#define MACRO_EXP_M_FIRSTITEM_25 16
#define MACRO_EXP_M_FIRSTITEM_26 16
#define MACRO_EXP_M_FIRSTITEM_27 16
#define MACRO_EXP_M_FIRSTITEM_28 16
#define MACRO_EXP_M_FIRSTITEM_29 16
#define MACRO_EXP_M_FIRSTITEM_30 16
#define MACRO_EXP_M_FIRSTITEM_31 16

#endif

