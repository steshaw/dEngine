/*
 dEngine Source Code 
 Copyright (C) 2009 - Fabien Sanglard
 
 This program is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.
 
 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.
 
 You should have received a copy of the GNU General Public License
 along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

/*
 *  config.h
 *  dEngine
 *
 *  Created by fabien sanglard on 13/09/09.
 *
 */


#ifndef DE_CONFIG
#define DE_CONFIG
	

#ifdef _ARM_ARCH_7
	#define TANGENT_ENABLED 1
#else
	#ifdef TARGET_IPHONE_SIMULATOR
		#define TANGENT_ENABLED 1
	#else
		#define TANGENT_ENABLED 0
	#endif
#endif




#endif
