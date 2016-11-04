#include <stdio.h>

// web-meta-generator
// Web meta generator written in C. For SEO works. Supports Opengraph, Twitter card, HTML meta tags.
// Github : https://github.com/jiwonrom/web-meta-generator
// Author : jiwonrom (https://jiwonrom.org)
// Version: 1.0.0

int main(void)
{
	FILE *f;
	char title[30];
	char subtitle[30];
	char author[30];
	char url[100];
	char image[300];
	char keyword[300];
	char description[300];

	f = fopen("result.txt", "w");

	printf("Type title: ");
	gets(title);
	printf("Type subtitle: ");
	gets(subtitle);
	printf("Type author: ");
	gets(author);
	printf("Type url: ");
	gets(url);
	printf("Type image link: ");
	gets(image);
	printf("Type keywords: ");
	gets(keyword);
	printf("Type description: ");
	gets(description);

	fprintf(f, "<title>%s | %s</title>\n", title, subtitle);
	fprintf(f, "<meta name = \"description\"content = \"%s,%s,%s\">\n", description, title, subtitle);
	fprintf(f, "<meta name = \"keywords\" content = \"%s,%s,%s\">\n", keyword, title, subtitle);
	fprintf(f, "<meta name = \"author\" content = \"%s\">\n", author);
	fprintf(f, "<meta property = \"og:title\" content = \"%s | %s\"\n", title, subtitle);
	fprintf(f, "<meta property = \"og:url\" content = \"%s\"\n", url);
	fprintf(f, "<meta property = \"og:image\" content = \"%s\"\n", image);
	fprintf(f, "<meta property = \"og:description\" content = \"%s,%s,%s\"\n", description, title, subtitle);
	fprintf(f, "<meta property = \"og:locale\" content = \"ko_KR\"\n");
	fprintf(f, "<meta property = \"og:site_name\" content = \"%s\"", title);
	fprintf(f, "<meta name = \"twitter:card\" content = \"summary\">\n");
	fprintf(f, "<meta name = \"twitter:site\" content = \"%s\">\n", title);
	fprintf(f, "<meta name = \"twitter:title\" content = \"%s | %s\"\n", title, subtitle);
	fprintf(f, "<meta name = \"twitter:description\" content = \"%s,%s,%s\"\n", description, title, subtitle);
	fprintf(f, "<meta name = \"twitter:image\" content = \"%s\"\n", image);
	fprintf(f, "<link rel = \"canonical\" href = \"%s\">\n", url);

	fclose(f);
}
