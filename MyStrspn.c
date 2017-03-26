//strspn——功能：函数返回字符串str1中第一个不包含于字符串str2的字符的索引。
size_t MyStrspn(const char* str1, const char* str2)
{
	size_t index = 0;
	while (*str1++ == *str2++)
	{
		index++;
	}
	return index;
}