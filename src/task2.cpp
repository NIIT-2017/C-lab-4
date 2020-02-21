char* reverseWords(char* in, char* out)
{
	int inWord = 0, 
		count = 0, 
		i = 0;
	char* buf[64];
	for (; i < 256 && in[i]; i++) 
	{
		if (in[i] == ' ')
			inWord = 0;
		else if (in[i] != ' ' && inWord == 0)
		{
			inWord = 1;
			buf[count++] = &in[i];
		}
	}
	buf[count] = &in[i];
	if (*in != 0) 
	{
		int l = 0;
		for (; count; count--)
		{
			for (int k = 0; buf[count - 1] + k != buf[count]; k++, l++)
				out[l] = *(buf[count - 1] + k);
			if (out[l-1] != ' ') 
			{
				out[l] = ' ';
				l++;
			}
		}
		if (out[l - 1] == ' ')
			out[l - 1] = '\0';
		else
			out[l] = '\0';
	}
	else
		out[0] = 0;
	return out;
}