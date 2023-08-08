def decimal_to_binary(decimal_number):
    if decimal_number == 0:
        return "0"

    binary_representation = ""


    while decimal_number > 0:
        remainder = decimal_number % 2
        binary_representation = str(remainder) + binary_representation
        decimal_number = decimal_number // 2

    return binary_representation


decimal_number = int(input("Input a number to convert in binary"))
binary_representation = decimal_to_binary(decimal_number)
print(f"The binary representation of {decimal_number} is: {binary_representation}")