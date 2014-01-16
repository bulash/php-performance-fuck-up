<?php

function calculate($N) {
    $count = 0;
    $i = 1;

    while ($count <= $N) {
        if (isPrime($i)) {
            echo ("$i is prime\n");
            $count++;
        }

        if ($count === $N) {
            echo $i . "\n";
            break;
        }

        $i++;
    }
}

function isPrime($n) {
    for ($i = 2; $i < $n; $i++) {
        if ($n%$i === 0) {
            return false;
        }
    }
    return true;
};

calculate(25000);
