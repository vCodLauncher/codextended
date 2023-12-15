//
// Created by Enzo Deshayes on 15/12/2023.
//

#include "logging.h"
#include <stdio.h>

void logPacket(const void *data, int length) {
    FILE *logFile = fopen("packet_log.txt", "a");
    if (logFile != NULL) {
        fprintf(logFile, "Packet Length: %d, Data: %.*s\n", length, length, (const char *)data);
        fclose(logFile);
    } else {
        // Vous pouvez ajouter un message d'erreur ici si le fichier ne peut pas être ouvert
        perror("Error opening log file");
    }
}
