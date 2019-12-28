
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

#include <stddef.h>
#include <stdlib.h>
#include <assert.h>
#include "list.h"

/**
 * @brief Method to get element from list like pop without removal
 *
 * @param list list to use
 * @return void* data of first element or NULL if empty
 */
void* list_peek_front( list_manager_ptr_t list ) {
  list_item_ptr_t first;

  // assert list is initialized
  assert( NULL != list );
  // get first element
  first = list->first;

  // handle empty list
  if ( NULL == first ) {
    return NULL;
  }
  // return data of first element
  return first->data;
}

/**
 * @brief Method to get element from list like pop without removal
 *
 * @param list list to use
 * @return void* data of first element or NULL if empty
 */
void* list_peek_back( list_manager_ptr_t list ) {
  list_item_ptr_t last;

  // assert list is initialized
  assert( NULL != list );
  // get last element
  last = list->last;

  // handle empty list
  if ( NULL == last ) {
    return NULL;
  }
  // return data of first element
  return last->data;
}
