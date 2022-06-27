# PrintF

AMAÇ
 
Printf fonksiyonunu yazmak.
***
***
Aşağıda belirtilen yerde tanımda ilk parametre, str (tırnak içerisindeki bölüm); ikinci parametre, birden fazla değer alabileceği anlamına gelen "..." konulur.

~~~
	ft_printf(const char *str, ...)
	ft_printf("-----str-----", -----args-----);
~~~
<stdarg.h> Fonksiyonlar
---
1- va_list   --> args'ın birden fazla değer aldığı yerdir. Biz bu yeri va_list olarak tanımlarız.
~~~
	va_list	args;
~~~

2- va_start  --> str[0]'dan başlatıp args'ı, str içerisinde eşlemeye başlar.
~~~
	va_start(args, str);
~~~
Peki bunu nasıl yapıyor? Va_args yardımıyla. 

3- va_args   --> "str" == c ise; "..." içerisnde olan argüanların tamamını va_arg'a atarız. 
va_arg; args'deki değerin, data type'ını (veri tipini) verir.
//va_arg'ın okuyacağı args'ın data type'ını (veri tipini) belirtmiş oluruz. Örnek olarak aşağıdaki satırda artık "str"de c olan yerler int tipi alır. 
~~~
	if (str == 'c')
		len += ft_putchar(va_arg(args, int));
~~~
Şimdiiii... Biz va_arg'ın içerisine tüm args'ları atıyorsak nasıl oluyor da bilgisayar args'ları tek tek alıp, str'deki değerler ile eşleyebiliyor? 
yani ilk olarak " 'str' = 'c' " olduğunda 'a'yı okunduktan sonra " 'str' = 'd' " olduğunda 7'yi almalı.

peki bu nasıl oluyor? va_arg, okuduğu yeri tekrar okumaz (read fonkiyonu gibi). Biz tüm veri'leri va_args'ın içine atarız fakat o, aldığı yeri bir daha almaz. printf'in çalışma mantığı budur. Bu nedenle str ile args'lar sırası ile yazılmalıdır.
~~~
	ft_printf("%c\n%d\n%p\n%s\n%x\n%u\n%%", 'a', 7, "holla", 15, 0);
	           ----------str--------------  ---------args---------
~~~

4- va_end    --> args'ların bittiği anlamına getir.
~~~
	va_end(args);
~~~
