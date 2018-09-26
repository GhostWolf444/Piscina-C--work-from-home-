int	ft_is_word(char c)
{
	return (c == '\n' || c == '\t' || c == ' ');//Returneaza "0" daca conditia este adevarata
	//si 1 daca este falsa
}

int	ft_count_word(char *str)//Returneaza numarul de cuvinte
{
	int	i;
	int	count;
	int	check;

	i = 0;//index
	count = 0;//Numarul de cuvinte
	check = 0;//Variabila pentru verificarea conditiei
	while (str[i] != '\0')
	{
		if(!ft_is_word(str[i]) && check == 0)//Daca nu are separator executa bloc
		{
			count++;//Retin numarul de cuvinte
			check = 1;//Il fac pe check 1 pt a nu mai verifica primul if pana cand
			//nu da de un separator
		}
		else if (ft_is_word(str[i]))//Cand da de un separator il fac pe check = 0 
			//pt a verifica primul if,astfel verifica nr de cuvinte
			check = 0;
		i++;

	}
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)//Copiaza "n" caracter din src in dest
{
	unsigned int i;

	i = 0;
	while (src[i] != '\0' && i < n) 
	{
		dest[i] = src[i];
		++i;
	}
	if (i < n && src[i] == '\0')
	{
		while (dest[i] != '\0')
		{
			dest[i] = '\0';
			++i;
		}
	}
	dest[i] = '\0';
	return (dest);
}
int	ft_word_lenght(char *str) //Returneaza lungimea unui cuvant dat ca parametru
{
	int	i;

	i = 0;
	while (str[i] != '\0' && !ft_is_word(str[i]))//Cat timp nu a ajuns la fianl si str[i] nu e separator
		i++;
	return (i);
}

char	**ft_split_whitespaces(char *str)
{
	int 	*array;
	int	i;
	int	j;
	int	lenght;
	int	word;

	j = 0;//index pe coloana
	word = 0;//Variabila folosita la verificarea unei conditii
	i = 0;//index pe linie
	array = (char **)malloc(ft_count_word(str) * sizeof(char) + 1); //aloca memorie pt cate cuvinte sunt pe linie
	while (str[i] != '\0')
	{	
		if (ft_is_word(str[i] && word ==1)
				{
				word = 1;
				lenght = (ft_word_coun + 1);
				array[j] = (char *) malloc(lenght + 1) +sizeof(char))
					array[j] = ft_strncpy(arrayg_node_word,&str[i],lenght);
				j++;
				}
		else if (ft_is_word(str[i])
				word = 0;
				i++;		

				}
				array[j] = 0;
				}
				}
