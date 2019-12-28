
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

#include <string.h>
#include "message.h"

/**
 * @brief Send system message asynchronous
 *
 * @param origin sender
 * @param type message type
 * @param buffer data buffer
 *
 * @todo send built message to kernel via syscall
 */
void sys_async_send( pid_t origin, uint32_t type, uint8_t* buffer ) {
  // create message
  sys_message_t msg = {
    .origin = origin,
    .type = type,
  };
  // copy buffer into message
  memcpy( msg.buffer, buffer, MAX_MESSAGE_BUFFER );
}
