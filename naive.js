function calculate(N) {
    var count = 0,
        i = 1,
        isPrime = function(n) {
            for (var i = 2; i < n; i++) {
                if (n%i === 0) {
                    return false;
                }
            }
            return true;
        };

    while (count <= N) {
        if (isPrime(i)) {
            console.log(i + " is prime");
            count++;
        }

        if (count === N) {
            console.log(i);
            break;
        }

        i++;
    }
}

calculate(25000);
