//strlen——功能：函数返回字符串str 的长度( 即空值结束符之前字符数目)。

size_t MyStrlen1(const char* str)	//加const防止str被修改
{
	assert(str);		//断言，防止str为空指针或者野指针的情况
	size_t count = 0;
	while (*str++)
	{
		++count;
	}
	return count;
}

size_t MyStrlen2(const char* str)
{
	assert(str);
	const char* eos = str;
	while (*eos++)
		;
	return (eos - str - 1);
}
