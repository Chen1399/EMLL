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


#include <stdint.h>

void u8u32dotgemm_arowmajor_bskinny_auint8_t_buint8_t_n1(const uint8_t *A, const uint8_t *B,
  uint32_t *C, uint32_t M, uint32_t K, uint8_t b_c_order, uint32_t beta_inp);

void u8u32dotgemm_arowmajor_bskinny_auint8_t_buint8_t_n2(const uint8_t *A, const uint8_t *B,
  uint32_t *C, uint32_t M, uint32_t K, uint8_t b_c_order, uint32_t beta_inp);

void u8u32dotgemm_arowmajor_bskinny_auint8_t_buint8_t_n3(const uint8_t *A, const uint8_t *B,
  uint32_t *C, uint32_t M, uint32_t K, uint8_t b_c_order, uint32_t beta_inp);

void u8u32dotgemm_arowmajor_bskinny_auint8_t_buint8_t_n4(const uint8_t *A, const uint8_t *B,
  uint32_t *C, uint32_t M, uint32_t K, uint8_t b_c_order, uint32_t beta_inp);

void u8u32dotgemm_arowmajor_bskinny_auint8_t_buint8_t_n5(const uint8_t *A, const uint8_t *B,
  uint32_t *C, uint32_t M, uint32_t K, uint8_t b_c_order, uint32_t beta_inp);

void u8u32dotgemm_arowmajor_bskinny_auint8_t_buint8_t_n6(const uint8_t *A, const uint8_t *B,
  uint32_t *C, uint32_t M, uint32_t K, uint8_t b_c_order, uint32_t beta_inp);

void u8u32dotgemm_arowmajor_bskinny_auint8_t_buint8_t_n7(const uint8_t *A, const uint8_t *B,
  uint32_t *C, uint32_t M, uint32_t K, uint8_t b_c_order, uint32_t beta_inp);

void u8u32dotgemm_arowmajor_bskinny_auint8_t_buint8_t_n8(const uint8_t *A, const uint8_t *B,
  uint32_t *C, uint32_t M, uint32_t K, uint8_t b_c_order, uint32_t beta_inp);

void u8u32dotgemm_arowmajor_bskinny_auint8_t_buint8_t_n9(const uint8_t *A, const uint8_t *B,
  uint32_t *C, uint32_t M, uint32_t K, uint8_t b_c_order, uint32_t beta_inp);

void u8u32dotgemm_arowmajor_bskinny_auint8_t_buint8_t_n10(const uint8_t *A, const uint8_t *B,
  uint32_t *C, uint32_t M, uint32_t K, uint8_t b_c_order, uint32_t beta_inp);

void u8u32dotgemm_arowmajor_bskinny_auint8_t_buint8_t_n11(const uint8_t *A, const uint8_t *B,
  uint32_t *C, uint32_t M, uint32_t K, uint8_t b_c_order, uint32_t beta_inp);

void u8u32dotgemm_arowmajor_bskinny_auint8_t_buint8_t_n12(const uint8_t *A, const uint8_t *B,
  uint32_t *C, uint32_t M, uint32_t K, uint8_t b_c_order, uint32_t beta_inp);

void u8u32dotgemm_arowmajor_bskinny_auint8_t_buint8_t_n1_omp(
  const uint8_t *A, const uint8_t *B,
  uint32_t *C, uint32_t M, uint32_t K, uint8_t b_c_order,
  uint32_t beta_inp, uint32_t num_threads);

void u8u32dotgemm_arowmajor_bskinny_auint8_t_buint8_t_n2_omp(
  const uint8_t *A, const uint8_t *B,
  uint32_t *C, uint32_t M, uint32_t K, uint8_t b_c_order,
  uint32_t beta_inp, uint32_t num_threads);

void u8u32dotgemm_arowmajor_bskinny_auint8_t_buint8_t_n3_omp(
  const uint8_t *A, const uint8_t *B,
  uint32_t *C, uint32_t M, uint32_t K, uint8_t b_c_order,
  uint32_t beta_inp, uint32_t num_threads);

void u8u32dotgemm_arowmajor_bskinny_auint8_t_buint8_t_n4_omp(
  const uint8_t *A, const uint8_t *B,
  uint32_t *C, uint32_t M, uint32_t K, uint8_t b_c_order,
  uint32_t beta_inp, uint32_t num_threads);

void u8u32dotgemm_arowmajor_bskinny_auint8_t_buint8_t_n5_omp(
  const uint8_t *A, const uint8_t *B,
  uint32_t *C, uint32_t M, uint32_t K, uint8_t b_c_order,
  uint32_t beta_inp, uint32_t num_threads);

void u8u32dotgemm_arowmajor_bskinny_auint8_t_buint8_t_n6_omp(
  const uint8_t *A, const uint8_t *B,
  uint32_t *C, uint32_t M, uint32_t K, uint8_t b_c_order,
  uint32_t beta_inp, uint32_t num_threads);

void u8u32dotgemm_arowmajor_bskinny_auint8_t_buint8_t_n7_omp(
  const uint8_t *A, const uint8_t *B,
  uint32_t *C, uint32_t M, uint32_t K, uint8_t b_c_order,
  uint32_t beta_inp, uint32_t num_threads);

void u8u32dotgemm_arowmajor_bskinny_auint8_t_buint8_t_n8_omp(
  const uint8_t *A, const uint8_t *B,
  uint32_t *C, uint32_t M, uint32_t K, uint8_t b_c_order,
  uint32_t beta_inp, uint32_t num_threads);

void u8u32dotgemm_arowmajor_bskinny_auint8_t_buint8_t_n9_omp(
  const uint8_t *A, const uint8_t *B,
  uint32_t *C, uint32_t M, uint32_t K, uint8_t b_c_order,
  uint32_t beta_inp, uint32_t num_threads);

void u8u32dotgemm_arowmajor_bskinny_auint8_t_buint8_t_n10_omp(
  const uint8_t *A, const uint8_t *B,
  uint32_t *C, uint32_t M, uint32_t K, uint8_t b_c_order,
  uint32_t beta_inp, uint32_t num_threads);

void u8u32dotgemm_arowmajor_bskinny_auint8_t_buint8_t_n11_omp(
  const uint8_t *A, const uint8_t *B,
  uint32_t *C, uint32_t M, uint32_t K, uint8_t b_c_order,
  uint32_t beta_inp, uint32_t num_threads);

void u8u32dotgemm_arowmajor_bskinny_auint8_t_buint8_t_n12_omp(
  const uint8_t *A, const uint8_t *B,
  uint32_t *C, uint32_t M, uint32_t K, uint8_t b_c_order,
  uint32_t beta_inp, uint32_t num_threads);

