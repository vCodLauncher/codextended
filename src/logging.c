//
// Created by Enzo Deshayes on 15/12/2023.
//

#include "logging.h"
#include <stdio.h>

void logPacket(const void *data, int length) {
    FILE *logFile = fopen("packet_log.txt", "a");
    if (logFile != NULL) {
        // Assurez-vous que les données sont écrites sous une forme lisible
        fprintf(logFile, "Packet Length: %d, Data: ", length);
        for (int i = 0; i < length; ++i) {
            fprintf(logFile, "%02x ", ((unsigned char*)data)[i]);
        }
        fprintf(logFile, "\n");
        fclose(logFile);
    } else {
        perror("Error opening log file");
    }
}