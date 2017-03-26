//strcmp——功能：比较字符串str1 and str2
//less than 0	str1 is less than str2
//equal to 0	str1 is equal to str2
//greater than 0	str1 is greater than str2


int MyStrcmp(const char* dst, const char* src)
{
	assert(dst && src);
	int ret = 0;
	while (!(ret = *dst - *src))
	{
		src++;
		dst++;
	}
	
	if (ret < 0)
		return -1;

	else if(ret > 0)
		return 1;

	return ret;
}
