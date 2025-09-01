1. Print MySirG 10 times
#include <stdio.h>
int main() {
    for(int i=1; i<=10; i++) {
        printf("MySirG\n");
    }
    return 0;
}

2. Print first 10 natural numbers
#include <stdio.h>
int main() {
    for(int i=1; i<=10; i++) {
        printf("%d ", i);
    }
    return 0;
}

3. Print first 10 natural numbers in reverse
#include <stdio.h>
int main() {
    for(int i=10; i>=1; i--) {
        printf("%d ", i);
    }
    return 0;
}

4. Print first 10 even natural numbers
#include <stdio.h>
int main() {
    for(int i=1; i<=10; i++) {
        printf("%d ", 2*i);
    }
    return 0;
}

5. Print first 10 even natural numbers in reverse
#include <stdio.h>
int main() {
    for(int i=10; i>=1; i--) {
        printf("%d ", 2*i);
    }
    return 0;
}

6. Print first 10 odd natural numbers
#include <stdio.h>
int main() {
    for(int i=0; i<10; i++) {
        printf("%d ", 2*i+1);
    }
    return 0;
}

7. Print squares of first 10 natural numbers
#include <stdio.h>
int main() {
    for(int i=1; i<=10; i++) {
        printf("%d ", i*i);
    }
    return 0;
}

8. Print cubes of first 10 natural numbers
#include <stdio.h>
int main() {
    for(int i=1; i<=10; i++) {
        printf("%d ", i*i*i);
    }
    return 0;
}

9. Print squares of first 10 natural numbers in reverse
#include <stdio.h>
int main() {
    for(int i=10; i>=1; i--) {
        printf("%d ", i*i);
    }
    return 0;
}

10. Print cubes of first 10 natural numbers in reverse
#include <stdio.h>
int main() {
    for(int i=10; i>=1; i--) {
        printf("%d ", i*i*i);
    }
    return 0;
}
