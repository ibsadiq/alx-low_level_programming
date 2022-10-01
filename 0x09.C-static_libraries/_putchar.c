 #include <unistd.h>

 /**
* _putchar 
* @c:the char
*
* Return
* on error
*/
int _putchar(char c)
{
    return (write(1, &c, 1));
}
