/* -*- Mode: C; tab-width: 8; indent-tabs-mode: t; c-basic-offset: 8 -*-
 *
 * Copyright (C) 2015 Richard Hughes <richard@hughsie.com>
 *
 * Licensed under the GNU Lesser General Public License Version 2.1
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301 USA
 */

#ifndef __FWUPD_ERROR_H
#define __FWUPD_ERROR_H

#include <glib.h>

#define FWUPD_ERROR			fwupd_error_quark()

/**
 * FwupdError:
 * @FWUPD_ERROR_INTERNAL:			Internal error
 * @FWUPD_ERROR_VERSION_NEWER:			Installed newer firmware version
 * @FWUPD_ERROR_VERSION_SAME:			Installed same firmware version
 * @FWUPD_ERROR_ALREADY_PENDING:		Already set be be installed offline
 * @FWUPD_ERROR_AUTH_FAILED:			Failed to get authentication
 * @FWUPD_ERROR_READ:				Failed to read from device
 * @FWUPD_ERROR_WRITE:				Failed to write to the device
 * @FWUPD_ERROR_INVALID_FILE:			Invalid file format
 * @FWUPD_ERROR_NOT_FOUND:			No matching device exists
 * @FWUPD_ERROR_NOTHING_TO_DO:			Nothing to do
 * @FWUPD_ERROR_NOT_SUPPORTED:			Action was not possible
 * @FWUPD_ERROR_SIGNATURE_INVALID:		Signature was invalid
 *
 * The error code.
 **/
typedef enum {
	FWUPD_ERROR_INTERNAL,			/* Since: 0.1.1 */
	FWUPD_ERROR_VERSION_NEWER,		/* Since: 0.1.1 */
	FWUPD_ERROR_VERSION_SAME,		/* Since: 0.1.1 */
	FWUPD_ERROR_ALREADY_PENDING,		/* Since: 0.1.1 */
	FWUPD_ERROR_AUTH_FAILED,		/* Since: 0.1.1 */
	FWUPD_ERROR_READ,			/* Since: 0.1.1 */
	FWUPD_ERROR_WRITE,			/* Since: 0.1.1 */
	FWUPD_ERROR_INVALID_FILE,		/* Since: 0.1.1 */
	FWUPD_ERROR_NOT_FOUND,			/* Since: 0.1.1 */
	FWUPD_ERROR_NOTHING_TO_DO,		/* Since: 0.1.1 */
	FWUPD_ERROR_NOT_SUPPORTED,		/* Since: 0.1.1 */
	FWUPD_ERROR_SIGNATURE_INVALID,		/* Since: 0.1.2 */
	/*< private >*/
	FWUPD_ERROR_LAST
} FwupdError;

GQuark		 fwupd_error_quark			(void);

#endif /* __FWUPD_ERROR_H */
