def time_diff_milli(start, finish)
    (finish - start) * 1000.0
end

 puts "\"p\" value: "
p = gets.chomp
puts "\"n\" value: "
n = gets.chomp

date1 = Time.now

u = (2*n.to_f + 3)/(n.to_f + 1)

while (u.to_f-2).abs >= 10 ** -p.to_f do
    n = n.to_f + 1
    u = (2*n.to_f + 3)/(n.to_f + 1)
end

date2 = Time.now

date = time_diff_milli date1, date2

puts n.to_f
print date.round
print "ms"