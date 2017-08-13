#ifndef _faux_windows_partition_information_h_
#define _faux_windows_partition_information_h_

#include "DWORD.h"
#include "LONG.h"
#include "LARGE_INTEGER.h"
#include "DWORD.h"
#include "BYTE.h"
#include "BOOLEAN.h"

typedef struct _PARTITION_INFORMATION {
    LARGE_INTEGER StartingOffset;
    LARGE_INTEGER PartitionLength;
    DWORD HiddenSectors;
    DWORD PartitionNumber;
    BYTE  PartitionType;
    BOOLEAN BootIndicator;
    BOOLEAN RecognizedPartition;
    BOOLEAN RewritePartition;
} PARTITION_INFORMATION, *PPARTITION_INFORMATION;


#endif