/*
 * Copyright (C) 2019 Gunar Schorcht
 *
 * This file is subject to the terms and conditions of the GNU Lesser
 * General Public License v2.1. See the file LICENSE in the top level
 * directory for more details.
 */

/**
 * @ingroup     cpu_esp8266
 * @{
 *
 * @file
 * @brief       ESP8266 exception handling
 *
 * @author      Gunar Schorcht <gunar@schorcht.net>
 * @}
 */

#ifndef EXCEPTIONS_H
#define EXCEPTIONS_H

#ifdef __cplusplus
extern "C" {
#endif

/** Initialize exception handler */
extern void init_exceptions(void);

#ifdef __cplusplus
}
#endif

#endif /* EXCEPTIONS_H */
