//strstr�������ܣ���������һ��ָ�룬��ָ���ַ���str2 �״γ������ַ���str1�е�λ�ã����û���ҵ�������NULL��
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
