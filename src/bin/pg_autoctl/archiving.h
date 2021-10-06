/*
 * src/bin/pg_autoctl/archiving.h
 *     Implement archiving support for Postgres.
 *
 * Copyright (c) Microsoft Corporation. All rights reserved.
 * Licensed under the PostgreSQL License.
 *
 */

#ifndef ARCHIVING_H
#define ARCHIVING_H

#include <stdbool.h>

#include "keeper.h"

bool archive_wal(Keeper *keeper, const char *config_filename, const char *wal);

#endif  /* ARCHIVING_H */