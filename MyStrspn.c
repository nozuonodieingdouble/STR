//strspn�������ܣ����������ַ���str1�е�һ�����������ַ���str2���ַ���������
size_t MyStrspn(const char* str1, const char* str2)
{
	size_t index = 0;
	while (*str1++ == *str2++)
	{
		index++;
	}
	return index;
}