#ifndef __PLATFORM_INCLUDE__H__
#define __PLATFORM_INCLUDE__H__

/*
 *      Copyright (C) 2005-2013 Team XBMC
 *      http://www.xbmc.org
 *
 *  This Program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2, or (at your option)
 *  any later version.
 *
 *  This Program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with XBMC; see the file COPYING.  If not, see
 *  <http://www.gnu.org/licenses/>.
 *
 */

#if !defined(_DEBUG) && _MSC_VER >= 1500 && !defined(_LIB)
#include "git_rev.h" //generated file
#endif
#include <errno.h> // for ENOENT and EINVAL
#include "PlatformDefs.h"

#endif
