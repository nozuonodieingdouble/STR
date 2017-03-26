//strrchr——功能：函数返回一个指针，它指向字符ch 在字符串str
//末次出现的位置，如果匹配失败，返回NULL
const char* MyStrrchr(const char* str,char ch)
{
	assert(str);
	const char* tmp = str;
	while (*str++)	//先让指针指向\0
	{
		;
	}

	while (--str != tmp)	//只要str还没有减到tmp刚开始保存的初始位置
	{
		if (*str == ch)
			return str;
	}

	return NULL;
}