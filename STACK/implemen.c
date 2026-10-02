#include<stdio.h>
#define MAX 10;
int top=-1;
int STACK[MAX];


void checkSize(){
    printf("The Size Of The Stack : %d\n",MAX);
}

void checkElements(){
    if(top==-1){
        printf("Stack Is Empty\n");
    }
    printf("The Elements Of The Stack Are : ");
    int temp=top;
    while(temp==-1){
        printf("%d\t",STACK[temp]);
        temp--;
    }
    printf("\n");
}

void peek(){
    if(top==-1){
        printf("Stack Is Empty\n");
    }
    printf("The Top Element Of The Stack Is : %d\n",STACK[temp]);
}

void PUSH(int ele){
    if(top==MAX-1){
        printf("Stack Overflow\n");
    }
    else{
        STACK[++top]=ele;
    }
    printf("%d Is Pushed To Stack\n",ele);
}

void pop(){
    if(top==-1){
        printf("The Stack Is Underflow\n");
    }
    else{
        int temp=STACK[top];
        top--;
        printf("%d Is Poped From The Stack\n");
    }
}

int main(){

    int STACK[MAX];
    int top=-1;
    printf("Choose One Of These Options : ");
    printf("1. Check The Size Of The Stack \n");
    printf("2. Check The Elements Of The Stack \n");
    printf("3. Check The Top Element Of The Stack \n");
    printf("4. Insert Into The Stack \n");
    printf("5. Delete From The Stack \n");
    // printf("6. Check The Size Of The Stack \n");
    // printf("7. Check The Size Of The Stack \n");



    return 0;
}