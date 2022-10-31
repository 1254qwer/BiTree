//
// Created by zxq on 2022/10/20.
//
#include <iostream>
using namespace std;

#include "tree.h"
#include "stack.h"
#include "queue.h"

// 创建二叉树
void CreateBiTree(BiTree &p){
    ElemType tmp;
    cin >> tmp;
    if (tmp == '#'){
        p = nullptr;
    }
    else{
        p = new BitNode;
        p->data = tmp;
        CreateBiTree(p->lchild);
        CreateBiTree(p->rchild);
    }
}

// 中序遍历（递归）
void Middle(BiTree p){
    if(p){
        Middle(p->lchild);
        cout << p->data;
        Middle(p->rchild);
    }
}

// 先序遍历（递归）
void First(BiTree p){
    if(p){
        cout << p->data;
        First(p->lchild);
        First(p->rchild);
    }
}

// 后序遍历（递归）
void Last(BiTree p){
    if(p){
        Last(p->lchild);
        Last(p->rchild);
        cout << p->data;
    }
}

// 中序遍历（非递归）
void newMiddle(BiTree T){
    auto S = new st;
    StackInit(S);
    BiTree p = T, q = nullptr;
    while (p || !StackIsEmpty(S)){
        if(p){
            StackPush(S, p);
            p = p->lchild;
        }
        else{
            StackPop(S, q);
            cout << q->data;
            p = q->rchild;
        }
    }
}

// 先序遍历（非递归）
void newFirst(BiTree T){
    auto S = new st;
    StackInit(S);
    BiTree p = T, q = nullptr;
    while (p || !StackIsEmpty(S)){
        if(p){
            StackPush(S, p);
            cout << p->data;
            p = p->lchild;
        }
        else{
            StackPop(S, q);
            p = q->rchild;
        }
    }
}

// 层次遍历
void LevelOrder(BiTree T){
    auto Q = new qu;
    QueueInit(Q);
    BiTree p = T, q = nullptr;
    QueuePush(Q, p);
    while (!QueueIsEmpty(Q)){
        QueuePop(Q, q);
        cout << q->data;
        if(q->lchild)
            QueuePush(Q, q->lchild);
        if(q->rchild)
            QueuePush(Q, q->rchild);
    }
}