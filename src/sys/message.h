
/**
 * Copyright (C) 2018 - 2019 bolthur project.
 *
 * This file is part of bolthur/library.
 *
 * bolthur/library is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * bolthur/library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with bolthur/library.  If not, see <http://www.gnu.org/licenses/>.
 */

#if ! defined( __LIB_MESSAGE__ )
#define __LIB_MESSAGE__

#include <stdint.h>
#include <stddef.h>
#include "type.h"

#define MAX_MESSAGE_BUFFER 64

#ifdef __cplusplus
extern "C" {
#endif

typedef struct {
  pid_t origin;
  uint32_t type;
  union {
    uint8_t buffer[ MAX_MESSAGE_BUFFER ];
  };
} sys_message_t, *sys_message_ptr_t;

sys_message_ptr_t sys_sync_receive( void );
void sys_sync_send( pid_t, uint32_t, uint8_t* );

sys_message_ptr_t sys_async_receive( void );
void sys_async_send( pid_t, uint32_t, uint8_t* );

#ifdef __cplusplus
}
#endif

#endif
