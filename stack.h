//
// Created by zxq on 2022/10/20.
//

#ifndef TREE_STACK_H
#define TREE_STACK_H

#include "tree.h"

// 定义栈中的元素类型
#define EleType BiTree

// 栈内内容节点
struct Node {
    EleType data;
    Node *next;
};

// 栈
typedef struct Stack {
    Node *pTop; // 顶部指针
    Node *pBottom; // 底部指针
} st;

void StackInit(Stack *pS); // 初始化
void StackPush(Stack *pS, EleType val); // 入栈
void StackPop(Stack *pS, EleType &val); // 出栈
bool StackIsEmpty(Stack *pS); // 判断栈是否为空

#endif //TREE_STACK_H
