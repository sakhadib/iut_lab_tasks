# RECURSION

## printing 1 to n using recursionn

```cpp
#include <bits/stdc++.h>
using namespace std;

const int n = 5;

void print(int i){
    if(i > n){
        return;
    }
    cout <<  i << "\t";
    i++;
    print(i);
}

int main() {
    
    print(1);
    return 0;
}

///Output : 1 2 3 4 5 
```

Here we are printing 1 to n using recursion. We are using a variable i to keep track of the number we are printing. We are printing i and then incrementing it by 1. Then we are calling the print function again with the incremented value of i. We are doing this until i is greater than n. When i becomes greater than n, we are returning from the function.

### This Function execution cycle
```SQL
print(1)
if(1 > 5) // false
output 1
    print(2)
    if(2 > 5) // false
    output 2
        print(3)
        if(3 > 5) // false
        output 3
            print(4)
            if(4 > 5) // false
            output 4
                print(5)
                if(5 > 5) // false
                output 5
                    print(6)
                    if(6 > 5) // true
                    return
                return
            return
        return
    return
return
```


## printing n to 1 using recursionn

```cpp
#include <bits/stdc++.h>
using namespace std;

const int n = 5;
void print(int i){
    if(i > n){
        return;
    }
    print(i+1);
    cout << i << "  ";
}

int main() {
    print(1);
    
    return 0;
}

//Output : 5 4 3 2 1
```

Here we are printing n to 1 using recursion. We are using a variable i to keep track of the number we are printing. We are calling the print function first and then printing i. We are doing this until i is greater than n. When i becomes greater than n, we are returning from the function.

### This Function execution cycle
```SQL
print(1)
if(1 > 5) // false
    print(2)
    if(2 > 5) // false
        print(3)
        if(3 > 5) // false
            print(4)
            if(4 > 5) // false
                print(5)
                if(5 > 5) // false
                    print(6)
                    if(6 > 5) // true
                    return
                output 5
                return
            output 4
            return
        output 3
        return
    output 2
    return
output 1
```



## Calculating factorial
    
```cpp
#include <bits/stdc++.h>
using namespace std;

double factorial(double n){
    if(n == 0) return 1;

    return n * factorial(n-1);
}

int main() {

    cout << factorial(5) << endl;
    return 0;
}
```

Here we are calculating factorial of a number using recursion. We are using a variable n to keep track of the number we are calculating factorial of. We are returning 1 when n is 0. Otherwise we are returning n * factorial(n-1). We are doing this until n is 0.

### This Function execution cycle
```SQL
factorial(5)
if(5 == 0) // false
    return 5 * factorial(4)
    if(4 == 0) // false
        return 4 * factorial(3)
        if(3 == 0) // false
            return 3 * factorial(2)
            if(2 == 0) // false
                return 2 * factorial(1)
                if(1 == 0) // false
                    return 1 * factorial(0)
                    if(0 == 0) // true
                    return 1 // 1
                return 1 * 1 // 1
            return 2 * 1 // 2
        return 3 * 2 // 6
    return 4 * 6 // 24
return 5 * 24 // 120
```

This is how the factorial recursion worked. We are calling the factorial function again and again until n is 0. When n is 0, we are returning 1. Then we are returning n * factorial(n-1) for each function call. This is how we are calculating factorial of a number using recursion.

## Printing Fibonacci Series

```cpp
#include <bits/stdc++.h>
using namespace std;

void fibo(int n, int a = 0, int b = 1) {
    if (n == 0)
        return;
    cout << a << " ";
    fibo(n - 1, b, a + b);
}

int main() {

    fibo(10);
    return 0;
}
```

Here we are printing fibonacci series using recursion. We are using a variable n to keep track of the number of terms we have to print. We are using two more variables a and b to keep track of the last two numbers of the series. We are printing a and then calling the fibo function again with n-1, b and a+b. We are doing this until n is 0.

### This Function execution cycle
