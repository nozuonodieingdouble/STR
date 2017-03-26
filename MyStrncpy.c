//strncpy——功能：将字符串from 中至多count个字符复制到字符串to中。
//如果字符串from 的长度小于count，其余部分用'\0'填补。返回处理完成的字符串。
char* MyStrncpy(char* str1, const char* str2, size_t n)
{
	assert(str1 && str2);
	if (!n)
		return str1;

	char* tmp = str1;
	while (n && (*str1++ = *str2++))
	{
		n--;
	}
	
	if (n)
	{
		while (n--)
		{
			*str1--;
		}
		str1 = '\0';
	}
	return tmp;
}