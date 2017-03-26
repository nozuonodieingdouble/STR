//strstr——功能：函数返回一个指针，它指向字符串str2 首次出现于字符串str1中的位置，如果没有找到，返回NULL。
const char* MyStrstr(const char*str1, const char* str2)
{
	assert(str1 && str2);
	while (*str1)
	{
		if (*str1++ == *str2++)
		{
			;
		}
		++str1;
		return str1;
	}
	return NULL;
}
