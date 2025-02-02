#ifndef RENSSELAERMOTORSPORT_SCHEDULER_H
#define RENSSELAERMOTORSPORT_SCHEDULER_H

#include <stdbool.h>

#include "PriorityQueue.h"

#define MAX_SENSORS 10
#define MAX_HZ 1000

typedef struct Scheduler {
    PriorityQueue tasks;
    bool running;
} Scheduler;

/**
 * @brief Initializes the scheduler with the given sensors.
 *
 * @param scheduler   Pointer to the Scheduler structure to initialize.
 * @param updateableArray Array of pointers to Updateable structures to be scheduled.
 */
void SchedulerInit(Scheduler* scheduler, Updateable* updatableArray[]);

/**
 * @brief Runs the scheduler, executing tasks based on their priority.
 *
 * @param scheduler Pointer to the Scheduler structure to run.
 */
void SchedulerRun(Scheduler* scheduler);

/**
 * @brief Stops the scheduler.
 *
 * @param scheduler Pointer to the Scheduler structure to stop.
 */
void SchedulerStop(Scheduler* scheduler);

#endif // RENSSELAERMOTORSPORT_SCHEDULER_H
