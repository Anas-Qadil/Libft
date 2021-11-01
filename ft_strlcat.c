size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	srclen;
	size_t	destlen;
	size_t	i;

	srclen = ft_strlen(src);
	destlen = ft_strlen(dest);
	if (n <= destlen)
		return (n + srclen);
	i = 0;
	while (src[i] != '\0' && (i + destlen + 1) < n)
	{
		dest[destlen + i] = src[i];
		i++;
	}
	dest[destlen + i] = '\0';
	return (destlen + ft_strlen(src));
}
