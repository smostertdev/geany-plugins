/* Compare numeric strings.  This is an internal include file.

   Copyright (C) 1988, 1991, 1992, 1993, 1995, 1996, 1998, 1999, 2000,
   2003, 2004, 2005, 2006, 2009 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* numcompare.h is taken from coreutil
   Source code can be found here: https://www.gnu.org/software/coreutils/
   This is released under GNU General Public License V3 or later.
   This file has not been altered from the original */

#ifndef NUMCOMPARE_H
# define NUMCOMPARE_H 1

# define NEGATION_SIGN   '-'
# define NUMERIC_ZERO    '0'

/* ISDIGIT differs from isdigit, as follows:
   - Its arg may be any int or unsigned int; it need not be an unsigned char
     or EOF.
   - It's typically faster.
   POSIX says that only '0' through '9' are digits.  Prefer ISDIGIT to
   isdigit unless it's important to use the locale's definition
   of `digit' even when the host does not conform to POSIX.  */
# define ISDIGIT(c) ((unsigned int) (c) - '0' <= 9)

int
fraccompare (char const *, char const *, char);

int
numcompare (char const *, char const *);

#endif

