#include<stdio.h>
#include<stdlib.h>//含有malloc()函数。
#define MAX 20
//顺序表(静态分配)：
struct CL1{
    int data[MAX];
    int length;
};
//初始化顺序表  
void InitList(struct CL1 *L){
    L->length=0;
}
/*

*/
//顺序表(动态分配)：
typedef struct{
int *data;
int MaxSize;
int length;
}CL2;
//初始化顺序表  
void InitList(CL2 *L){
    L->data=(int*)malloc(MAX*sizeof(int));
    L->length=0;
    L->MaxSize=MAX;
}
//插入操作
int ListInSert(CL2 *L,int i,int e){
    if(i<1||i>L->length)
        return 0;
    if(L->length>=L->MaxSize)
    return 0;
    for(int j=L->length;j>=i;j--){
        L->data[j]=L->data[j-1];
    }
    L->data[i]=e;
    L->length++;
    return 1;
}
//删除操作
int ListDelete(CL2 *L,int i,int e){
    if(i<1||i>L->length)
        return 0;
        e=L->data[i];
    if(L->length>=L->MaxSize)
    return 0;
    for(int j=i;j<L->length;j++){
        L->data[j-1]=L->data[j];
    }
    L->length--;
    return 1;
}
//增加动态链表的长度
void IncreaseSize(CL2 *L,int len){
    int *p=L->data;
    L->data=(int*)malloc((L->MaxSize+len)*sizeof(int));
    for(int i=0;i<L->length;i++){
        L->data[i]=p[i];
    }
    L->MaxSize=L->MaxSize+len;
    free(p);
}

//单链表
typedef struct LNode{
    int data;
    LNode * next;
}LNode,*LinkList;

int main(void){
    struct CL1 L;
    CL2 L2;
    InitList(&L);
    return 0;
}