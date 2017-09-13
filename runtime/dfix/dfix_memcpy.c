/*******************************************************************************
 * Copyright (c) 2001, 2014 IBM Corp. and others
 *
 * This program and the accompanying materials are made available under
 * the terms of the Eclipse Public License 2.0 which accompanies this
 * distribution and is available at https://www.eclipse.org/legal/epl-2.0/
 * or the Apache License, Version 2.0 which accompanies this distribution and
 * is available at https://www.apache.org/licenses/LICENSE-2.0.
 *
 * This Source Code may also be made available under the following
 * Secondary Licenses when the conditions for such availability set
 * forth in the Eclipse Public License, v. 2.0 are satisfied: GNU
 * General Public License, version 2 with the GNU Classpath
 * Exception [1] and GNU General Public License, version 2 with the
 * OpenJDK Assembly Exception [2].
 *
 * [1] https://www.gnu.org/software/classpath/license.html
 * [2] http://openjdk.java.net/legal/assembly-exception.html
 *
 * SPDX-License-Identifier: EPL-2.0 OR Apache-2.0
 *******************************************************************************/
#include <stdio.h>
#include "dfix.h"
#include "dfix_internal.h"

static void
dfix_memcpy_impl1(void* dest, const void* src, size_t size)
{
	printf("running in dfix_memcpy_impl1(dest=0x%p,src=0x%p,size=%d).\n", dest, src, size);
}

BOOLEAN
resolve_dfix_memcpy()
{
	dfix_memcpy_impl = dfix_memcpy_impl1;
	return TRUE;
}