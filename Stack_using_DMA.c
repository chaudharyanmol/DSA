//stack using dynamic memory allocation using struct 
#include<stdio.h>
#include<stdlib.h> 
#define max 10

struct Node{
    int top ;
    int *arr ;
}typedef Nodetype ;
void display(struct Node *ptr){
    int i =0 ;
    
    while(i <=ptr->top){
    printf("%d\t",ptr->arr[i++]);
    
}

printf("\n");

}

void push(struct Node *ptr){
    int val ;
    printf("please proviude the value \n");
    scanf("%d",&val);
    ptr->top +=1;
    
    ptr->arr[ptr->top]= val ;
}

void pop(struct Node *ptr){
    int val ;
    val = ptr->arr[ptr->top];
    printf("the poppeed value is %d\n",val);
    
    ptr->top -- ;
}






int main(){
    Nodetype *stack = (Nodetype*)malloc(sizeof(Nodetype));
    stack->top=-1;
    stack->arr=(int*)malloc(max*sizeof(int));
    printf("\n");

    
    int ch ; 
    
    
    
    do{
        printf("1 for push , 2 for  pop , 3 for display\n");
        scanf("%d",&ch);
        
        switch(ch){
            case 1: 
            if(stack->top==max-1)
            printf("stack is overflowing\n");
            else
            push(stack);
            break ;
            
            case 2: 
            if (stack->top ==-1){
                printf("stack is underflowing\n");
            }else
            pop(stack);
            break ;
            
            
            case 3:
            if (stack->top ==-1){
                printf("stack is underflowing\n");
            }else
            display(stack);
            break ;
            
            
            default:
            exit(0);
            break ;
        }
    }while(1);
    
    
    
    
    
    
    
    return 0 ;
}
