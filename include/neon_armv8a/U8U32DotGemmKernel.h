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

void u8u32dotgemm_kernel_lm_m8n12(uint32_t M, uint32_t N, uint32_t kdiv4,
  uint32_t beta,
  const uint32_t * __restrict__ sa, const uint32_t * __restrict__ sb,
  uint32_t * __restrict__ C, uint32_t ldc);

void u8u32dotgemm_kernel_ln_m12n8(uint32_t M, uint32_t N, uint32_t Kdiv4,
  uint32_t beta,
  const uint32_t * __restrict__ sa, const uint32_t * __restrict__ sb,
  uint32_t * __restrict__ C, uint32_t ldc);

