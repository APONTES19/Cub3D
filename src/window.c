
	void	*mlx_ptr;
	void	*win_ptr;

	mlx_ptr = mlx_init();
	win_ptr = mlx_new_window(mlx_ptr, 400, 800, "My firt Window Cub3D");
	mlx_loop(mlx_ptr);
	(void) win_ptr;
