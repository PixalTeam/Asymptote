<?php

function microtime_float()
{
    list($usec, $sec) = explode(" ", microtime());
    return ((float)$usec + (float)$sec);
}

$p = readline("\"p\" value: ");
$n = readline("\"n\" value: ");
$u = (2*$n + 3)/($n + 1);

$date1 = microtime_float();;

while (abs($u - 2) >= pow(10, -$p)) {
    $n += 1;
    $u = (2*$n + 3)/($n + 1);
}

$date = (microtime_float() - $date1) * 1000;

echo($n . "\r\n");
echo(round($date) . "ms")
?>
