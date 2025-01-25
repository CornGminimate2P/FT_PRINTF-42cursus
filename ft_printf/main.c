#include <stdio.h>
#include "ft_printf.h"


int	main(void)
{
	int	ret;
	ret = ft_printf("%% %d %i\n",0x12,0x35);
	
	if(printf("%% %d %i\n",0x12,0x35) != ret)
		return (write(1,"1",1));

	int     tmpInt;

    tmpInt = 25;
    //Specifier p check
    printf("Test 58\t\t: p\n\n");
    printf("Function\t: Printf\n");
    printf("Input\t\t: &tmpInt\n");
    printf("Output\t\t: ");
    printf("%p\n\n", &tmpInt);

    ft_printf("Function\t: ft_printf\n");
    ft_printf("Input\t\t: &tmpInt\n");
    ft_printf("Output\t\t: ");
    ft_printf("%p\n\n", &tmpInt);

    //Specifier 10p check
    printf("Test 59\t\t: 10p\n\n");
    printf("Function\t: Printf\n");
    printf("Input\t\t: &tmpInt\n");
    printf("Output\t\t: ");
    printf("%10p\n\n", &tmpInt);

    ft_printf("Function\t: ft_printf\n");
    ft_printf("Input\t\t: &tmpInt\n");
    ft_printf("Output\t\t: ");
    ft_printf("%10p\n\n", &tmpInt);
    return (0);
}
