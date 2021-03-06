/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header_bonus.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orahmoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 18:55:11 by orahmoun          #+#    #+#             */
/*   Updated: 2022/01/04 19:02:45 by orahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_BONUS_H
# define HEADER_BONUS_H
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <string.h>
# include <stdio.h>
# include <mlx.h>
# include <sys/types.h>
# include <stdarg.h>
# define DEFAULT_SIZE 25
# define ESC 53
# define UP_KEY 13
# define DOWN_KEY 1
# define RIGHT_KEY 2
# define LEFT_KEY 0
# define BUFFER_SIZE 1
# define P_UP "./bonus/assets/player_up.xpm"
# define P_DOWN "./bonus/assets/player.xpm"
# define P_LEFT "./bonus/assets/player_left.xpm"
# define P_RIGHT "./bonus/assets/player_right.xpm"
# define SKEL "./bonus/assets/skel.xpm"
# define GROUND "./bonus/assets/ground.xpm"
# define ROCK "./bonus/assets/rock.xpm"
# define COLLECT "./bonus/assets/collect.xpm"
# define EXIT "./bonus/assets/exit.xpm"

typedef struct s_mapinfo
{
	int	height;
	int	width;
	int	collectables;
	int	exits;
}				t_mapinfo;
typedef struct s_player
{
	int	x_map;
	int	y_map;
	int	moves;
}				t_player;
typedef struct s_skel
{
	int		x_map;
	int		y_map;
	void	*asset;
}				t_skel;
typedef struct s_assets
{
	void	*player;
	void	*player_up;
	void	*player_down;
	void	*player_left;
	void	*player_right;
	void	*skel;
	void	*ground;
	void	*rock;
	void	*collect;
	void	*exit;
}				t_assets;
typedef struct s_info
{
	void		*window;
	void		*connection;
	char		**map;
	t_player	s_player;
	t_mapinfo	map_info;
	t_assets	assets;
	t_skel		*skels;
	int			number_skels;
}				t_info;

int		ft_strlen_remove_newline(char *line);
char	*get_next_line(int fd);
char	*ft_strchr(const char *s, int c);
char	*ft_strjoin(char *s1, char *s2);
int		ft_strlen(const char *s);
char	*ft_substr(char const *s, unsigned int start, int len);
char	*ft_strdup(const char *s);
int		ft_strcmp(const char *s1, const char *s2);
int		check_ber(char *map_name);
int		check_map(char **map, t_info *info);
char	*get_next_line(int fd);
void	draw_map(char **map, t_info info);
void	**ft_realloc(void **tab, int new_size);
char	**parse_map(int map_fd);
void	init(t_info *info);
int		player_movement(t_info *info, t_player *p, int movement, int *collect);
void	handling_events(t_info *info);
int		ft_up_down(int movement);
int		ft_right_left(int movement);
int		check_collision(char **map, t_player p, int movement, int *collect);
int		check_collision_foe(char **map, t_skel s, int r_l, int u_d);
void	skel_move(t_info *info, int l_r, int u_d, int number_skel);
void	free_all(t_info info);
int		destroy_window(t_info *info);
char	*ft_itoa(int n);
char	*ft_strjoin_string(int number_of_strings, ...);
#endif
