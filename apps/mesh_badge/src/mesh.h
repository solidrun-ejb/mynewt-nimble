/*
 * Copyright (c) 2018 Intel Corporation
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include "mesh/mesh.h"

void mesh_send_hello(void);

u16_t mesh_get_addr(void);
bool mesh_is_initialized(void);
void mesh_start(void);
int mesh_init(u8_t addr_type);
