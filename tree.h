//
// Created by zxq on 2022/10/20.
//

#ifndef TREE_TREE_H

#define TREE_TREE_H
#define ElemType char

typedef struct bnode{
    ElemType data;
    struct bnode *lchild,*rchild;
}BitNode,*BiTree;

void CreateBiTree(BiTree &p);
void Middle(BiTree p);
void First(BiTree p);
void Last(BiTree p);
void newMiddle(BiTree T);
void newFirst(BiTree T);
void LevelOrder(BiTree T);
#endif //TREE_TREE_H
