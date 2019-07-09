package hello

import "testing"

func TestSum(t *testing.T){
  expected := 3
  actual := sum(1, 2)
  if actual != expected {
    t.Error("Test failed")
  }
}
