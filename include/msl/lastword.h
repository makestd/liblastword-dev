// SPDX-License-Identifier: MIT

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * Copyright (c) 2021 Esaú García Sánchez-Torija                             *
 *                                                                           *
 * Permission is hereby granted, free of charge, to any person obtaining     *
 * a copy of this software and associated documentation files (the           *
 * "Software"), to deal in the Software without restriction, including       *
 * without limitation the rights to use, copy, modify, merge, publish,       *
 * distribute, sublicense, and/or sell copies of the Software, and to        *
 * permit persons to whom the Software is furnished to do so, subject to     *
 * the following conditions:                                                 *
 *                                                                           *
 * The above copyright notice and this permission notice shall be included   *
 * in all copies or substantial portions of the Software.                    *
 *                                                                           *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,           *
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF        *
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.    *
 * IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY      *
 * CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,      *
 * TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE         *
 * SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.                    *                      *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#ifndef MSL_LASTWORD_H
#define MSL_LASTWORD_H

#include <stddef.h> /* size_t */

/**
 * @file
 * @brief This file contains the specification of the lastword library.
 */

/**
 * @brief Finds the last word in a string.
 *
 * @details Iterates in reverse order a string to find the start and
 *          end offsets of the last word.  If found, they are saved
 *          in the output parameters.
 *
 * @param[in]  len  The length of the string.
 * @param[in]  str  The string contents.
 * @param[out] size The size of the last word.
 * @param[out] word The last word.
 *
 * @return The error code of the function.
 *
 * @retval MSL_LASTWORD_ENULL  A null pointer was passed.
 * @retval MSL_LASTWORD_EEMPTY An empty pointer was passed.
 * @retval MSL_LASTWORD_EBLANK A blank array was passed.
 */
extern int msl_lastword_str(size_t len, char *str, size_t *size, char **word);

/**
 * @brief Finds the last word in a string.
 *
 * @details Delegates to msl_lastword_str() using the returned value
            of strlen() as the first parameter (len).
 *
 * @param[in]  str  The string contents.
 * @param[out] size The size of the last word.
 * @param[out] word The last word.
 *
 * @return The error code of the function.
 *
 * @retval MSL_LASTWORD_ENULL  A null pointer was passed.
 * @retval MSL_LASTWORD_EEMPTY An empty pointer was passed.
 * @retval MSL_LASTWORD_EBLANK A blank array was passed.
 */
#define msl_lastword_str(str, size, word) \
        msl_lastword_str(strlen(str), str, size, word)

/**
 * @brief Finds the last word from an array of strings.
 *
 * @details Iterates in reverse order an array of strings to find the
 *          start and end offsets of the last word.  If found, they
 *          are saved in the output parameters.
 *
 * @param[in]  arrc The number of strings to process.
 * @param[in]  arrv The array of strings to process.
 * @param[out] size The size of the last word.
 * @param[out] word The last word.
 *
 * @return The error code of the function.
 *
 * @retval MSL_LASTWORD_ENULL  A null pointer was passed.
 * @retval MSL_LASTWORD_EEMPTY An empty pointer was passed.
 * @retval MSL_LASTWORD_EBLANK A blank array was passed.
 */
extern int msl_lastword_arr(size_t arrc, char **arrv, size_t *size, char **word);

// Check for C11 support to export the generic definition
#if __STDC__ == 1 && __STDC_VERSION >= 201112L

/**
 * @brief Finds the last word.
 *
 * @details Delegates to msl_lastword_str() or msl_lastword_arr() based
 *          on the type of the second parameter; uses the C11 preprocessor
 *          macro `_Generic` to check the type at compile time.
 *
 * @param[in]  count The number of items to process.
 * @param[in]  text  The text to process.
 * @param[out] size  The size of the last word.
 * @param[out] word  The last word.
 *
 * @return The error code of the function.
 *
 * @retval MSL_LASTWORD_ENULL  A null pointer was passed.
 * @retval MSL_LASTWORD_EEMPTY An empty pointer was passed.
 * @retval MSL_LASTWORD_EBLANK A blank array was passed.
 */
#define msl_lastword(count, text, size, word) \
	_Generic(                             \
		text,                         \
		char*:  msl_lastword_str,     \
		char**: msl_lastword_arr      \
	)(count, text, size, word)

/**
 * @brief Finds the last word.
 *
 * @details Delegates to the msl_lastword() macro using the result of
 *          strlen() as the first parameter.
 *
 * @param[in]  text The text to process.
 * @param[out] size The size of the last word.
 * @param[out] word The last word.
 *
 * @return The error code of the function.
 *
 * @retval MSL_LASTWORD_ENULL  A null pointer was passed.
 * @retval MSL_LASTWORD_EEMPTY An empty pointer was passed.
 * @retval MSL_LASTWORD_EBLANK A blank array was passed.
 */
#define msl_lastword(text, size, word) \
        msl_lastword(strlen(text), text, size, word)

#endif

#endif //MSL_LASTWORD_H
