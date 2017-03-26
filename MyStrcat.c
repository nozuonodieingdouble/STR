//strcat——功能：函数将字符串str2 连接到str1的末端，并返回指针str1
char* MyStrcat(char *src, const char*dst)
{
	assert(src && dst);
	int count = 0;
	char* ret = src;
	while (*src)	//如果把++合并写到上面来会多加一次
	{
		src++;
	}
	while (*src++ = *dst++)
	{
		;
	}
	return ret;
}