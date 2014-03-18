<?hh

class FooBarBazTest extends PHPUnit_Framework_TestCase {
  public function testHerp() {
    $this->assertSame('derp', (new Foo\Bar\Baz())->herp());
  }
}
