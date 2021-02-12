/*
 * Copyright (c) 2018, Linaro Limited. and Contributors. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/*
 * @file	generic/sleep.h
 * @brief	Generic sleep primitives for libmetal.
 */

#ifndef __METAL_SLEEP__H__
#error "Include metal/sleep.h instead of metal/generic/sleep.h"
#endif

#ifndef __METAL_GENERIC_SLEEP__H__
#define __METAL_GENERIC_SLEEP__H__

#include <metal/utilities.h>
#include <time.h>

#ifdef __cplusplus
extern "C" {
#endif

#define WAIT_1S(timeout)                                                       \
  timeout = time(NULL) + 1;                                                    \
  while (timeout > time(NULL))                                                 \
    ;

static inline int __metal_sleep_usec(unsigned int usec)
{
	/* Fix me */
	/* Add usleep support for baremetal firmware */

	time_t timeout;
	WAIT_1S(timeout);

	return 0;
}

/** @} */

#ifdef __cplusplus
}
#endif

#endif /* __METAL_GENERIC_SLEEP__H__ */
