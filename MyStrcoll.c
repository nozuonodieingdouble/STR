//strcoll——功能：比较字符串str1 和 str2, 很象strcmp. 但是, 
//strcoll() 使用在目前环境中由setlocale()设定的次序进行比较。
int MyStrcoll(const char* dst, const char* src)
{
	assert(dst && src);
	int ret = 0;
	while (!(ret = *dst-*src))
	{
		dst++;
		src++;
	}
	if (ret > 0)
		return 1;
	else if (ret < 0)
		return -1;
	else
		return ret;
}