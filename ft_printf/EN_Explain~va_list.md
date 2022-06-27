# Printf

PURPOSE

Write the printf function.

In the definition given below, the first parameter is str (part in quotes); the second parameter is "..." which means it can take more than one value.

~~~
	ft_printf(const char *str, ...)
	ft_printf("-----str-----", -----args-----);
~~~

<stdarg.h> Functions
---
1- va_list   --> This is where args takes multiple values. We define this location as va_list.
~~~
	va_list	args;
~~~
2- va_start  --> It starts from str[0] and starts mapping the args in str.
~~~
	va_start(args, str);
~~~
So how does it do this? With the help of va_args.

3- va_args   --> if "str" == 'c' ; We assign all of the arguments in "..." to va_arg.
va_arg; Returns the data type of the value in args.

//We specify the data type (data type) of the args that va_arg will read. For example, in the following line, the places where c is now in "str" are int type.
~~~
	if (str == 'c')
		len += ft_putchar(va_arg(args, int));
~~~
Nowww... When we throw all the arguments into va_arg, how come the computer can take the arguments one by one and map them to the values in str?
first read 'a' when " 'str' = 'c' ", then 7 when "'str' = 'd' ".

So, how it's works? Va_arg does not re-read where it reads (like the read function).We dump all data into va_args. but he will not take the place he took again.
This is how printf works. Therefore, str and args should be written in order.
~~~
	ft_printf("%c\n%d\n%p\n%s\n%x\n%u\n%%", 'a', 7, "holla", 15, 0);
	           ----------str--------------  ---------args---------
~~~

4- va_end    --> means args are finished.
~~~
	va_end(args);
~~~

