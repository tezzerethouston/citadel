#ifndef TIMER_H
#define TIMER_H

#include <sys/time.h>
#include <unistd.h>

#define FRAMERATE 60

void	twait(struct timeval *t);

#endif
