#include <iostream>
using namespace std;
#include "tree.h"
int main() {
    system("chcp 65001");
    BiTree p;
    cout << "输入二叉树：" << endl;
    CreateBiTree(p);

    cout << "先序遍历结果（ 递归 ）：";
    First(p);
    cout << endl;
    cout << "先序遍历结果（非递归）：";
    newFirst(p);
    cout << endl;

    cout << "中序遍历结果（ 递归 ）：";
    Middle(p);
    cout << endl;
    cout << "中序遍历结果（非递归）：";
    newMiddle(p);
    cout << endl;

    cout << "后序遍历结果（ 递归 ）：";
    Last(p);
    cout << endl;

    cout << "层次遍历结果（ 递归 ）：";
    LevelOrder(p);
    cout << endl;

    return 0;
}
