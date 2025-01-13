### Data Type 
- Store ASCII code into char and then and int 1 to the char . the char reacts as int .


```cpp
#include <iostream>
#include <conio.h>
using namespace std;
int main(){
    char ch ='A'; // assign ASCII code for 'A' to ch
    int num = ch; // store same code in an int

    cout << "The ASCII Code for "<< ch <<" is " << num << "\n";
    cout << "Adding 1 to the character code : \n";
    ch = num + 1;
    num =  ch;
    cout << "The ASCII Code for "<< ch <<" is " << num << "\n";
    

    return 0;
}
```
### Output Result :
<p> The ASCII Code for A is 65 </p><br>
<p> Adding 1 to the character code : </p><br>
<p> The ASCII Code for B is 66 </p><br>
