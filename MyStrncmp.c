//strncmp�������ܣ��Ƚ��ַ���str1 �� str2������count���ַ���
int MyStrncmp(const char* str1, const char* str2, size_t n)
{
	assert(str1 && str2);
	int ret = 0;
	while (!(ret = *str1 - *str2) && n--)
	{
		++str1;
		++str2;
	}

	if (ret > 0)
	{
		return 1;
	}

	else if (ret < 0)
	{
		return -1;
	}
	return ret;
}