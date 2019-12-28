
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

#if ! defined( __LIB_LIST__ )
#define __LIB_LIST__

#include <stdbool.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

// forward declaration
typedef struct list_item list_item_t, *list_item_ptr_t;

// generic list item
typedef struct list_item {
  void* data;
  list_item_ptr_t previous;
  list_item_ptr_t next;
} list_item_t, *list_item_ptr_t;

typedef struct {
  list_item_ptr_t first;
  list_item_ptr_t last;
} list_manager_t, *list_manager_ptr_t;

list_manager_ptr_t list_construct( void );
void list_destruct( list_manager_ptr_t );
bool list_empty( list_manager_ptr_t );
list_item_ptr_t list_lookup_data( list_manager_ptr_t, void* );
void list_push_front( list_manager_ptr_t, void* );
void list_push_back( list_manager_ptr_t, void* );
void* list_pop_front( list_manager_ptr_t );
void* list_pop_back( list_manager_ptr_t );
void* list_peek_front( list_manager_ptr_t );
void* list_peek_back( list_manager_ptr_t );
list_item_ptr_t list_node_create( void* );
void list_print( list_manager_ptr_t );

#ifdef __cplusplus
}
#endif

#endif
