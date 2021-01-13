// SPDX-License-Identifier: GPL-2.0

/****************************************************************************
 * This file is part of the lastword library development files.             *
 *                                                                          *
 * The lastword library is free software: you can redistribute it and/or    *
 * modify it under the terms of the GNU General Public License as published *
 * by the Free Software Foundation, either version 3 of the License, or     *
 * (at your option) any later version.                                      *
 *                                                                          *
 * The lastword library is distributed in the hope that it will be useful,  *
 * but WITHOUT ANY WARRANTY; without even the implied warranty of           *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.                     *
 *                                                                          *
 * See the GNU General Public License for more details.                     *
 *                                                                          *
 * You should have received a copy of the GNU General Public License        *
 * along with the lastword library.                                         *
 * If not, see <https://www.gnu.org/licenses/>.                             *
 ****************************************************************************/

/*!
 * @file   lastword.h
 * @author Esaú García Sánchez-Torija <egasato.dev@gmail.com>
 * @date   12 Jan 2021
 * @brief  Specification of the msl_lastword* functions.
 */

#include <stddef.h> // size_t

/*!
 * @brief Finds the last word of a string.
 *
 * @param[in]  str  The string.
 * @param[in]  n    The length the string.
 * @param[out] word The last word.
 * @param[out] size The last word's length.
 * @return The exit status.
 */
int msl_lastword_str(char *str, size_t n, char **word, size_t *size);

/*!
 * @brief Finds the last word of an array of strings.
 *
 * @param[in]  argv The array of strings.
 * @param[in]  argc The length the array.
 * @param[out] word The last word.
 * @param[out] size The last word's length.
 * @return The exit status.
 */
int msl_lastword_arr(char **argv, size_t argc, char **word, size_t *size);
