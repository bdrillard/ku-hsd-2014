$stdin.each_line do |line|
    if line.strip == "0"
        break
    end
    num, den = line.split(' ')
    numerator, denominator = num.to_i, den.to_i
    if numerator % denominator == 0
        puts "#{numerator / denominator}"
    else
        smallest = numerator
        if numerator >= denominator
            smallest = denominator
        end

        gcd = 1
        (1..smallest).each do |i|
            if numerator % i == 0 and denominator % i == 0
                gcd = i
            end
        end

        if gcd == 1
            puts "#{numerator}/#{denominator}"
        else
            simple_num = numerator / gcd
            simple_den = denominator / gcd
            puts "#{simple_num}/#{simple_den}"
        end
    end
end
