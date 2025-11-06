// telemetry_alloc.c
#include <stddef.h>
#include <stdlib.h>

/*
 * Rust expects these functions to exist for heap allocations:
 *
 *   void *telemetryMalloc(size_t);
 *   void telemetryFree(void *);
 *
 */

void *telemetryMalloc(size_t xSize)
{
     return malloc(xSize);
}

void telemetryFree(void *pv)
{
    free(pv);
}