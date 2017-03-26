//strchr——功能：函数返回一个指向str 中ch 首次出现的位置，当没有在str 中找ch到返回NULL

const char* MyStrchr(const char* str, char ch)
{
	assert(str);
	while (*str)
	{
		if (*str == ch)
			return str; 
		str++;
	}
	return NULL;
}