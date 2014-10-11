$stdin.each_line.each_with_index do |line, i|
    if i == 0
        next
    end
    puts "Hello #{line.strip}!"
end
