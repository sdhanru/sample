#include <stdio.h>
#include <stdarg.h>

void myitoa(int n, char *str, int radix)
{
    int i, j, remain;
    char tmp;

    i = 0;
    do{
        remain = n % radix;
        if(remain > 9)
            str[i] = remain - 10 + 'A';
        else
            str[i] = remain + '0';
        i++;
    }while(n /= radix);
    str[i] = '\0';
   for(i--, j = 0; j <= i; i--, j++){
        tmp = str[j];
        str[j] = str[i];
        str[i] = tmp;
   }
}

void myprintf(const char *format, ...)
{
    va_list ap;
    int n;
    char str[30], c, ch, *p;
    double f;

    va_start(ap, format);

    while((c = *format)){
        switch(c){
        case '%':{
                    ch = *++format;
                    switch(ch){
                    case 'd':{
                                n = va_arg(ap, int);
                                myitoa(n, str, 10);
                                fputs(str, stdout);
                                break;
                             }
                    case 'o':{
                                n = va_arg(ap, int);
                                myitoa(n, str, 8);
                                fputs(str, stdout);
                                break;
                            }
                    case 'x':{
                                n = va_arg(ap, int);
                                myitoa(n, str, 16);
                                fputs(str, stdout);
                                break;
                            }
                    case 'c':{
                                putchar(va_arg(ap, int));
                                break;
                            }
                    case 's':{
                                p = va_arg(ap, char *);
                                fputs(p, stdout);
                                break;
                            }
                    case '%':{
                                putchar('%');
                                break;
                            }
                    case 'f':{
                                f = va_arg(ap, double);
                                n = f;
                                myitoa(n, str, 10);
                                fputs(str, stdout);
                                putchar('.');
                                n = (f - n) * 1000000;
                                myitoa(n, str, 10);
                                fputs(str, stdout);
                                break;
                            }
                    }
                    break;
                }
        default:{
                    putchar(c);
                    break;
                }
        }    
        format++;
    }

    va_end(ap);
}

int main(void)
{   
    myprintf("%d, %o, %x, %c, %s, %%, %f\n", 10, 12, 14, 'H', "helloworld", 3.14);
    return 0;
}
