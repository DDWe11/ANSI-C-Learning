#include<stdio.h>
int main()
{
    int x;//x为家庭人数
     float w=3.4;//水价
    float n,a,b,c,p;//y是人均水量,n是用水总量,a,b,c是中间量,p总价
    double y;
    printf("请输入家庭人数和用水总量:\n");
    scanf("%d %f",&x,&n);
    y=n/x;

    if (y<=3.0)
    {
       
        p=y*w*x;
        printf("应缴水费:%.2f\n",p);
    }
    else if (y>3.0&&y<=(3.0+3*0.2))
    {
        a=(y-3.0)*2*w;
        p=(3*w+a)*x;
        printf("应缴水费:%.2f\n",p); 
    }
    else if (y>=(3+3*0.2)&&y<=(3+3*0.4))
    {
       a=(3.0*0.2)*2*w;
       b=(y-(3.0+3*0.2))*3*w;
       p=(3.0*w+a+b)*x;

       printf("应缴水费:%.2f\n",p); 
    }
    else if (y>3+3*0.4)
    {
       a=(3.0*0.2)*2*w;
       b=(3.0*0.2)*3*w;
       c=(y-(3.0+3*0.4) )*4*w;
       p=(3.0*w+a+b+c)*x;
       printf("应缴水费:%.2f\n",p); 
    }
      return 0; 
}
    