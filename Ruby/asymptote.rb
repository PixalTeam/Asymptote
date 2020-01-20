puts "\"p\" value: "
p = gets.chomp
puts "\"n\" value: "
n = gets.chomp
u = (2*n.to_f + 3)/(n.to_f + 1)

while (u.to_f-2).abs >= 10 ** -p.to_f do
    n += 1
    u = (2*n.to_f + 3)/(n.to_f + 1)
end

puts n.to_f