
import re
input_string = "hellow 23, hi 77, lovely 18 and sweet 16"
pattern = r'\d+'
matches = re.findall(pattern, input_string)
numbers = [int(match) for match in matches]
print(numbers)
