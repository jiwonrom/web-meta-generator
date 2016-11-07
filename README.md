# web-meta-generator
>웹 메타 작성 프로그램입니다. **검색엔진 최적화 (SEO)**를 목적으로 합니다.<br>오픈그래프, 트위터 카드, HTML 메타 태그를 지원합니다.<br><br>
Web meta generator written in C. For **SEO** works. Supports Opengraph, Twitter card, HTML meta tags.

## 사용법 How-to-use
* web-meta-generator.exe 를 실행하여 정보를 입력합니다.<br>
* web-meta-generator.exe가 위치한 동일한 경로에 result.txt가 생성되며, result.txt의 내용을 복사하여 HTML 문서의 헤더에 붙여넣습니다.<br><br>
* Open web-meta-generator.exe and insert data.<br>
* result.txt will be generated in same directory which web-meta-generator locates, and copy&paste the content of result.txt in header of HTML document.

## Trouble shooting
(Windows) <i>"컴퓨터에 VCRUNTIME140D.dll이(가) 없어 프로그램을 시작할 수 없습니다. 프로그램을 다시 설치하여 이 문제를 해결하십시오."</i> 라는 시스템 오류가 발생하는 경우 
* VCRUNTIME140D.dll files 폴더 아래 "32bit-dll" 및 "64bit-dll" 폴더에 위치한 "vcruntime140d.dll" 파일을 운영체제 버전에 맞게 복사해주시면 됩니다.
* 32bit OS의 경우 : 32bit-dll 폴더의 vcruntime140d.dll 파일을 [ C:\Windows\System32\ ] 경로로 복사합니다.
* 64bit OS의 경우 : 위 32bit OS 작업을 먼저 진행 후, 추가로 64bit-dll 폴더의 vcruntime140d.dll 파일을 [ C:\Windows\SysWOW64\ ] 경로로 복사합니다.

## 라이센스 License
이 소프트웨어는 [MIT 라이센스](https://github.com/jiwonrom/web-meta-generator/blob/master/LICENSE)를 따라 자유롭게 이용하실 수 있습니다.

This software can be freely used with [MIT LICENSE](https://github.com/jiwonrom/web-meta-generator/blob/master/LICENSE).
