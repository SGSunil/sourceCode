/*
 * Read a line from a descriptor.  Read the line one byte at a time,
 * looking for the newline.  We store the newline in the buffer,
 * then follow it with a null (the same as fgets(3)).
 * We return the number of characters up to, but not including,
 * the null (the same as strlen(3)).
 */

#include <unistd.h>

int readline(int fd, char *ptr, int maxlen) {
  int n, rc;
  char c;

  for (n = 1; n < maxlen; n++) {
    if ( (rc = read(fd, &c, 1)) == 1) {
      *ptr++ = c;
      if (c == '\n')
	break;
    } else if (rc == 0) {
      if (n == 1)
	return(0);	/* EOF, no data read */
      else
	break;		/* EOF, some data was read */
    } else
      return(-1);	/* error */
  }
  
  *ptr = 0;
  return(n);
}
