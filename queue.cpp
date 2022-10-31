//
// Created by zxq on 2022/10/30.
//

#include "queue.h"

void QueueInit(Queue *pS) {
    if (!pS){
        return ;
    }
    pS->front = new QuNode();
    pS->rear = pS->front;
    pS->front->next = nullptr;
}
void QueuePush(Queue *pS, EleType val){
    if (!pS){
        return ;
    }
    auto *newNode = new QuNode();
    newNode->data = val;
    newNode->next = nullptr;
    pS->rear->next = newNode;
    pS->rear = newNode;
}
void QueuePop(Queue *pS, EleType &val){
    if (!pS){
        return ;
    }
    if(QueueIsEmpty(pS))
        return ;
    QuNode *r = pS->front->next;
    if (pS->front->next == pS->rear){
        pS->rear = pS->front;
    }
    val = r->data;
    pS->front->next = r->next;
    delete r;
}
bool QueueIsEmpty(Queue *pS){
    if (!pS){
        return true;
    }
    if(pS->front == pS->rear)
        return true;
    return false;
}