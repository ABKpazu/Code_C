//本程序的测试环境：在gcc的c17标准下成功编译并运行
//本程序已上传 https://github.com/ABKpazu/Code_C
//本程序为原创程序，转载请标明出处
//本程序仅供学习交流使用，请勿用于商业用途

#include <stdio.h>
#include <stdlib.h>

struct complex
{
    int real;
    int im;
};

struct complex cadd(struct complex creal, struct complex cim);
struct complex cmult(struct complex* creal, struct complex* cim);

int main()
{
    struct complex c1, c2;
    struct complex sum, product;
    printf("Please enter the values of c1 and c2:\n");
    scanf("%d %d %d %d", &c1.real, &c1.im, &c2.real, &c2.im);  //输入格式为：“实部1 虚部1 实部2 虚部2”

    sum = cadd(c1, c2);
    product = cmult(&c1, &c2);
    
    printf("The Sum is: %d + %di\n", sum.real, sum.im);
    printf("The Product is: %d + %di\n", product.real, product.im);
    return 0;
}

struct complex cadd(struct complex creal, struct complex cim)
{
    struct complex ret;
    ret.real = creal.real + cim.real;
    ret.im = creal.im + cim.im;
    return ret;
}

struct complex cmult(struct complex* creal, struct complex* cim)
{
    struct complex ret;
    ret.real = creal -> real * cim -> real - creal -> im * cim -> im;
    ret.im = creal -> real * cim -> im + creal -> im * cim -> real;
    return ret;
}
