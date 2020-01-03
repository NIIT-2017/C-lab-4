char* reverseWords(char* in, char* out)
{
	int inWord = 0, //флаг нахождения в слове
		count = 0, //счетчик количества слов
		i = 0;
	char* buf[64];

	for (; i < 256 && in[i]; i++) // считаем количество слов и ставим метки на начало слов
	{
		if (in[i] == ' ')//между слов
			inWord = 0;
		else if (in[i] != ' ' && inWord == 0)//только что вошли в слово
		{
			inWord = 1;
			buf[count++] = &in[i];
		}
	}
	buf[count] = &in[i];

	if (*in != 0) // заполняем массив out
	{
		int l = 0;
		for (; count; count--)
		{
			for (int k = 0; buf[count - 1] + k != buf[count]; k++, l++)
				out[l] = *(buf[count - 1] + k);
			if (out[l-1] != ' ') //для случая последнего/первого слова
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