#include <stdio.h>

int main()
{

    printf("jinruqianbaoxitong\n");
    int qian = 0;

    while (1)
    {
        printf("1---cunqian\n");
        printf("2---quqian\n");
        printf("3---yue\n");
        printf("4---tuichu\n");
        printf("qingshurugongnengbianhao\n");

        int code;
        scanf("%d", &code);

        if(code == 1)
        {
            printf("qingshurucunqianjine:\n");
            int cun;
            scanf("%d",&cun);
            qian+=cun;
            printf("cunruchenggong,dianjihuichejixu\n");
            char x;
            scanf("%c",&x);
            scanf("%c",&x);
        }
        if(code == 2)
        {
            printf("qingshuruquqianjine:\n");
            int qu;
            scanf("%d",&qu);
            qian-=qu;
            printf("dianjihuichejixu\n");
            char x;
            scanf("%c",&x);
            scanf("%c",&x);
        }
        if(code == 3)
        {
            printf("%d\n",qian);
            printf("dianjihuichejixu\n");
            char x;
            scanf("%c",&x);
            scanf("%c",&x);
        }
        if(code == 4)
        {
            printf("tuichuchengxu\n");
            break;
        }
    }

    return 0;
}