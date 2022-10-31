//
// Created by zxq on 2022/10/20.
//

#include "stack.h"
// 初始化
void StackInit(Stack *pS) {
    if (!pS){
        return ;
    }
    pS->pTop = new Node();
    pS->pBottom = pS->pTop;
    pS->pTop->next = nullptr;
}

// 入栈
void StackPush(Stack *pS, EleType val) {
    if (!pS){
        return ;
    }
    Node *newNode = new Node();
    newNode->data = val;
    newNode->next = pS->pTop;
    pS->pTop = newNode;
}

// 出栈
void StackPop(Stack *pS, EleType &val) {
    if (!pS){
        return ;
    }
    if(StackIsEmpty(pS))
        return ;
    Node *r = pS->pTop;
    val = r->data;
    pS->pTop = r->next;
    delete r;
}

// 判断栈是否为空
bool StackIsEmpty(Stack *pS) {
    if (!pS){
        return true;
    }
    if(pS->pTop == pS->pBottom)
        return true;
    return false;
}
