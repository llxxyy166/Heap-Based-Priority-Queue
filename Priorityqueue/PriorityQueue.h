/*
 * priorityqueue.h
 *
 *  Created on: 2015年10月7日
 *      Author: xinyelei
 */

#ifndef PRIORITYQUEUE_H_
#define PRIORITYQUEUE_H_


typedef struct PriorityQueue *PQueue;   //priorityqueue type

PQueue pq_create();    //create an empty queue

int pq_push(PQueue p, double priority,void *data);  //push a pointer into queue with priority

void* pq_pop(PQueue p);       //pop the smallest element

unsigned int pq_size(PQueue p);  //size

void pq_free(PQueue p);       //free the queue

#endif /* PRIORITYQUEUE_H_ */
