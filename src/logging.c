//
// Created by Enzo Deshayes on 15/12/2023.
//

#include "logging.h"
#include <stdio.h>

void logPacket(const char *packetData, int packetSize) {
    FILE *logFile = fopen("packet_log.txt", "a");
    if (logFile != NULL) {
        fprintf(logFile, "Packet Size: %d, Data: %s\n", packetSize, packetData);
        fclose(logFile);
    }
}

