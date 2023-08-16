class Solution:
    def isValid(self, s: str) -> bool:
        if len(s) == 0:
            return False  # Changed the return value to False

        stack = []  # Use a stack to keep track of opening symbols

        opening_brackets = '({['
        closing_brackets = ')}]'
        bracket_mapping = {')': '(', '}': '{', ']': '['}

        for char in s:
            if char in opening_brackets:
                stack.append(char)
            elif char in closing_brackets:
                if not stack or stack[-1] != bracket_mapping[char]:
                    return False
                stack.pop()

        return len(stack) == 0

Solution1 = Solution()
s = input("Enter: ")

print(Solution1.isValid(s))

# This code snippet is a clear and concise way to check for balanced brackets using a stack data structure. Here's a step-by-step breakdown of what's happening:

# For each character char in the input string s, the code checks whether it's an opening or closing bracket.

# If char is an opening bracket (found in opening_brackets), it's pushed onto the stack using stack.append(char).

# If char is a closing bracket (found in closing_brackets), the code performs these checks:

# If the stack is empty (not stack), it means there's no corresponding opening bracket for this closing bracket, and the brackets are not balanced. In this case, the function returns False. If the stack is not empty, it checks if the last character in the stack (stack[-1]) matches the expected corresponding opening bracket from bracket_mapping. If they don't match, the brackets are not balanced, and the function returns False. If the checks pass, indicating that the current closing bracket's corresponding opening bracket is on top of the stack and they match, the opening bracket is removed from the stack using stack.pop(). This helps ensure that only properly matched opening and closing brackets are removed.

# At the end of the loop, if the stack is empty, it means all brackets were balanced, and the function returns True. If the stack is not empty, there were unmatched opening brackets, and the function returns False.

# This code effectively determines whether a given string of brackets contains balanced pairs of opening and closing brackets.