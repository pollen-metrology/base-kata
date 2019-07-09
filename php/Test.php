<?php
declare(strict_types=1);

include("Code.php");

use PHPUnit\Framework\TestCase;

final class Test extends TestCase
{
    public function testAdd(): void
    {
	   $this->assertEquals(3, add(1,2)); 
    }
}
