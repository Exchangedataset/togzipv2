#ifndef BITFLYER_H
#define BITFLYER_H

void send_bitflyer(char *message, char *channel);

void msg_bitflyer(char *message, char *channel);

void status_bitflyer(unsigned long long ts, FILE *out);

#endif