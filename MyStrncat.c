//strncat——功能：将字符串from 中至多count个字符连接到字符串to中，追加空值结束符。返回处理完成的字符串。
//比较坑的一点是不能将最后一位也用另一个字符串拷贝进去，而是要换成\0
char* MyStrncat(char* str1, const char* str2,size_t n)
{
	assert(str1 && str2);
	char* tem = str1;

	while (*str1)
	{
		str1++;
	}

	while (n--)
	{
		if (!(*str1++ = *str2++))
		{
			return tem;
		}
		*str1 = '\0';
	}

	return tem;
}