# @param {Integer} n
# @param {Integer} k
# @return {Integer[]}
    
def consecutive_difference_numbers(num, len, k)
  last_digit = num%10
  numbers =[]
  
  if len == 0
    return [num]
  end

  for i in 0..9
    if (last_digit - i).abs == k
      # puts (last_digit - i).abs
      # puts num
      numbers += consecutive_difference_numbers(num*10+i, len-1, k)
    end
  end
  
  numbers
end

def nums_same_consec_diff(n, k)
  numbers = []
  
  for i in 1..9
    numbers += consecutive_difference_numbers(i, n-1, k)
  end
  
  return numbers
end