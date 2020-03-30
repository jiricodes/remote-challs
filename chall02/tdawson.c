#include <stdio.h>
#include <unistd.h>

char *hv_rgb2hex(int r, int g, int b)
{
	char *hex_str;

	if (r < 0 || g < 0 || b < 0)
		return NULL;
	hex_str = malloc(8);
	unsigned int hex = ((r & 0xff) << 16) + ((g & 0xff) << 8) + (b & 0xff);
	sprintf(hex_str, "#%x", hex);
	return hex_str;
}
