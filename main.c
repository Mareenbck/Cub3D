
#include "../includes/cub.h"

int	ft_errors(char *str)
{
	printf("Error\n%s\n", str);
	return (1);
}

void	ft_read_map(t_data *data, char *file)
{
	char	*get_line;
	int		fd;

	fd = open(file, O_RDONLY);
	get_line = ft_get_next_line(fd);
	if (!get_line)
		ft_errors("Error : file");
	data->cub.col = ft_strlen(get_line);
	data->cub.line = 0;
	while (get_line)
	{
		free(get_line);
		get_line = ft_get_next_line(fd);
		data->cub.line++;
		if (ft_strlen(get_line) > (size_t)data->cub.col)
			data->cub.col = ft_strlen(get_line);
	}
	close(fd);
}

char	**ft_init_tab(t_data *data)
{
	char **tab;

	tab = (char **)malloc(sizeof(char *) * data->cub.line + 1);
	if (!tab)
		return (NULL);
	tab[data->cub.line] = NULL;
	while (data->cub.line > 0)
	{
		data->cub.line--;
		tab[data->cub.line] = (char *)malloc(sizeof(char) * (data->cub.col));
		if (!tab[data->cub.line])
		{
			ft_free_tab(tab);
			return (NULL);
		}
	}
	return (tab);
}

int main(int ac, char **av)
{
	t_data	data;

	if (ac != 2)
		return (ft_errors("Wrong nb of args"));
	ft_init_texture(&data);
	ft_init_cub(&data);
	data.fd = open(av[1], O_RDONLY);
	if (ft_check_extension(av[1], ".cub") != 0)
	{
		close(data.fd);
		return (1);
	}
	ft_read_map(&data, av[1]);
	// data.fd = open(av[1], O_RDONLY);
	ft_parsing(&data, av[1]);
	if (!(draw_window(&data.cub)))
	{
		//free
		return (-1);
	}
	printf("mlx = %p", data.cub.mlx);
	mlx_hook(data.cub.mlx_win, 17, 1L << 2, close_window, &data.cub);
	mlx_hook(data.cub.mlx_win, 2, 1L << 0, keycode, &data.cub);
	mlx_loop_hook(data.cub.mlx, put_img, &data.cub);
	mlx_loop(data.cub.mlx);
	return (0);
}
