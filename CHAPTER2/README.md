# CHAPTER2

```값을 표현하는 최소단위: 8bit == 1byte```

1. 자료형 int, float, double, long double, char
    - 정수형
      1) int = Integer
          - 4Byte
          - 1, 2, 3, ... ,99, 12345 등..
    - 실수형
      1) float = Floating Point(부동소수점)
          - 4Byte
          - 1.0, 1.123, 42.321, ... ,100.231
      2) double = Floating Point(부동소수점)
          - 8Byte
          - 1.0, 1.123, 42.321, ... ,100.231
      3) long double = Floating Point(부동소수점)
          - 123
          - 1.0, 1.123, 42.321, ... ,100.231
    - 예제
      ``` c
          #include <stdio.h>

          int main() {
              int a = 123456;
              float b = 123.456;
              double c = 123.456;
              long double d = 123.456;
  
              printf("int a: %d\n", a);
              printf("float b: %.10f\n", b);
              printf("double c: %.10f\n", c);
              printf("double d: %.10lf\n", d);
  
              return 0;
          }
      ```
       - `int` = `%d`
       - `float`, `double` = `%f`
       - `long double` = `%lf`
       - 실행 사진
         
         ![image](https://user-images.githubusercontent.com/83276163/158315210-cbffd68c-db81-4692-bb85-a3b0a8cc2794.png)

         ```
         위 실행 사진에서 볼 수 있듯, double이 float보다 더 정확한 연산을 한다.
         double과 long double이 위 실행 사진에선 차이가 보이지 않지만,
         long double이 double보다 더 작은 수로 갈 수록 더 정교한 연산을 할 수 있다.
         ```     
      ```
         Q. 그럼 float은 왜 쓰나요?
         A. double은 64bit의 메모리를 차지하고, float은 32bit의 메모리를 차지합니다.
            대부분 실무에서는 double을 많이 사용하지만, 그렇다고 무작정 double을 쓰면 메모리 효율이 좋지 않습니다.
            정해진 범위가 float이 표현할 수 있는 범위라고 자신할 때에는 float을 사용하는 것이 좋습니다.
            (인공위성과 데이터 송 수신과 같은 1byte의 데이터도 중요할 때에는 확실하게 float/double을 나눠 사용하는게 메모리 효율에 좋겠죠?)
            
      ```
    
     - 문자형
      1) char = Character
          - 1Byte
          - a, b, c, asad, ... ,father
     - 예제
       ``` c
           #include <stdio.h>

           int main(){
               char a = 'n';
               char b = 'name';
               char c[] = "name";
               char d[4] = "name";
               char e[5] = "name";
               char f[4] = {'n', 'a', 'm', 'e'};
               char g[5] = {'n', 'a', 'm', 'e'};
               char *h = "name";

               printf("a: %c\n", a);
               printf("b: %s\n", b);
               printf("c: %s\n", c);
               printf("d: %s\n", d);
               printf("e: %s\n", e);
               printf("f: %s\n", f);
               printf("g: %s\n", g);
               printf("h: %s\n", h);

               return 0;
           }
       ```
       - 위 코드에서 `%c`는 `char`, `%s`는 `string`을 의미한다.
         - `%c` = 한 문자만 표현
         - `%s` = 문자열 전체를 표현
       - 위 코드를 실행했을 때 **문제가 있는 부분**은 어디일까?
         - `*h`의 경우 C언어의 꽃인 `Pointer`에서 배우는 부분이라 **나중에 설명한다**.
         - 문제가 발생한 경우는 `b`, `d`, `f`이다.
       - __Why?__
         - `b`:
           - char는 1Byte만 표현할 수 있다.
           - `char b = 'name'`의 경우는 사용하지 못한다.
         - `d`, `f`:
           - `char[]`에 여러 문자를 를 담게되면, 마지막에 보이지 않는 `\0`(공백)이 있어 크기를 정해줄 때 +1 해주어야 한다.
             - `char[]`로 안쓰고 `char[5]`와 같이 직접 크기를 정해주는 이유
               - 메모리 효율성을 위해서..
