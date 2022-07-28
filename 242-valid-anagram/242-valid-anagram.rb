# @param {String} s
# @param {String} t
# @return {Boolean}
def is_anagram(s, t)
  
    return false if s.size !=t.size
  x = s.chars.sort.join
  y = t.chars.sort.join
  
  for i in 0..x.length do
    return false if x[i]!= y[i]
  end
  
  return true
end