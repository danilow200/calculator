#include<stdio.h>

int main(){
    
    int A,B;
    char C;
    
    while(1){
        scanf("%d %c %d",&A,&C,&B);
        
        if(C=='s' || C=='S'){
            break;
        }
        
        switch(C) {
            case '+' :
                printf("%d\n",A+B);
                break;
            case '-' :
                printf("%d\n",A-B);
                break;
            case '*' :
                printf("%d\n",A*B);
                break;
            case '/' :
                printf("%d\n",A/B);
                break;
            case '%' :
                printf("%d\n",A%B);
                break;
            case '^' :
                for(int i=0;i<B;i++){
                    A *=A;
                }
                printf("%d\n",A);
                break;
            default :
                break;
        }
    }
    return 0;
    }
