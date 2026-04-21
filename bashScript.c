#!/bin/bash
echo "Hello, World!"
#!/bin/bash
echo "Enter your name:"
read name
echo "Hello, $name!"
#!/bin/bash

echo "Enter a number:"
read num

if (( num % 2 == 0 ))
then
    echo "Even number"
else
    echo "Odd number"
fi
#!/bin/bash

echo "Enter a number:"
read n

fact=1

for (( i=1; i<=n; i++ ))
do
    fact=$((fact * i))
done

echo "Factorial = $fact"

// run
chmod +x script.sh
./script.sh
