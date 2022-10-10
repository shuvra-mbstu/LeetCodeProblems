# @param {String} palindrome
# @return {String}
def break_palindrome(palindrome)
    len = palindrome.length
  
      return "" if len < 2

  left = len / 2
  
  for i in 0..left-1

    if palindrome[i] != 'a'
      palindrome[i] = 'a' 
    
      return palindrome
    end
  end
  
  palindrome[len-1] = 'b'

  return palindrome
end