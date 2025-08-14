#include<stdio.h>
#include<string.h>

int main() {
	char str[30], str2[10];
	printf("\n Enter string: ");
	scanf("%s", str);
	printf("\n length of str %s = %d\n", str, strlen(str));
	strrev(str); // 
	puts(str);
	strupr(str); //  uppercase 
	printf("\n uppercase = %s", str);
	strlwr(str); // lowercase
	printf("\n lowercase = %s", str);
	strcpy(str2, str); // str ki copy str2
	printf("\n copy str=%s", str2);
	printf("\n strcmp = %d", strcmp("mbc", "bdc"));
}
