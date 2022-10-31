//
// Created by zxq on 2022/10/30.
//

#ifndef TREE_QUEUE_H
#define TREE_QUEUE_H

#include "tree.h"

// 定义队列中的元素类型
#define EleType BiTree

// 队列内内容节点
struct QuNode {
    EleType data;
    QuNode *next;
};

// 队列
typedef struct Queue {
    QuNode *front; // 队头指针
    QuNode *rear; // 队尾指针
} qu;

void QueueInit(Queue *pS); // 初始化
void QueuePush(Queue *pS, EleType val); // 入队
void QueuePop(Queue *pS, EleType &val); // 出队
bool QueueIsEmpty(Queue *pS); // 判断队列是否为空

#endif //TREE_QUEUE_H
