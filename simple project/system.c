#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void mune()
{
    printf("                   进制转换                       \n");
    printf("                                                 \n");
    printf("              1、十进制转换二进制                   \n");
    printf("              2、十进制转换八进制                   \n");
    printf("              3、十进制转换十六进制                 \n");
    printf("              4、二进制转换十进制                   \n");
    printf("              5、八进制转换十进制                   \n");
    printf("              6、十六进制转换十进制                 \n");
    printf("              0、    退     出                    \n");  
}

void TenToTwo()
{
    int num,m, c, i = 0;
    int n = 2;
    int a[32];
    printf("输入一个整数：");
    scanf("%d", &num);
    m = num;
    while (num>0)
    {
        c = (num % n);
        a[i] = c;
        num = num / n;
        i++;
    }
    printf("十进制数%d转换成二进制数是：", m);
    for (i--; i >= 0; i--)           //将数组倒序输出
        printf("%d", a[i]);
    printf("\n");}

void TenToEight()
{
    int num, m, c, i = 0;
    int n = 8;
    int a[32];
    printf("输入一个整数：");
    scanf("%d", &num);
    m = num;
    while (num>0)
    {
        c = (num % n);
        a[i] = c;
        num = num / n;
        i++;
    }
    printf("十进制数%d转换成八进制数是：", m);
    for (i--; i >= 0; i--)           //将数组倒序输出
        printf("%d", a[i]);
    printf("\n");
}

void TenToSixteen()
{
        char arr[] = "0123456789ABCDEF";
        char hex[16];
        int i = 0;
        int j = 0;
        int num = 0,a = 0;
        printf("输入一个整数：");
        scanf("%d", &num);
        a = num;
        while (num)
        {
            hex[i++] = arr[num % 16];   //对十进制数求余并最终与hextable数组中的字符匹配
            num = num / 16;
        }
        printf("十进制数%d转换成十六进制数是：", a);
        for (j = i - 1; j >= 0; --j)
            printf("%c", hex[j]);
        printf("\n");
}

void TwoToTen()
{   
        long long n,a;
        int sum = 0, i = 0, m;
        printf("输入一个二进制数: ");
        scanf("%lld", &n);
        a = n;
        while (n != 0)
        {
            m = n % 10;
            n /= 10;
            sum += m*pow(2, i);
            ++i;
        }
        printf("二进制数 %lld 转换为十进制为 %d\n", a, sum);
}

void EightToTen()
{
    int n, a;
    int sum = 0, i = 0, m;
    printf("输入一个八进制数: ");
    scanf("%d", &n);
    a = n;
    while (n != 0)
    {
        m = n % 10;
        n /= 10;
        sum += m*pow(8, i);
        ++i;
    }
    printf("八进制数 %d 转换为十进制为 %d\n", a, sum);
}

void SixteenToTen()
{
    int num = 0;
    printf("输入一个十六进制数: ");
    scanf("%x", &num);
    printf("十六进制数 %x 转换为十进制为 %d\n", num, num);
}

int main()
{
    int n = 0;
    while (1)
    {
        mune();
        printf("请选择：");
        scanf("%d", &n);
        switch (n)
        {
        case 1:TenToTwo();
            break;
        case 2:TenToEight();
            break;
        case 3:TenToSixteen();
            break;
        case 4:TwoToTen();
            break;
        case 5:EightToTen();
            break;
        case 6:SixteenToTen();
            break;
        case 0:
            exit(0);
            break;
        default:
            printf("您的选择错误!!!\n");
            break;
        }
    }
}