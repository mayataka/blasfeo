/**************************************************************************************************
*                                                                                                 *
* This file is part of BLASFEO.                                                                   *
*                                                                                                 *
* BLASFEO -- BLAS For Embedded Optimization.                                                      *
* Copyright (C) 2016 by Gianluca Frison. All rights reserved.                                     *
*                                                                                                 *
* HPMPC is free software; you can redistribute it and/or                                          *
* modify it under the terms of the GNU Lesser General Public                                      *
* License as published by the Free Software Foundation; either                                    *
* version 2.1 of the License, or (at your option) any later version.                              *
*                                                                                                 *
* HPMPC is distributed in the hope that it will be useful,                                        *
* but WITHOUT ANY WARRANTY; without even the implied warranty of                                  *
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.                                            *
* See the GNU Lesser General Public License for more details.                                     *
*                                                                                                 *
* You should have received a copy of the GNU Lesser General Public                                *
* License along with HPMPC; if not, write to the Free Software                                    *
* Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA                  *
*                                                                                                 *
* Author: Gianluca Frison, giaf (at) dtu.dk                                                       *
*                          gianluca.frison (at) imtek.uni-freiburg.de                             *
*                                                                                                 *
**************************************************************************************************/



// d_aux_extern_depend_lib
void d_zeros(double **pA, int row, int col);
void d_zeros_align(double **pA, int row, int col);
void d_free(double *pA);
void d_free_align(double *pA);
void d_print_mat(int row, int col, double *A, int lda);
void d_print_mat_e(int row, int col, double *A, int lda);
void d_print_pmat(int row, int col, double *pA, int sda);
void d_print_pmat_e(int row, int col, double *pA, int sda);

// d_aux_lib
void d_cvt_mat2pmat(int row, int col, double *A, int lda, int offset, double *pA, int sda);
void d_cvt_tran_mat2pmat(int row, int col, double *A, int lda, int offset, double *pA, int sda);
void d_cvt_pmat2mat(int row, int col, int offset, double *pA, int sda, double *A, int lda);
void d_cvt_tran_pmat2mat(int row, int col, int offset, double *pA, int sda, double *A, int lda);
