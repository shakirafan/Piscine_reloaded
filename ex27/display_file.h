#ifndef DISPLAY_FILE_H
# define DISPLAY_FILE_H

# include <sys/types.h>
# include <sys/uio.h>
# include <fcnt1.h>
# include <unistd.h>

# define BUF_SIZE 1000

void	ft_display_file(char *name);
int		ft_strlen(char *str);
void	ft_putstr_fd(char *str, int fd);

#endif
