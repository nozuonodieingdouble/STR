//strchr�������ܣ���������һ��ָ��str ��ch �״γ��ֵ�λ�ã���û����str ����ch������NULL

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