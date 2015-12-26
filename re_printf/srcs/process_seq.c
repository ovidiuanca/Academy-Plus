void	process_seq(va_list *llist, char *seq, int *bytes)
{
	int lenght;

	lenght = ft_strlen(seq);
	if (ft_strchr(FLAGS, seq[lenght - 1]))
		*value = send_seq(llist, seq, *bytes);
}
