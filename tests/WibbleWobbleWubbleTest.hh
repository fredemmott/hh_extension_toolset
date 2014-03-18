<?hh

class WibbleWobbleWubbleTest extends PHPUnit_Framework_TestCase {
  public function testHerp() {
    $this->assertSame('derp', (new Wibble\Wobble\Wubble())->herp());
  }
}
