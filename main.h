#ifndef UNTITLED2_MAIN_H
#define UNTITLED2_MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "agent/agent.h"
#include "server/discovery.h"

void daemon_start_agent(int port);
void write_daemon_log();

#endif
