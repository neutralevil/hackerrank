(a, b, N) = gets.split(/\s+/).map(&:to_i)

c = 0
(3..N).each do
    c = b * b + a
    a = b
    b = c
end

puts c
