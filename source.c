#include <stdio.h>

// Web meta generator for SEO
// 웹 메타 작성 프로그램입니다. 검색엔진 최적화 (SEO)에 도움을 줍니다.
// 제작자 : jiwonrom (https://jiwonrom.org)
// 버전   : 1.0.0

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

	printf("제목을 입력하세요: ");
	gets(title);
	printf("부제목을 입력하세요: ");
	gets(subtitle);
	printf("저자를 입력하세요: ");
	gets(author);
	printf("url을 입력하세요: ");
	gets(url);
	printf("이미지 경로를 입력하세요: ");
	gets(image);
	printf("키워드를 입력하세요: ");
	gets(keyword);
	printf("설명을 입력하세요: ");
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