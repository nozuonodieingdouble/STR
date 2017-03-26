//strcoll�������ܣ��Ƚ��ַ���str1 �� str2, ����strcmp. ����, 
//strcoll() ʹ����Ŀǰ��������setlocale()�趨�Ĵ�����бȽϡ�
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