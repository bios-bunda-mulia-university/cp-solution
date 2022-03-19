class Solution(object):        
    def multiply(self, num1: str, num2: str) -> str:
        # If both number are 0
        if num1 == "0" and num2 == "0":
            return "0"
        # Reverse both numbers
        first_number = num1[::-1]
        second_number = num2[::-1]
        
        # For each digit in second number, multiply the digit by first number
        # and then store the multiplication result (reversed) in a list
        results = []
        for index, digit in enumerate(second_number):
            results.append(self.multiply_one_digit(digit, index, first_number))
        
        # Add all of the results together to get out final answer in reverse order
        answer = self.sum_results(results)

        # Reverse answer and join the digits to get the final answer
        return ''.join(str(digit) for digit in reversed(answer))
   
    def multiply_one_digit(self, digit2, num_zeros, first_number):
        """
        Multiplies first_number by a digit from second_number (digit 2).
        """
        # Insert zeros at the beginning of the current result based on the
        # current digit's place.
        current_result = [0] * num_zeros
        carry = 0
        
        # Multiply each digit in first_number with the current digit of the second_number
        for digit1 in first_number:
            multiplication = int(digit1) * int(digit2) + carry
            # Set carry equal to the tens place digit of multiplication
            carry = multiplication // 10
            # Append last digit to the current result
            current_result.append(multiplication % 10)
        
        if carry != 0:
            current_result.append(carry)
        return current_result
    
    def sum_results(self, results):
        # Init answer as a number from results
        answer = results.pop()

        # Add each result to the answer one at a time
        for result in results:
            new_answer = []
            carry = 0

            # Sum each digit from answer and result
            for digit1, digit2 in zip(result, answer, fillvalue=0):
                # Add current digit from both numbers
                curr_sum = digit1 + digit2 + carry
                # Set carry equal to the tens place digit of curr_sum
                carry = curr_sum // 10
                # Append the ones place digit of curr_sum to the new answer
                new_answer.append(curr_sum % 10)

            if carry != 0:
                new_answer.append(carry)
            
            # Update answer to new_answer which equals answer + result
            answer = new_answer

        return answer
