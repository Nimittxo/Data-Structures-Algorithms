def addBinary(a, b):
        """
        :type a: str
        :type b: str
        :rtype: str
        """
        num1 = int(a, 2)
        num2 = int(b, 2)

        result = num1+num2
        bin_result = bin(result)[2:]

        return bin_result
    
a = input("Enter first binary number: ")
b = input("Enter second binary number: ")
print(addBinary(a, b))
text = "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat."
binary_representation = ' '.join(format(ord(char), '08b') for char in text)
print(binary_representation)

      