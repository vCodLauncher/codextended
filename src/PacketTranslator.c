//
// Created by Enzo Deshayes on 14/12/2023.
//

#include "PacketTranslator.h"

// catch version client from sv_client ?
// or detect the version here ?


typedef struct {

} PacketV1_1;

typedef struct {

} PacketV1_5;


void processPacket(netadr_t, msg_t *msg) {
    int clientVersion = detectClientVersion(from);

    // probably check what version use the user ??

    if (clientVersion = 5) {
        PacketV1_5 packetV1_5;
    }


}
